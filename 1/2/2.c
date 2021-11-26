#include <cs50.h>
#include <stdio.h>

int main(void){
    int a,b;


    a = get_int("A: ");

    do
    {
        b = get_int("B: ");
    }
    while(a >= b);

    for(int i=(b-1); i > a; i--)
    {
        printf("%i\n",i);
    }

    printf("N: %i\n", (b-a) - 1);
}

