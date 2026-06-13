#include<stdio.h>
typedef struct
{ 
    int emp_ID; // 4
    char name [20]; // 20
    double salary; // 8
    char designation[20]; // 20
    float experience; // 4
}  Employee;
int main(){
    Employee e1;
    printf("The size of the structure is: %d bytes.\n", sizeof(e1));
    return 0;
}