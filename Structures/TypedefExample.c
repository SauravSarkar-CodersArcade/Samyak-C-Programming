#include<stdio.h>
// typedef existing data_type new data_type
typedef int INTEGER;
typedef struct{
    int x,y;
} Point;

typedef struct  {
int r_no;
char name [20];
char course [20];
float fees;
}Student;
int main(){
    INTEGER a = 10;
    Point p;
    Student student = {1, "Rahul", "CSE", 5000};
    printf("%d", student.r_no);
    return 0;
}