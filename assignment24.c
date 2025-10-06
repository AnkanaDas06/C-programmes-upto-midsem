#include<stdio.h>
int main(){
int a;
float b;
char c;
double g;

int d = sizeof(a);
int e = sizeof(b);
int f = sizeof(c);
int h = sizeof(g);

printf("Size of int is: %d\n Size of float is: %d\n Size of char is: %d\n Size of double is: %d\n",d,e,f,g);

return 0;


}