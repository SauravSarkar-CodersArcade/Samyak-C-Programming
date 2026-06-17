#include<stdio.h>
int main(){
    int a = 10, b = 20;
    printf("%d\n", a++ + b++); // 10 + 20 = 30
    printf("a=%d, b=%d\n",a,b); // a=11, b=21
    printf("%d\n", ++a + ++b); // 12 + 22 = 34
    printf("a=%d, b=%d\n",a,b); // a=12, b=22
    printf("%d\n", --a + b++); //  11 + 22 = 33
    printf("a=%d, b=%d\n",a,b); // a=11 , b=23 
    return 0;
}