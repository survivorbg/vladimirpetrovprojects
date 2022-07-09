#include <iostream>
#include <string>
#include "header.h"




int main(){
std::string o1;
std::string duma1;
int chislo1{};
int chislo2{};
std::string duma2;

std::cout << "Napishete duma1 : " << std::endl;
std::cin >> duma1;
std::cout << "Napishete duma2 : " << std::endl;
std::cin >> duma2;

f1_max(duma1,duma2,o1);
std::cout << o1 << std::endl;

std::cout << "Napishete chislo1 : " << std::endl;
std::cin >> chislo1;
std::cout << "Napishete chislo2 : " << std::endl;
std::cin >> chislo2;
int result = f2_max(chislo1, chislo2);
std::cout << result << std::endl;

}