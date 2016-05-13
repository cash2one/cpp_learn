#include <hash_map>
#include <iostream>
#include <string>

int main() {
    __gnu_cxx::hash_map<int, std::string> name_map;
    name_map[1] = "hello";
    name_map[2] = "world";

    return 0;
}





