void greet(){

    printf("===========================================\n");
    printf("\tWELCOME TO MY HANG-MAN GAME\n");
    printf("===========================================\n");

    printf("    +---+\n");
    printf("    |   |\n");
    printf("    |   O\n");
    printf("    |  /|\\\n");
    printf("    |  / \\\n");
    printf("    |\n");
    printf("  =========\n");

    printf("INSTRUCTIONS:   The goal of this game is to save the man from hanging!\n");
    printf("\t\tYour job is to guess the word, if you fail to guess the word within 6 attempts the man will parish!\n");
    printf("\t\tSo be cautiuos with your decisions and think carefully.\n\n");
}

void lives(int attempts){
    
    if(attempts == 0){
        printf("    +---+\n");
        printf("    |   |\n");
        printf("    |   \n");
        printf("    |  \n");
        printf("    |  \n");
        printf("    |\n");
        printf("  =========\n");
    }
    if(attempts == 1){
        printf("    +---+\n");
        printf("    |   |\n");
        printf("    |   O\n");
        printf("    |  \n");
        printf("    |  \n");
        printf("    |\n");
        printf("  =========\n");
    }
    if(attempts == 2){
        printf("    +---+\n");
        printf("    |   |\n");
        printf("    |   O\n");
        printf("    |   |\n");
        printf("    |  \n");
        printf("    |\n");
        printf("  =========\n");
    }
    if(attempts == 3){
        printf("    +---+\n");
        printf("    |   |\n");
        printf("    |   O\n");
        printf("    |  /|\n");
        printf("    |  \n");
        printf("    |\n");
        printf("  =========\n");
    }
    if(attempts == 4){
        printf("    +---+\n");
        printf("    |   |\n");
        printf("    |   O\n");
        printf("    |  /|\\\n");
        printf("    |  \n");
        printf("    |\n");
        printf("  =========\n");
    }
    if(attempts == 5){
        printf("    +---+\n");
        printf("    |   |\n");
        printf("    |   O\n");
        printf("    |  /|\\\n");
        printf("    |  / \n");
        printf("    |\n");
        printf("  =========\n");
    }
    if(attempts == 6){
        printf("    +---+\n");
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

    printf("\nGuess the Word: \n");
    for(i = 0; i < strlen(answer);i++){
        printf(" %c",answer[i]);
    }
}
