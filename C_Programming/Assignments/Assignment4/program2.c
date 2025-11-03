
// Write a program which accept number from user and Display its factors in decreasing order....

//  Input  :  12
//  Output :  144               (6 4 3 2 1)

//  Input  :  13
//  Output :  1                 (1)

//  Input  :  10
//  Output :  10                (5 2 1)


#include<stdio.h>

int FactRev(int iNo)
{
    int i = 0;
    int iMult = 1;

    for(i >= iNo/2; i >=1; i--)
    {
        if(iNo % i == 0)
        {
            printf("%d ", i);
            iMult = iMult * i;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d", &iValue);
 
    iRet = FactRev(iValue);

    printf("Output : %d\n",iRet);


    return 0;
}