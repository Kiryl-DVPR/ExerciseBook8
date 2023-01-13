#include <iostream>
#include <string>     

int ftype(int, int);

int main()
{
    int const SizeArray = 70;

    char Array[SizeArray] = {0};

    int move=0;
    int type=0;

    while (move != SizeArray )
    {
        
        move = ftype(move, type);

        Array[move] = 450;
        
        for (int i = 0; i < SizeArray; i++)
        {

            std::cout << Array[i] << " ";
        
        }

        Array[move] = 0;

        move++;

        std::cout << std::endl;

        type = rand()%9+2;
    }
    
    
}

int ftype(int move, int type)
{
    if (type <= 5)
    {
        move = move +3;
    }
        if (type <=10 && type >=8)
        {
            move = move + 1;
        }   
            if (type <=7 && type >=6)
            {
                 move = move-6;
            }

    
    return move;
    
}
