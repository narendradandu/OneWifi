/************************************************************************************
  If not stated otherwise in this file or this component's LICENSE file the
  following copyright and licenses apply:

  Copyright 2024 RDK Management

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

  http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
 **************************************************************************/

#include <syslog.h>

/*For RDKB platforms invoking direct CcspCommonLibrary APIs  */
#include "ccsp.h"
#include "ccsp_trace.h"
#include "wifi_hal.h"

void init_ccsp()
{
   /* Placeholder for time being */
}

void CcspTraceEmergencyRdkb(char  *format, ...)
{
    va_list args;
    va_start(args, format);
    CcspTraceEmergency((format, args));
    va_end(args);
}

void CcspTraceAlertRdkb(char  *format, ...)
{
    va_list args;
    va_start(args, format);
    CcspTraceAlert((format, args));
    va_end(args);
}

void CcspTraceCriticalRdkb(char  *format, ...)
{
    va_list args;
    va_start(args, format);
    CcspTraceCritical((format, args));
    va_end(args);
}


void CcspTraceErrorRdkb(char  *format, ...)
{
    va_list args;
    va_start(args, format);
    CcspTraceError((format, args));
    va_end(args);
}

void CcspTraceWarningRdkb(char  *format, ...)
{
    va_list args;
    va_start(args, format);
    CcspTraceWarning((format, args));
    va_end(args);
}

void CcspTraceNoticeRdkb(char  *format, ...)
{
    va_list args;
    va_start(args, format);
    CcspTraceNotice((format, args));
    va_end(args);
}

void CcspTraceInfoRdkb(char  *format, ...)
{
    va_list args;
    va_start(args, format);
    CcspTraceInfo((format, args));
    va_end(args);
}

void CcspTraceDebugRdkb(char  *format, ...)
{
    va_list args;
    va_start(args, format);
    CcspTraceDebug((format, args));
    va_end(args);

}
