#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void genInsult()
{

    const char* insults[3];
    insults[0] = "Were you born on a highway? Because that's where most accidents happen.";
    insults[1] = "Your family tree is a cactus because everyone on it is a prick.";
    insults[2] = "You should eat some makeup to make your insides perfect.";

    const char* random;
    srand(time(NULL));
    random = insults[rand() % 3]; // Add 1 to the 3 for every 1 insult you add
    system("cls");
    printf("Insult: %s\n\n", random);
    printf("Press ENTER to generate another insult...");
    system("pause >nul");
    genInsult();

}

int main()
{

    system("title Insult Generator");
    system("cls");
    printf("Welcome to the Insult Generator! If you don't know what to say, you've come to the right place!\n\n");
    printf("Press ENTER to generate an insult...");
    system("pause >nul");
    genInsult();

    return 0;

}
