#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"
#include <stdbool.h>
#include <conio.h>


int main(){
    printf("\n\n");

    int i;
    char CodeWord[] = "TRANSCEND";
    char answer[] = "_________";
    //char mistakes[] = "_____";
    int attempts = 0;
    char guess;

    greet();

    while(strcmp(answer,CodeWord) != 0 && attempts < 7){

        bool correct = false;
        
        lives(attempts);
        displaystatus(answer);

        printf("\n\nEnter here: ");
        scanf(" %c",&guess);
        guess = toupper(guess);
        printf("\n");

        for(i = 0; i < strlen(CodeWord);i++){
            if(guess == CodeWord[i]){
                answer[i] = guess;
                correct = true;
            }
            /*else if(guess != CodeWord[i]){
                mistakes[i] = guess;
            }*/
        }  
        if(correct){
            printf("\n\t\t%c is Correct!",guess);
        }
        else{
            printf("\n\t\t%c is Wrong!",guess);            
            attempts++;
        }

    }

        if(strcmp(answer,CodeWord)==0 || attempts >=7){
            endGame(answer,CodeWord,attempts);
        }
    return 0;
}