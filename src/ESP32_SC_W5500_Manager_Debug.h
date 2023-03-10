/****************************************************************************************************************************
  ESP32_SC_W5500_Manager_Debug.h

  For Ethernet shields using ESP32_SC_W5500 (ESP32_S2/3, ESP32_C3 + LwIP W5500)

  Modified from
  1. Tzapu               (https://github.com/tzapu/WiFiManager)
  2. Ken Taylor          (https://github.com/kentaylor)
  3. Khoi Hoang          (https://github.com/khoih-prog/ESP_WiFiManager)

  Built by Khoi Hoang https://github.com/khoih-prog/ESP32_SC_W5500_Manager
  Licensed under MIT license

  Version: 1.0.0

  Version Modified By  Date      Comments
  ------- -----------  ---------- -----------
  1.0.0   K Hoang     15/12/2022 Initial coding for ESP32_S3_W5500 (ESP32_S3 + W5500)
 *****************************************************************************************************************************/

#pragma once

#ifndef ESP32_SC_W5500_Manager_Debug_H
#define ESP32_SC_W5500_Manager_Debug_H

#ifdef ESP32_ETH_MGR_DEBUG_PORT
  #define DBG_PORT_ESP_EM      ESP32_ETH_MGR_DEBUG_PORT
#else
  #define DBG_PORT_ESP_EM      Serial
#endif

// Change _ESP32_ETH_MGR_LOGLEVEL_ to set tracing and logging verbosity
// 0: DISABLED: no logging
// 1: ERROR: errors
// 2: WARN: errors and warnings
// 3: INFO: errors, warnings and informational (default)
// 4: DEBUG: errors, warnings, informational and debug

#ifndef _ESP32_ETH_MGR_LOGLEVEL_
  #define _ESP32_ETH_MGR_LOGLEVEL_       1
#endif

/////////////////////////////////////////////////////////

const char ESP_EM_MARK[] = "[EM] ";
const char ESP_EM_SP[]   = " ";

#define ESP_EM_PRINT        DBG_PORT_ESP_EM.print
#define ESP_EM_PRINTLN      DBG_PORT_ESP_EM.println

#define ESP_EM_PRINT_MARK   ESP_EM_PRINT(ESP_EM_MARK)
#define ESP_EM_PRINT_SP     ESP_EM_PRINT(ESP_EM_SP)

/////////////////////////////////////////////////////////

#define LOGERROR(x)         if(_ESP32_ETH_MGR_LOGLEVEL_>0) { ESP_EM_PRINT_MARK; ESP_EM_PRINTLN(x); }
#define LOGERROR0(x)        if(_ESP32_ETH_MGR_LOGLEVEL_>0) { ESP_EM_PRINT(x); }
#define LOGERROR1(x,y)      if(_ESP32_ETH_MGR_LOGLEVEL_>0) { ESP_EM_PRINT_MARK; ESP_EM_PRINT(x); ESP_EM_PRINT_SP; ESP_EM_PRINTLN(y); }
#define LOGERROR2(x,y,z)    if(_ESP32_ETH_MGR_LOGLEVEL_>0) { ESP_EM_PRINT_MARK; ESP_EM_PRINT(x); ESP_EM_PRINT_SP; ESP_EM_PRINT(y); ESP_EM_PRINT_SP;  ESP_EM_PRINTLN(z); }
#define LOGERROR3(x,y,z,w)  if(_ESP32_ETH_MGR_LOGLEVEL_>0) { ESP_EM_PRINT_MARK; ESP_EM_PRINT(x); ESP_EM_PRINT_SP; ESP_EM_PRINT(y); ESP_EM_PRINT_SP; ESP_EM_PRINT(z); ESP_EM_PRINT_SP; ESP_EM_PRINTLN(w); }

/////////////////////////////////////////////////////////

