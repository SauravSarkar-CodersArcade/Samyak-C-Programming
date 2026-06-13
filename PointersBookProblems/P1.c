#include<stdio.h>
#include<string.h>
// Take a character pointer & print a string
int main(){
    int arr[] = {1,2,3,4,5}; 
    // String [Definition => Array of Characters] | Character Array
    /*
    Alphabets -> a-z | A-Z
    Numbers -> 0-9
    Special Characters -> /.><
    Spaces -> Whitespaces
    */
    char * name = "C Programming"; 
    printf("%d\n", strlen(name));
    printf("%s\n", name); // For the complete string
    return 0;
}