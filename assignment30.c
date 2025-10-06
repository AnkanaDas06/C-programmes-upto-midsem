#include<stdio.h>
int main()
{
    int n;
    printf("enter number:\t");
    scanf("%d",&n);
    int category;
    
    if (n>=95)
    category=1;
    else if (n<95&&n>=90)
    category = 2;
    else if (n<90&&n>=80)
    category=3;
     else if (n<80&&n>=70)
    category=4;
      else if(n<70)
    category = 5;
    switch (category)
    {
    case 1:
        printf("you got 'a+' grade\n");
        break;
    case 2:
        printf("you got 'a' grade\n");
        break;
    case 3:
        printf("you got 'b' grade\n");
        break;
    case 4:
        printf("you got 'c' grade\n");
        break;
    case 5:
        printf("you got 'f' grade\n");
        break;
    
    default:
        break;
    }
}