#include <iostream>

int main()
{
    long value1 = 200000, value2;

    long *longPtr;

    longPtr = &value1;

    std :: cout << "longPtr = " << *longPtr << std::endl;

    value2 = *longPtr;

    std :: cout << "Value2 = " << value2 << std::endl;

    std :: cout << "Adress Value1 = " << &value1 << std::endl;
    std :: cout << "Adress longPtr = " << longPtr << std::endl;
}