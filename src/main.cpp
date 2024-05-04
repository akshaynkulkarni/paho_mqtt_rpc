#include "paho_mqtt_rpc.h"
#include <vector>
#include <string>

int main() {
    paho_mqtt_rpc();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    paho_mqtt_rpc_print_vector(vec);
}
