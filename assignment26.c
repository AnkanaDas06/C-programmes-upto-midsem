#include<stdio.h>
int main()
{
    int a,b,c;
    char d;
    printf("enter the numbers with operation a_b :-");
    scanf("%d%c%d",&a,&d,&b);
    switch(d)
    {
        case '*':
        c=a*b;
        printf("%d\n",c);
        break;
        case '+':
        c=a+b;
        printf("%d\n",c);
        break;
        case '-':
        c=a-b;
        printf("%d\n",c);
        break;
        case '/':
        c=a/b;
        printf("%d\n",c);
        break;
        case '%':
        c=a%b;
        printf("%d\n",c);
        break;
        default:
        printf("no answer possible");
    }
    return 0;
}