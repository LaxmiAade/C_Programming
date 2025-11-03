// WAP which accept number from user and count frequency of 2 in it.

// WAP which accept number from user and count frequency of 2 in it.

#include<stdio.h>

int CountTwo(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    if(iNo < 0)      
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;     // get last digit

        if(iDigit == 2)        // check if digit is 2
        {
            iCnt++;
        }
        iNo = iNo / 10;        // remove last digit
    }

    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("Frequency of 2 is : %d",iRet);

    return 0;
}
