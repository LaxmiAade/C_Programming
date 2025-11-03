 // Write a program which accept name from user and print that name

 // Input  : Laxmi Rahul Rathod
 // Output : Laxmi Rahul Rathod

 #include<stdio.h>

 int main()
 {
    char Name[30];

    printf("Please Enter your full name : ");
    scanf(" %[^\n]s", Name);

    printf("Your name is : %s",Name);

    return 0;
 }