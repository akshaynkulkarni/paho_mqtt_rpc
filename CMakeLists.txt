cmake_minimum_required(VERSION 3.15)
project(paho_mqtt_rpc CXX)

find_package(PahoMqttCpp CONFIG REQUIRED)

include_directories(include)

add_library(Skeleton STATIC src/skeleton.cpp)
target_link_libraries(Skeleton PRIVATE PahoMqttCpp::paho-mqttpp3-static)

add_library(Proxy STATIC src/proxy.cpp)
target_link_libraries(Proxy PRIVATE PahoMqttCpp::paho-mqttpp3-static)

add_executable(client src/client.cpp)
target_link_libraries(client PRIVATE Proxy)

add_executable(server src/server.cpp)
target_link_libraries(server PRIVATE Skeleton)
