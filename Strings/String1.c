#include<stdio.h>
#include<string.h>
int main(){
    char * str = "Samyak"; // char str[] or char * str
    printf("%d\n", strlen(str));
    int length = strlen(str); // 6
    // Traditional way of using normal for loop
    for(int i=0; i<length; i++){
        printf("%c ", str[i]);
    }
    printf("\n");
    for(int i=0; str[i] != '\0'; i++){
        printf("%c ", str[i]);
    }
    
    return 0;
}