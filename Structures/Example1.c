#include<stdio.h>
#include<string.h>
struct Student { // Structure Definition 
    // Structure body
    char name[20]; // 20 bytes
    char USN[20]; // 20 bytes
    char dept[20]; // 20 bytes
    char email[20]; // 20 bytes
    int marks; // 4 bytes
};
int main(){
    struct Student s1; // Structure Variable
    strcpy(s1.name, "Samyak"); // strcpy(destination, value);
    strcpy(s1.USN, "1RV25CY046");
    strcpy(s1.dept, "Cyber Security");
    strcpy(s1.email, "samyak@gmail.com");
    s1.marks = 68;
    printf("Name: %s\n", s1.name);
    printf("USN: %s\n", s1.USN);
    printf("Department: %s\n",s1.dept);
    printf("Email: %s\n",s1.email);
    printf("Marks: %d\n",s1.marks);

    printf("The size of the structure is: %d bytes.\n", sizeof(s1));
    struct Student s2 = {"Samyak", "1RV25CY046", "Cyber Security", "samyak@gmail.com", 80};
    printf("Name: %s\n", s2.name);
    printf("USN: %s\n", s2.USN);
    printf("Department: %s\n",s2.dept);
    printf("Email: %s\n",s2.email);
    printf("Marks: %d\n",s2.marks);

    struct Student s3 = s2;
    printf("Name: %s\n", s3.name);
    printf("USN: %s\n", s3.USN);
    printf("Department: %s\n",s3.dept);
    printf("Email: %s\n",s3.email);
    printf("Marks: %d\n",s3.marks);
    return 0;
}