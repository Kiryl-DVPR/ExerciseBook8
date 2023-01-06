#include <iostream>

void exchenge(double *, double *);

int poly(int);

int evaluate(int, int (*)(int ));

int main()
{
    char array[]={"AEIOU"};
    char array2[]={'A','E', 'I','O','U'};

    std::cout << array2[1] <<std::endl;
    std::cout << array[0] <<std::endl;
}

void exchenge(double* xPtr, double* yPtr);

int poly(int n)
{
    return n*2;
}

int evaluate(int n, int (*poly)(int a))
{
    return n;
} 