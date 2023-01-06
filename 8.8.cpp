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
    std::cout << *vPtr;

    //e 
    

}