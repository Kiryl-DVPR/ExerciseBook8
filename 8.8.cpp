#include <iostream>

int main()
{
    int const Size = 5;

    unsigned int values[Size] = {2,4,6,8,10};

    unsigned int *vPtr;

    for (int i = 0; i < Size; i++)
    {
        std::cout << values[i] <<" ";
    }
    
    std::cout << std::endl;

    vPtr = values;
    std::cout << "==========================="<<std::endl;

    //e) вывод элементов массива используя нотации Указатель/смещение

    for (int i = 0; i < Size; i++)
    {
        std::cout << *(vPtr+i) <<" ";
    }

    std::cout << std::endl << "==========================="<<std::endl;
    //f)
    for (int i = 0; i < Size; i++)
    {
        std::cout << *(values+i) <<" ";
    }

    std::cout << std::endl << "==========================="<<std::endl;

    //g) вывод элементов массива используя индекс с указателем на массив

    for (int i = 0; i < Size; i++)
    {
        std::cout << vPtr[i] <<" ";
    }

    std::cout << std::endl << "==========================="<<std::endl;

    // h)
    std::cout<< "Five element array Value = " << *(values+Size-1) <<" ";
    
}