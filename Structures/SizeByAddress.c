#include <stdio.h>
typedef struct { 
    int emp_ID;
    char name [20];
    double salary;
    char designation [20];
    float experience;
}Employee ;
void main(){
Employee e[5]; // {e[56][56][56][56][56]}
int start, end, len;
/* address of the first element of first
employee */
start= &e[0].emp_ID;
/* address of the first element of second
employee */
end = &e[1].emp_ID;
len = end - start;
printf("\n Size of the structure = %d", len);
}