//write a c program to check whether the entered number is even or not
#include<stdio.h>
int main()
{
    int a;
    printf("ENTER NUMBER:\t");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("THE NUMBER YOU ENTERED IS EVEN NUMBER");
    }
    else
    {
        printf("THE NUMBER YOU ENTERED IS ODD NUMBER");
    }
    return 0;
    }