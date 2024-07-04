#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char* coin_toss();

int main(){
    int heads=0,tails=0,i;
    const char* results[3];
    char name[50];

    printf("Who are you?\n> ");
    scanf("%49s",name);
    printf("Hello, %s!\n",name);

    srand(time(NULL));

    printf("Tossing a coin...\n");

    for(i=0;i<3;i++){
        results[i]=coin_toss();
        if(results[i][0]=='H')heads++;
        else tails++;
        printf("Round %d: %s\n",i+1,results[i]);
    }

    printf("Heads: %d:, Tails: %d\n",heads,tails);
}

const char* coin_toss(){
    return rand()%2==0?"Heads":"Tails";
}