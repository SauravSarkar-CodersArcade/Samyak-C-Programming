#include<stdio.h>
typedef struct {
    int score;
    char p1[10];
    char p2[10];
} TableTennisTeam;
int main(){
    TableTennisTeam teams[2] = {{13, "A", "B"}, {21, "X", "Y"}};
    printf("Team 1 P1: %s\n", teams[0].p1);
    printf("Team 2 P2: %s\n", teams[1].p2);

    for(int i=0; i<2; i++){
        printf("Team %d, Player1:%s, Player2:%s\n", i+1, teams[i].p1, teams[i].p2);
    }
    int arr[5] = {1,2}; // 4B x 5 = 20 bytes [1,2,0,0,0]; // 12 bytes wasted
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    // malloc, calloc, realloc, free 
    return 0;
}