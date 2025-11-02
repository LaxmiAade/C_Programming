
// Write the Program to print 5 to 1 Numbers on Screen

#include<stdio.h>

void Display()
{
    int i = 5;

    while(i >= 1)
    {
        printf("%d\t",i); 
        i--;
    }
    printf("\n");                   
}

int main()
{
    Display();
    return 0;
}