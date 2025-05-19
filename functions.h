#include <windows.h>
#include <process.h>

void greet(){

    printf("\t\t===========================================\n");
    printf("\t\t\tWELCOME TO MY HANG-MAN GAME\n");
    printf("\t\t===========================================\n");

    printf("\t  \t  +---+\n");
    printf("\t  \t  |   |\n");
    printf("\t  \t  |   O\n");
    printf("\t  \t  |  /|\\\n");
    printf("\t  \t  |  / \\\n");
    printf("\t  \t  |\n");
    printf("\t  \t=========\n");

    printf("INSTRUCTIONS:   The goal of this game is to save the man from hanging!\n");
    printf("\t\tIf you fail to guess the word within 6 attempts the man will parish!\n");
    printf("\t\tSo be cautiuos with your decisions and think carefully.\n");

}


void lives(int attempts){

    printf("\n=============================================\n");
    if(attempts == 0){
        printf("\n    +---+\n");
        printf("    |   |\n");
        printf("    |   \n");
        printf("    |  \n");
        printf("    |  \n");
        printf("    |\n");
        printf("  =========\n");
    }
    if(attempts == 1){
        printf("\n    +---+\n");
        printf("    |   |\n");
        printf("    |   O\n");
        printf("    |  \n");
        printf("    |  \n");
        printf("    |\n");
        printf("  =========\n");
    }
    if(attempts == 2){
        printf("\n    +---+\n");
        printf("    |   |\n");
        printf("    |   O\n");
        printf("    |   |\n");
        printf("    |  \n");
        printf("    |\n");
        printf("  =========\n");
    }
    if(attempts == 3){
        printf("\n    +---+\n");
        printf("    |   |\n");
        printf("    |   O\n");
        printf("    |  /|\n");
        printf("    |  \n");
        printf("    |\n");
        printf("  =========\n");
    }
    if(attempts == 4){
        printf("\n    +---+\n");
        printf("    |   |\n");
        printf("    |   O\n");
        printf("    |  /|\\\n");
        printf("    |  \n");
        printf("    |\n");
        printf("  =========\n");
    }
    if(attempts == 5){
        printf("\n    +---+\n");
        printf("    |   |\n");
        printf("    |   O\n");
        printf("    |  /|\\\n");
        printf("    |  / \n");
        printf("    |\n");
        printf("  =========\n");
    }
    if(attempts == 6){
        printf("\n    +---+\n");
        printf("    |   |\n");
        printf("    |   O\n");
        printf("    |  /|\\\n");
        printf("    |  / \\\n");
        printf("    |\n");
        printf("  =========\n");
    }
    
}
void displaystatus(char* answer){

    int i; 
    /*printf("Incorrect letters: ");
    for(i = 0; i < strlen(mistakes);i++){
        printf(" %c",mistakes[i]);
    }printf("\n");*/

    printf("\nGuess the Word: You _____ beyond human capabilities.\n\n");
    for(i = 0; i < strlen(answer);i++){
        printf(" %c",answer[i]);
    }


}

void endGame(char* answer,char* CodeWord, int attempts){

    printf("\n===========================================");
    if(attempts < 7){
        printf("\n\n");
        printf("The word was: ");
        for(int i = 0; i < strlen(answer); i++){
            printf(" %c ", answer[i]);
        }
        printf("\n\nCongratiolations! You guessed the Word!\n");
        printf("\n===========================================\n\n\n");
    }
    else{
        printf("\n\n");
        printf("The word was: ");
        for(int i = 0; i < strlen(CodeWord); i++){
            printf(" %c ", CodeWord[i]);
        }

        printf("\nThe man is Dead : (\n");
        printf("\n======================================\n\n");
    }
}