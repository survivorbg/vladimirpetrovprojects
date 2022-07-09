#include <iostream>
#include <string>
#include "header.h"




int main(){
std::string output1;
std::string word1;
int number1{};
int number2{};
std::string word2;
double n1 {};
double n2 {};
double o2 {};

std::cout << "Word 1 : " << std::endl;
std::cin >> word1;
std::cout << "Word 2 : " << std::endl;
std::cin >> word2;

f1_max(word1,word2,output1);
std::cout << output1 << " is bigger!" << std::endl;

std::cout << "Number 1(int) : " << std::endl;
std::cin >> number1;
std::cout << "Number 2(int) : " << std::endl;
std::cin >> number2;
int result = f2_max(number1, number2);
std::cout << result << " is bigger!" << std::endl;
std::cout << "Number 1(floating point number) : " << std::endl;
std::cin >> n1;
std::cout << "Number 2(floating point number) : " << std::endl;
std::cin >> n2;
f3_double_max(n1,n2,&o2);
std::cout << o2 << " is bigger!" << std::endl;

}