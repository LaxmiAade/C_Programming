
// Write a Program Accept one Character from User and check Whether that Character is vowel(a,e,i,o,u) or not.....

//  Input  :   E    ---->    Output :  TRUE
//  Input  :   d    ---->    Output :  FALSE

#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char cValue)
{
    if ((cValue >= 'A') && (cValue <= 'Z'))
    {
        cValue = cValue + 32;
    }

    if (cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
    {
        return true;   
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Character : \n");
    scanf(" %c", &cValue);
    
    bRet = CheckVowel(cValue);

    if(bRet == true)
    {
        printf("It is a Vowel\n");
    }

    else
    {
        printf("It is not a Vowel\n");
    }
    return 0;
}