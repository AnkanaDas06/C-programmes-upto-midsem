//write a c program to check whether roll 100 present or not
#include<stdio.h>
int main()
{
    int a;
    printf("ENTER NUMBER:\t");
    scanf("%d",&a);
    if (a==100)
    {
        printf("100 ROLL NUMBER IS PRESENT");
    }
    else
    {
        printf("100 IS ABSENT");
    }
    return 0;
    }