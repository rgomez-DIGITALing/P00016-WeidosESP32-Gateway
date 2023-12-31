#pragma once

#define FIRST_INDEX     1
#define FLAG_SIZE       1

//Flags

#define WIFI_SSID_SET_FLAG_INDEX                    FIRST_INDEX
#define WIFI_PASS_SET_FLAG_INDEX                    (WIFI_SSID_SET_FLAG_INDEX + FLAG_SIZE)
#define GATEWAY_DEVICE_ID_SET_FLAG_INDEX            (WIFI_PASS_SET_FLAG_INDEX + FLAG_SIZE)
#define SCOPE_ID_SET_FLAG_INDEX                     (GATEWAY_DEVICE_ID_SET_FLAG_INDEX + FLAG_SIZE)
#define GROUP_PRIMARY_KEY_SET_FLAG_INDEX            (SCOPE_ID_SET_FLAG_INDEX + FLAG_SIZE)
#define WEIDOS_MODEL_ID_SET_FLAG_INDEX              (GROUP_PRIMARY_KEY_SET_FLAG_INDEX + FLAG_SIZE)
#define EM_3PH_BASIC_LINE_MODEL_ID_SET_FLAG_INDEX   (WEIDOS_MODEL_ID_SET_FLAG_INDEX + FLAG_SIZE)
#define EM_1PH_BASIC_LINE_MODEL_ID_SET_FLAG_INDEX   (EM_3PH_BASIC_LINE_MODEL_ID_SET_FLAG_INDEX + FLAG_SIZE)






//Data

#define WIFI_SSID_INDEX             (EM_1PH_BASIC_LINE_MODEL_ID_SET_FLAG_INDEX + FLAG_SIZE)
#define WIFI_SSID_SIZE              32

#define WIFI_PASS_INDEX             (WIFI_SSID_INDEX + WIFI_SSID_SIZE)
#define WIFI_PASS_SIZE              63

#define GATEWAY_DEVICE_ID_INDEX     (WIFI_PASS_INDEX + WIFI_PASS_SIZE)
#define GATEWAY_DEVICE_ID_SIZE      20

#define SCOPE_ID_INDEX              (GATEWAY_DEVICE_ID_INDEX + GATEWAY_DEVICE_ID_SIZE)
#define SCOPE_ID_SIZE               20

#define GROUP_PRIMARY_KEY_INDEX     (SCOPE_ID_INDEX + SCOPE_ID_SIZE)
#define GROUP_PRIMARY_KEY_SIZE      20

#define WEIDOS_MODEL_ID_INDEX       (GROUP_PRIMARY_KEY_INDEX + GROUP_PRIMARY_KEY_SIZE)
#define WEIDOS_MODEL_ID_SIZE        20

#define EM_3PH_BASIC_LINE_MODEL_ID_INDEX    (WEIDOS_MODEL_ID_INDEX + WEIDOS_MODEL_ID_SIZE)
#define EM_3PH_BASIC_LINE_MODEL_ID_SIZE     20

#define EM_1PH_BASIC_LINE_MODEL_ID_INDEX    (EM_3PH_BASIC_LINE_MODEL_ID_INDEX + EM_3PH_BASIC_LINE_MODEL_ID_SIZE)
#define EM_1PH_BASIC_LINE_MODEL_ID_SIZE     20