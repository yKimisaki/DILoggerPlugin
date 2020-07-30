# DILoggerPlugin

UE_LOGっぽい使い心地で、DIで外部からログに対する振る舞いを変更できる、シンプルなログシステム

# 使い方

まるっと落として、プロジェクトのPluginsフォルダに入れてください。

`MyProject.Build.cs`の`PublicDependencyModuleNames`に`"DILoggerPlugin"`を追加してください。

`MyProject.Build.cs`の`PublicIncludePaths`に`"DILoggerPlugin/Public"`を追加してください。

プロジェクト内に`MyProjectLogger.h`と`MyProjectLogger.cpp`を用意し、
```MyProjectLogger.h
#pragma once

#include "DILogMacros.h"

DECLARE_LOG_CATEGORY_EXTERN(MyProjectLogTemp, Log, All);
```
と
```MyProjectLogger.cpp
#include "MyProjectLogger.h"

DEFINE_LOG_CATEGORY(MyProjectLogTemp);
```
のような感じでお望みのカテゴリを作成してください。

DILoggerを使用したいファイルで上記で作った`MyProjectLogger.h`をinclideすれば準備完了です。

# 機能

ソースコード側から単純なログを出力。
Verbosityを指定する方式ではなく、Verbosityを含めたマクロを用意しています。
OutputLogのVerbosityによるフィルタリングもUE_LOGと同じです。

```cpp
DI_LOG(MyProjectLogTemp, TEXT("DI Logger Test LOG %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
DI_LOG_WARNING(UE4TestLogSystem, TEXT("DI Logger Test WARNING %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
DI_LOG_ERROR(UE4TestLogSystem, TEXT("DI Logger Test ERROR %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
DI_LOG_VERBOSE(UE4TestLogSystem, TEXT("DI Logger Test VERBOSE %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
DI_LOG_VERYVERBOSE(UE4TestLogSystem, TEXT("DI Logger Test VERYVERBOSE %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
DI_LOG_FATAL(UE4TestLogSystem, TEXT("DI Logger Test FATAL %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
```

PrintStringのようにコンソール画面への出力は以下です。
色(FColor::のものです）、時間、文字スケールを指定できます。

```cpp
DI_LOG_DISPLAY(MyProjectLogTemp, White, 5.f, 3.f, TEXT("DI Logger Test LOG %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
DI_LOG_DISPLAY_WARNING(MyProjectLogTemp, Yellow, 5.f, 3.f, TEXT("DI Logger Test WARNING %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
DI_LOG_DISPLAY_ERROR(MyProjectLogTemp, Red, 5.f, 3.f, TEXT("DI Logger Test ERROR %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
DI_LOG_DISPLAY_VERBOSE(MyProjectLogTemp, White, 5.f, 3.f, TEXT("DI Logger Test VERBOSE %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
DI_LOG_DISPLAY_VERYVERBOSE(MyProjectLogTemp, White, 5.f, 3.f, TEXT("DI Logger VERYVERBOSE Test %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
```

![image](https://user-images.githubusercontent.com/1702680/88913961-d6481200-d29c-11ea-876d-b38f788e6640.png)

アサートウィンドウを出すものも用意しています。

```cpp
DI_LOG_ASSERT(MyProjectLogTemp, TEXT("DI Logger Test LOG %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
DI_LOG_ASSERT_WARNING(UE4TestLogSystem, TEXT("DI Logger Test WARNING %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
DI_LOG_ASSERT_ERROR(UE4TestLogSystem, TEXT("DI Logger Test ERROR %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
DI_LOG_ASSERT_VERBOSE(UE4TestLogSystem, TEXT("DI Logger Test VERBOSE %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
DI_LOG_ASSERT_VERYVERBOSE(UE4TestLogSystem, TEXT("DI Logger Test VERYVERBOSE %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
```

![image](https://user-images.githubusercontent.com/1702680/88913912-c7f9f600-d29c-11ea-85b1-cd418c01093a.png)

Blueprintからも同じ使い勝手でログを出力できます

![image](https://user-images.githubusercontent.com/1702680/88914235-48205b80-d29d-11ea-8fdb-4c295a1a3959.png)

## OutputLogの出力

後述しますが、Logの挙動は`DILogHandler`というクラスにあります。
デフォルトの挙動では、ログメッセージの他、ファイル名、行番号、関数名なども同時に表示されます。

BP側から呼んだ場合
```
MyProjectLogTemp: DI Logger Test LOG
    -FILE: AbilityTest_C /Game/EmbeddedContent/Levels/AbilityTest/UEDPIE_0_AbilityTest.AbilityTest:PersistentLevel.AbilityTest_C_2:0
    -FUNCTION:  AbilityTest_C.ReceiveBeginPlay
```

C++側から呼んだ場合
```
MyProjectLogTemp: DI Logger Test LOG 105 50.299999  FUN for ALL, ALL for FUN.
    -FILE: K:\ue4lib\UE4Test\Source\UE4Test\Levels\CPP_LevelScriptActor.cpp:35
    -FUNCTION: auto __cdecl ACPP_LevelScriptActor::BeginPlay::<lambda_bf3ac1c84b503667bbab9a4389cfbd1c>::operator ()<struct FLogCategoryMyProjectLogTemp,wchar_t[29],int,float,wchar_t[26]>(const struct FLogCategoryMyProjectLogTemp &,const wchar_t (&)[29],const int &,const float &,const wchar_t (&)[26]) const
```

# DIで挙動を変える

上記のすべてのログは、`UDILogger`の`SetLogHandler`で登録されている`IDILogHandlerInterface`に渡されます。
`IDILogHandlerInterface`には、
`Log(const FString& Message, const void* Context, const FString& FileName, int32 Line, const FString& CalledFunction, const FLogCategoryBase* Category, ELogVerbosity::Type Verbosity, bool WithAssertion, bool ToScreen, float TimeToDisplay, const FColor& DisplayColor, const FVector2D& DisplayTextScale)`
という関数が定義されています。
デフォルトではGameInstanceが初期化されるタイミングで、`DILogHandler`が`UDILogger`にセットされます。

プロジェクト独自でログを加工したい場合は、上記の`IDILogHandlerInterface`を実装したLogHandlerを作成し、`MyProjectGameInstance`のInit()の内部などで、`GetSubsystem<UDILogger>().SetHandler(MyProjectLogHandler);`のように指定してください。

