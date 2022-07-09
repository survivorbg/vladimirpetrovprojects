#include <iostream>
#include <string>
#include "header.h"




int main(){
std::string output1;
std::string word1;
int number1{};
int number2{};
std::string word2;

std::cout << "Word 1 : " << std::endl;
std::cin >> word1;
std::cout << "Word 2 : " << std::endl;
std::cin >> word2;

f1_max(word1,word2,output1);
std::cout << output1 << " is bigger!" << std::endl;

std::cout << "Napishete chislo1 : " << std::endl;
std::cin >> number1;
std::cout << "Napishete chislo2 : " << std::endl;
std::cin >> number2;
int result = f2_max(number1, number2);
std::cout << result << " is bigger!" << std::endl;

}