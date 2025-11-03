// WAP which accept number from user and count frequency such as digits which are less than 6

#include<stdio.h>

int CountLess(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)     // Updater for negative number
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;     // get last digit

        if(iDigit < 6)        // condition check
        {
            iCnt++;
        }

        iNo = iNo / 10;       // remove last digit
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountLess(iValue);

    printf("Frequency of digits less than 6 is : %d",iRet);

    return 0;
}
