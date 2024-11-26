#include <stdio.h> 

void print_stars()
{
    for(int i = 0; i<10; i++)
        printf("*");
}
int main(void)
{
    for(int n = 0; n < 10; n++)
    {
        print_stars();
        printf("\n");
    }

    return 0;
}