#include<stdio.h>
int main()
{
    int m,n,o;
    printf("enter number 1:\t");
    scanf("%d",&m);
    printf("enter number 2:\t");
    scanf("%d",&n);
    printf("enter number 3:\t");
    scanf("%d",&o);
    if ((m>n)&&(m>o))
    printf("the greatest number of them is %d",m);
    else if ((n>m)&&(n>o))
    printf("the greatest number of them is %d",n);
    else if ((o>n)&&(o>m))
    printf("the greatest number of them is %d",o);
    else
    printf("every number you entered is equal value");
    return 0;
}