#define LOGWARN(x)          if(_ESP32_ETH_MGR_LOGLEVEL_>1) { ESP_EM_PRINT_MARK; ESP_EM_PRINTLN(x); }
#define LOGWARN0(x)         if(_ESP32_ETH_MGR_LOGLEVEL_>1) { ESP_EM_PRINT(x); }
#define LOGWARN1(x,y)       if(_ESP32_ETH_MGR_LOGLEVEL_>1) { ESP_EM_PRINT_MARK; ESP_EM_PRINT(x); ESP_EM_PRINT_SP; ESP_EM_PRINTLN(y); }
#define LOGWARN2(x,y,z)     if(_ESP32_ETH_MGR_LOGLEVEL_>1) { ESP_EM_PRINT_MARK; ESP_EM_PRINT(x); ESP_EM_PRINT_SP; ESP_EM_PRINT(y); ESP_EM_PRINT_SP;  ESP_EM_PRINTLN(z); }
#define LOGWARN3(x,y,z,w)   if(_ESP32_ETH_MGR_LOGLEVEL_>1) { ESP_EM_PRINT_MARK; ESP_EM_PRINT(x); ESP_EM_PRINT_SP; ESP_EM_PRINT(y); ESP_EM_PRINT_SP; ESP_EM_PRINT(z); ESP_EM_PRINT_SP; ESP_EM_PRINTLN(w); }

/////////////////////////////////////////////////////////

#define LOGINFO(x)          if(_ESP32_ETH_MGR_LOGLEVEL_>2) { ESP_EM_PRINT_MARK; ESP_EM_PRINTLN(x); }
#define LOGINFO0(x)         if(_ESP32_ETH_MGR_LOGLEVEL_>2) { ESP_EM_PRINT(x); }
#define LOGINFO1(x,y)       if(_ESP32_ETH_MGR_LOGLEVEL_>2) { ESP_EM_PRINT_MARK; ESP_EM_PRINT(x); ESP_EM_PRINT_SP; ESP_EM_PRINTLN(y); }
#define LOGINFO2(x,y,z)     if(_ESP32_ETH_MGR_LOGLEVEL_>2) { ESP_EM_PRINT_MARK; ESP_EM_PRINT(x); ESP_EM_PRINT_SP; ESP_EM_PRINT(y); ESP_EM_PRINT_SP; ESP_EM_PRINTLN(z); }
#define LOGINFO3(x,y,z,w)   if(_ESP32_ETH_MGR_LOGLEVEL_>2) { ESP_EM_PRINT_MARK; ESP_EM_PRINT(x); ESP_EM_PRINT_SP; ESP_EM_PRINT(y); ESP_EM_PRINT_SP; ESP_EM_PRINT(z); ESP_EM_PRINT_SP; ESP_EM_PRINTLN(w); }

/////////////////////////////////////////////////////////

#define LOGDEBUG(x)         if(_ESP32_ETH_MGR_LOGLEVEL_>3) { ESP_EM_PRINT_MARK; ESP_EM_PRINTLN(x); }
#define LOGDEBUG0(x)        if(_ESP32_ETH_MGR_LOGLEVEL_>3) { ESP_EM_PRINT(x); }
#define LOGDEBUG1(x,y)      if(_ESP32_ETH_MGR_LOGLEVEL_>3) { ESP_EM_PRINT_MARK; ESP_EM_PRINT(x); ESP_EM_PRINT_SP; ESP_EM_PRINTLN(y); }
#define LOGDEBUG2(x,y,z)    if(_ESP32_ETH_MGR_LOGLEVEL_>3) { ESP_EM_PRINT_MARK; ESP_EM_PRINT(x); ESP_EM_PRINT_SP; ESP_EM_PRINT(y); ESP_EM_PRINT_SP; ESP_EM_PRINTLN(z); }
#define LOGDEBUG3(x,y,z,w)  if(_ESP32_ETH_MGR_LOGLEVEL_>3) { ESP_EM_PRINT_MARK; ESP_EM_PRINT(x); ESP_EM_PRINT_SP; ESP_EM_PRINT(y); ESP_EM_PRINT_SP; ESP_EM_PRINT(z); ESP_EM_PRINT_SP; ESP_EM_PRINTLN(w); }

/////////////////////////////////////////////////////////

#endif    // ESP32_SC_W5500_Manager_Debug_H

