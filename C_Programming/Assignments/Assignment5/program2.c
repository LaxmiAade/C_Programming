// Find Maximum Number from given of Two Numbers

#include<stdio.h>

int FindMax(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

int main()
{
    int Num1, Num2, result;

    printf ("Enter the Two Numbers : ");
    scanf("%d %d",&Num1,&Num2);

    result = FindMax(Num1,Num2);
    printf ("Maximum Number is : %d\n",result);


    return 0;
}