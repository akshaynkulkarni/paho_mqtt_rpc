#include <iostream>
#include "paho_mqtt_rpc.h"

void paho_mqtt_rpc(){
    
}

void paho_mqtt_rpc_print_vector(const std::vector<std::string> &strings) {
    for(std::vector<std::string>::const_iterator it = strings.begin(); it != strings.end(); ++it) {
        std::cout << "paho_mqtt_rpc/0.1 " << *it << std::endl;
    }
}
