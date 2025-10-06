//write a c program to check whether the entered number is even or not
#include<stdio.h>
int main()
{
    char a;
    printf("ENTER INPUT:\t");
    scanf("%d",&a);
    if (a=='H'||a=='h')
    {
        printf("This is head");
    }
    else
    {
        printf("This is tail");
    }
    return 0;
    }