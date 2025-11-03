
// Write a program which accept number from user and Display its Multiplication of factors....

//  Input  :  12
//  Output :  144               (1 * 2 * 3 * 4 * 6)

//  Input  :  13
//  Output :  1                 (1)

//  Input  :  10
//  Output :  10                (1 * 2 * 5)


#include<stdio.h>

int MultFact(int iNo)
{
    int i = 0;
    int iMult = 1;

    for(i = 1; i <= iNo/2; i++)
    {
        if(iNo % i == 0)
        {
            iMult = iMult * i;
        }
    }
    printf("\n");
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d", &iValue);
 
    iRet = MultFact(iValue);
    printf("Multiplication of factors is : %d\n",iRet);
    
    
    return 0;
}