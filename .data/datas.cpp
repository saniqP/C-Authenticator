#include <fstream>
#include <string>

std::string GetSysName(){
    std::ifstream file("/etc/hostname");
    std::string hostname;
    std::getline(file, hostname);

    return hostname;
}


int GetDataCode(){
    std::ifstream file("/etc/code");
    std::string code;
    std::getline(file, code);
    
    int return_code = std::stoi(code);

    return return_code;
}