#include <stdio.h>
#include <string.h>
#include "functions.h"
#include <stdbool.h>

int main(){
    printf("\n\n");

    char CodeWord[] = "APPLE";
    char answer[] = "_____";
    int attempts = 0;
    char guess;
    bool correct;

    greet();

    while(strcmp(answer,CodeWord) != 0 && attempts < 7){

        lives(attempts);
        displaystatus(answer);

        printf("\n\nEnter here: \n");
        scanf(" %c",&guess);

        for(int i = 0; i < strlen(CodeWord);i++){
            if(guess == CodeWord[i]){
                correct = true;
            }
            if(correct){
                printf("%c",guess);
            }
        }

        attempts++;
    }

    return 0;
}