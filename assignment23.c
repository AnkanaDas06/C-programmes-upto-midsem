#include<stdio.h>
int main()
{
    char alp;
    printf("enter your chosen alphabet :\t");
    scanf("%c",&alp);
    if (alp=='a'||alp=='e'||alp=='i'||alp=='o'||alp=='u'||alp=='A'||alp=='E'||alp=='I'||alp=='O'||alp=='U')
    printf("you entered a vowel");
    else
    printf("you entered a consonant");
    return 0;
}