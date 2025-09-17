#include <cstdlib>
#include <iostream>
#include <string>
#include ".data/datas.h"

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
