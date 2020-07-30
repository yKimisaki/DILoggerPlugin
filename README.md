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
DI_LOG_DISPLAY(MyProjectLogTemp, Red, 5.f, 3.f, TEXT("DI Logger Test LOG %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
DI_LOG_DISPLAY_WARNING(MyProjectLogTemp, Red, 5.f, 3.f, TEXT("DI Logger Test WARNING %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
DI_LOG_DISPLAY_ERROR(MyProjectLogTemp, Red, 5.f, 3.f, TEXT("DI Logger Test ERROR %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
DI_LOG_DISPLAY_VERBOSE(MyProjectLogTemp, Red, 5.f, 3.f, TEXT("DI Logger Test VERBOSE %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
DI_LOG_DISPLAY_VERYVERBOSE(MyProjectLogTemp, Red, 5.f, 3.f, TEXT("DI Logger VERYVERBOSE Test %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
```

アサートウィンドウを出すものも用意しています。

```cpp
DI_LOG_ASSERT(MyProjectLogTemp, TEXT("DI Logger Test LOG %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
DI_LOG_ASSERT_WARNING(UE4TestLogSystem, TEXT("DI Logger Test WARNING %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
DI_LOG_ASSERT_ERROR(UE4TestLogSystem, TEXT("DI Logger Test ERROR %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
DI_LOG_ASSERT_VERBOSE(UE4TestLogSystem, TEXT("DI Logger Test VERBOSE %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
DI_LOG_ASSERT_VERYVERBOSE(UE4TestLogSystem, TEXT("DI Logger Test VERYVERBOSE %d %f  %s"), 105, 50.3f, TEXT("FUN for ALL, ALL for FUN."));
```
