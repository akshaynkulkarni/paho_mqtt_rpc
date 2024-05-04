cmake_minimum_required(VERSION 3.15)
project(paho_mqtt_rpc CXX)

find_package(PahoMqttCpp CONFIG REQUIRED)


add_executable(paho_mqtt_rpc src/paho_mqtt_rpc.cpp src/main.cpp)

target_link_libraries(paho_mqtt_rpc PRIVATE PahoMqttCpp::paho-mqttpp3-static)


install(TARGETS paho_mqtt_rpc DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
