#include <stdio.h>
typedef struct{
int a,b,c;
} num;
int main(){
    num n;
printf("Enter any three digits ");
scanf("%d %d %d", &n.a, &n.b, &n.c);
if(n.a>n.b && n.a>n.c){
    printf("1st number is the biggest");
}
else if(n.b>n.a && n.b>n.c){
    printf("2nd number is the biggest");
}
else{
    printf("3rd number is the biggest");
}

    return 0;
}