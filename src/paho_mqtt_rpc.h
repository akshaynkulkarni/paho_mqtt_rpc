#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define PAHO_MQTT_RPC_EXPORT __declspec(dllexport)
#else
  #define PAHO_MQTT_RPC_EXPORT
#endif

PAHO_MQTT_RPC_EXPORT void paho_mqtt_rpc();
PAHO_MQTT_RPC_EXPORT void paho_mqtt_rpc_print_vector(const std::vector<std::string> &strings);
