#include<stdio.h>
int main(){
    FILE *fptr;
    // Opening & loading the file
    fptr = fopen("C:\\Users\\Saurav\\OneDrive\\Desktop\\Samyak\\Files\\demo.txt", 
        "r");
    if(fptr != NULL){
        printf("File loaded successfully.\n");
    }else{
        printf("Failed to load file.\n");
    }   
    char data[100];
    // fgets(), fscanf()
    fgets(data, 100, fptr);
    while (fgets(data, sizeof(data), fptr) != NULL)
    {
        printf("%s", data);
    }
    // Closing the file
    fclose(fptr); 
    printf("File closed successfully.\n");
    return 0;
}