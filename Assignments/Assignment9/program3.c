// Write A Program to find even factorial o given number....

// Input  : 5
// Output : 8       (4 * 2)

// Input  : -5
// Output : 8       (4 * 2)

// Input  : 10
// Output : 8       (10 * 8  * 4 * 2)


#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;

    for(iCnt = 1, iFact = 1; iCnt < iNo; iCnt++)
    {
        if(iCnt%2 == 0)
        {
            iFact = iFact * iCnt;
        }
    }    
    return iFact;

}   // Time Complexity is = N

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is : %d",iRet);

    return 0;
}
