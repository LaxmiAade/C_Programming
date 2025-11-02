
// Write the Program to Accept the one Number from User if Number is less than 10 then Print "Hello" otherwise Print "Demo"

#include <stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}