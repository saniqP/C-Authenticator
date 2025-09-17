#include <cstdlib>
#include <iostream>
#include <string>

#include <csignal>
#include <atomic>

#include ".data/datas.h"

std::atomic<bool> exit_flag(false);

void signal_handler(int signal) {
    if (signal == SIGINT) {
        std::cout << "\nВВЕДИТЕ ПАРОЛЬ!: " << std::endl;
    }
}

bool CheckPasswd(std::string user_passwd){
    std::string passwd = GetSysName() + "|" + std::to_string(GetDataCode());   

    if (passwd == user_passwd){
        return true;
    }

    else {
        return false;
     }
}


int main() {

    std::signal(SIGINT, signal_handler);

    std::string user_passwd;
    std::string passwd = GetSysName() + "|" + std::to_string(GetDataCode());

    std::cout << "Введите пароль: ";
    std::cin >> user_passwd;

    bool check = CheckPasswd(user_passwd);

    if (check){
        std::cout << "пароль верный" << std::endl;
    }
    else{
        std::cout << "не верно :( ты не саня" << std::endl;
        std::system("sleep 1 && pkill kitty");
    }
    
    return 0;
}
