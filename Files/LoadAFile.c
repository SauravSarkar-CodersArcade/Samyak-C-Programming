#include<stdio.h>
int main(){
    FILE *fptr;
    // Opening & loading the file
    fptr = fopen("C:\\Users\\Saurav\\OneDrive\\Desktop\\Samyak\\Files\\samyak.txt", 
        "w"); // Creates a new file
    if(fptr != NULL){
        printf("File loaded successfully.\n");
    }else{
        printf("Failed to load file.\n");
    }   
    
    // Closing the file
    fclose(fptr); 
    printf("File closed successfully.\n");
    return 0;
}