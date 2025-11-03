// Accept single digit number from User and prit it into word.....

// Input  : 9
// Output : Nine

// Input  : 3
// Output : Three

// Input  : 34
// Output : Invalid Number

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0 || iNo > 9)                    // single digit validation
    {
        printf("Invalid Number \n");
        return;
    }

    switch(iNo)
    {
        case 1:
            printf("One\n");
            break;

        case 2:
            printf("Two\n");
            break;

        case 3:
            printf("Three\n");
            break;
            

        case 4:
            printf("Four\n");
            break;

        case 5:
            printf("Five\n");
            break;

        case 6:
            printf("Six\n");
            break;

        case 7:
            printf("Seven\n");
            break;

        case 8:
            printf("Eight\n");
            break;

        case 9:
            printf("Nine\n");
            break;

        default :
            printf("Invalid Input\n");

    }
}

// Time Complexity : O(1)

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}