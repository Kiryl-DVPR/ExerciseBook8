#include <iostream>
#include <string>     

int ftypeTurtels(int, int);
int ftypeHare(int, int);

int main()
{
    int const SizeArray = 70;

    char ArrayT[SizeArray] = {0};
    char ArrayH[SizeArray] = {0};

    int moveT=0;
    int moveH=0;
    int type=0;

    while (moveT != SizeArray && moveH != SizeArray)
    {

        ArrayT[moveT] = 450;
        ArrayH[moveH] = 72;
        
        for (int i = 0; i < SizeArray; i++)
        {
            std::cout << ArrayT[i] << " ";
        }

        std::cout << std::endl;

        for (int a = 0; a < SizeArray; a++)
        {
            std::cout << ArrayH[a] << " ";
        }

        if (moveT == moveH)
        {
            std::cout << std::endl << "Ouch!!!" ;
        }
        

        ArrayT[moveT] = 0;
        ArrayH[moveH] = 0;

        moveT++;
        moveH++;

        std::cout << std::endl;

        type = rand()%9+2;

        moveT = ftypeTurtels(moveT, type);
        moveH = ftypeHare(moveH, type);
    }
    
    
}

int ftypeTurtels(int moveT, int type)
{
    if (type <= 5)
    {
        moveT = moveT +3;
    }
        if (type <=10 && type >=8)
        {
            moveT = moveT + 1;
        }   
            if (type <=7 && type >=6)
            {
                moveT = moveT-6;
                if (moveT < 0)
                {
                    moveT = 0;
                }
                
            }

    
    return moveT;
    
}

int ftypeHare(int moveH, int type)
{
    if ( type <=2 )
    {
        moveH = moveH + 0;
    }
    if ( type <= 4 && type > 2 )
    {
        moveH = moveH + 9;
    }
    if ( type == 5 )
    {
        moveH = moveH - 12;
    }
    if ( type >= 6 && type <= 8 )
    {
        moveH = moveH + 1;
    }
    if ( type >= 9 )
    {
        moveH = moveH - 2;
    }

    return moveH;

}
