#include <iostream>
#include <math.h>
int main(){

/*
//Check if character is alphanumeric

std::cout << "C is alphanumeric : " << std::isalnum('C') << std::endl; 
std::cout << "* is alphanumeric : " << std::isalnum('*') << std::endl;
char a{')'};
if(std::isalnum(a)){
    std::cout << "The character is alphanumerical." << std::endl;
}else{
    std::cout << "The character is NOT alphanumerical" << std::endl;
}
*/
/*
//Check if cha is alphabetic
std::cout << "C is alphanumeric : " << std::isalpha('C') << std::endl;
std::cout << "* is alphanumeric : " << std::isalpha('*') << std::endl;
std::cout << "1 is alphanumeric : " << std::isalpha('1') << std::endl;

char a {'P'};
if (std::isalpha(a)){
    std::cout << "This character is alphabetic." << std::endl;
}else{
    std::cout << "This character is NOT alphabetic." << std::endl;
}
*/
char array1[]{"Hello! How are you ? What are you doing so late, its almost 00:30 !"};
size_t al_char_count{};
size_t other_count{};
size_t digit_count{};
size_t blank_count{};
size_t unknown{};
size_t up_count{};
size_t low_count{};
char array2[std::size(array1)];

for(size_t i{};i<std::size(array1);i++){
    while(std::isalpha(array1[i])){
        array2[i] = array1[i];
        break;
    }
    if(std::isalpha(array1[i])){

        if(std::isupper(array1[i])){
            std::cout << array1[i] ;
            up_count+=1;
        }else{
            low_count+=1;
            }
        ++al_char_count;
        
    }else{
        if(std::isdigit(array1[i])){
            ++digit_count;
        }else{
            if(std::isblank(array1[i])){
                ++blank_count;
            }else{
                ++unknown;
            }
        }
        ++other_count;
        }
}
std::cout << "There are total of " << std::size(array1) << " characters in the array!" << std::endl;
std::cout << "There are " << al_char_count << " alphabeticals characters in the array!" << std::endl;
std::cout << "There are " << up_count << " uppercase characters and "<< low_count << " lowercase characters in the array." << std::endl;
std::cout << "There are " << other_count - 1 << " non-alphabetical chars in the array" << std::endl; //-1 cuz of the null termination
std::cout << "There are " << digit_count << " digits." << std::endl;
std::cout << "There are " << blank_count << " blank characters in the array!" << std::endl;
std::cout << "There are " << unknown << " unknown characters in the array!" << std::endl;
std::cout << "There are " << array2 << " unknown characters in the array!" << std::endl;

}