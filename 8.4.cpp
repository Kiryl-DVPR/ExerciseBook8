#include <iostream>

int main()
{
    double number1, number2;

    number1 = 7.3;

    char s1[100], s2[100];

    char* ptr;

    // a) b) c)

    double *fPtr;

    fPtr = &number1;

    std::cout <<"fPtr: "<< *fPtr << std::endl;

    //d) e)

    number2 = *fPtr;

    std::cout << "Number 2: "<< number2 << std::endl;

    std::cout << "Adress number 1: "<< &number1 << std::endl;

    std::cout << "Adress fPtr: "<< fPtr;


}