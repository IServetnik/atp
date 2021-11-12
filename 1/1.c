#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int  n;

    do
    {
        n = get_int("N: ");
    }
    while (n <= 0);


    for(int i=1; i <= n; i++) {
        int square = i*i;

        if(square == n) {
            printf("%i\n", i);
            break;
        } else if(square > n) {
            printf("%i\n", i - 1);
            break;
        }
    }
}