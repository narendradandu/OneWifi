/************************************************************************************
  If not stated otherwise in this file or this component's LICENSE file the
  following copyright and licenses apply:

  Copyright 2018 RDK Management

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

#ifndef _WIFI_WHIX_H_
#define _WIFI_WHIX_H_

typedef struct {
    int radius_failure_count[MAX_VAP];
    int eap_failure_count[MAX_VAP];
    int sched_handler_id;
    bool wps_enabled[MAX_NUM_RADIOS];
    int radio_activity_factor[MAX_NUM_RADIOS];
    int carriersensethreshold_exceeded[MAX_NUM_RADIOS];
    int channel_util[MAX_NUM_RADIOS];
    BOOL cli_stat_list[MAX_VAP];
} whix_data_t;

#endif //_WIFI_WHIX_H_