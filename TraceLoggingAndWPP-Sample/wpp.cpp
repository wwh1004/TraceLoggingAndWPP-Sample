// https://learn.microsoft.com/en-us/windows-hardware/drivers/wdf/using-wpp-software-tracing-in-kmdf-drivers
// https://learn.microsoft.com/en-us/windows-hardware/drivers/devtest/wpp-preprocessor
// https://github.com/microsoft/win-net-test/blob/main/src/isr/svc/main.cpp

#include <windows.h>
#include "wpp.h"
#include "wpp.tmh"

void WppMain()
{
    WPP_INIT_TRACING(NULL);

    TraceInfo(TRACE_CONTROL, "start");

    WPP_CLEANUP();
}
