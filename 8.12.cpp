#include <iostream>
#include <string>     

void ftypeTurtels(int *, int);
void ftypeHare(int *, int);

int main()
{
    int const SizeArray = 70;

    char ArrayT[SizeArray] = {0};
    char ArrayH[SizeArray] = {0};

    int moveT=0;
    int *PtrmoveT = &moveT;

    int moveH=0;
    int *PtrmoveH = &moveH;

    int type=0;

    while (*PtrmoveT != SizeArray && *PtrmoveH != SizeArray)
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

        if (*PtrmoveT == *PtrmoveH)
        {
            std::cout << std::endl << "Ouch!!!" ;
        }
        

        ArrayT[moveT] = 0;
        ArrayH[moveH] = 0;

        ++*PtrmoveT;
        ++*PtrmoveH;

        std::cout << std::endl;

        type = rand()%9+2;

        ftypeTurtels(PtrmoveT, type);
        ftypeHare(PtrmoveH, type);
    }
    
    
}

void ftypeTurtels(int *PtrmoveT, int type)
{
    if (type <= 5)
    {
        *PtrmoveT = *PtrmoveT +3;
    }
        if (type <=10 && type >=8)
        {
            *PtrmoveT = *PtrmoveT + 1;
        }   
            if (type <=7 && type >=6)
            {
                *PtrmoveT = *PtrmoveT-6;
                if (*PtrmoveT < 0)
                {
                    *PtrmoveT = 0;
                }
                
            }

}

void ftypeHare(int *PtrmoveH, int type)
{
    if ( type <=2 )
    {
        *PtrmoveH = *PtrmoveH + 0;
    }
    if ( type <= 4 && type > 2 )
    {
        *PtrmoveH = *PtrmoveH + 9;
    }
    if ( type == 5 )
    {
        *PtrmoveH = *PtrmoveH - 12;
    }
    if ( type >= 6 && type <= 8 )
    {
        *PtrmoveH = *PtrmoveH + 1;
    }
    if ( type >= 9 )
    {
        *PtrmoveH = *PtrmoveH - 2;
    }

}
