#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int  k;

    do
    {
        k = get_int("k: ");
    }
    while (k <= 0);


   switch (k)
    {
        case 1:
            printf("Погано\n");
            break;
        case 2:
            printf("Незадовільно\n");
            break;
        case 3:
            printf("Задовільно\n");
            break;
        case 4:
            printf("Добре\n");
            break;
        case 5:
            printf("Відмінно\n");
            break;
        default:
            printf("Помилка\n");
            break;
    }
}