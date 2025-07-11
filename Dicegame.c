#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned int)time(NULL));

    int d[2],total = 0;
    char name[50];

    printf("What is your name?\n> ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    printf("Rolling the dice...\n");
    for(int i = 0 ; i < 2 ; i++){
        d[i] = rand() % 6 + 1;
        total += d[i];
        printf("Die %d: %d\n", i + 1, d[i]);
    }
    printf("Total value: %d\n", total);
    if(total > 7){
        printf("%s won!\n",name);
    } else {
        printf("%s lost!\n",name);
    }

    return 0;
}