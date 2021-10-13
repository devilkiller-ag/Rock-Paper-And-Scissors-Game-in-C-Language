/*
Author: Ashmit JaiSarita Gupta
Purpose: Create a game Rock Paper Scissors

Create Rock, Paper & Scissors Game
Player 1: rock
Player 2 (computer): scissors -->player 1 gets 1 point

rock vs scissors - rock wins
paper vs scissors - scissors wins
paper vs rock - paper wins
Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
Notes: You have to display name of the player during the game. Take users name as an input from the user.

Date Created: 12-10-2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifdef __unix__
#include <unistd.h>
#elif defined _WIN32
#include <windows.h>
#define sleep(x) Sleep(1000 * (x))
#endif

int generateRandomNumber(int n)
{
    //To Generate an Random Number
    srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}

int main()
{
    // int n = 100;
    // printf("The random number between 0 to %d is %d.", n, generateRandomNumber(n));

    char name[10], pmove;             //pmove: player's move
    int i, cmove, cwin = 0, pwin = 0; //cmove: computer's move
    //cmove; 0 - Rock, 1 - Paper, 2 - Scissor
    printf("<---- Welcome to the world of rocks, papers, and scissors. ---->\n");
    sleep(3); //sleep for three seconds
    printf("Enter Player Name: \n");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    sleep(2);
    printf("Let's understand some Quick Rules....\n");
    sleep(2);
    printf("rock vs scissors - rock wins\n");
    sleep(2);
    printf("paper vs scissors - scissors wins\n");
    sleep(2);
    printf("paper vs rock - paper wins\n");
    sleep(2);
    printf("You wil get to play this game three times with Skillf - The Bot.\n");
    sleep(2);
    printf("One with Highest Score will win.\n");
    sleep(2);
    printf("Let's have fun.\n");
    sleep(2);
    printf("%s VS. Skillf.\n", name);
    sleep(2);

    for (i = 0; i < 3; i++)
    {
        printf("Attention Players! Round %d starts now...\n", i + 1);
        sleep(2);
        printf("Press'R' for Rock.\n");
        sleep(1);
        printf("Press'P' for Paper.\n");
        sleep(1);
        printf("Press'S' for Scissor.\n");
        sleep(1);
        printf("%s Enter Your Move...\n", name);
        scanf("%d");
        scanf("%c", &pmove);
        cmove = generateRandomNumber(2);

        if (pmove == 'R')
        {
            if (cmove == 0)
            {
                printf("Skillf Selects Rock...\n");
                sleep(1);
                printf("Draw...\n");
                sleep(2);
            }
            else if (cmove == 1)
            {
                printf("Skillf Selects Paper...\n");
                sleep(1);
                printf("Skillf wins Round %d!\n", i + 1);
                cwin++;
                sleep(2);
            }
            else //if (cmove == 2)
            {
                printf("Skillf Selects Scissor...\n");
                sleep(1);
                printf("%s wins Round %d!\n", name, i + 1);
                pwin++;
                sleep(2);
            }
        }
        else if (pmove == 'P')
        {
            if (cmove == 1)
            {
                printf("Skillf Selects Paper...\n");
                sleep(1);
                printf("Draw...\n");
                sleep(2);
            }
            else if (cmove == 2)
            {
                printf("Skillf Selects Scissor...\n");
                sleep(1);
                printf("Skillf wins Round %d!\n", i + 1);
                cwin++;
                sleep(2);
            }
            else //if (cmove == 0)
            {
                printf("Skillf Selects Rock...\n");
                sleep(1);
                printf("%s wins Round %d!\n", name, i + 1);
                pwin++;
                sleep(2);
            }
        }
        else if (pmove == 'S')
        {
            if (cmove == 2)
            {
                printf("Skillf Selects Scissor...\n");
                sleep(1);
                printf("Draw...\n");
                sleep(2);
            }
            else if (cmove == 0)
            {
                printf("Skillf Selects Rock...\n");
                sleep(1);
                printf("Skillf wins Round %d!\n", i + 1);
                cwin++;
                sleep(2);
            }
            else //if (cmove == 1)
            {
                printf("Skillf Selects Paper...\n");
                sleep(1);
                printf("%s wins Round %d!\n", name, i + 1);
                pwin++;
                sleep(2);
            }
        }
        else
        {
            printf("Invalid Move...\n");
            sleep(2);
        }
    }

    printf("Final Result...");
    sleep(2);

    if (cwin > pwin)
    {
        printf("Skillf - The Bot Wins!\n");
        sleep(1);
        printf("%s - Excelent Work! XD XD XD\n", name);
        sleep(3);
    }
    else if (pwin > cwin)
    {
        printf("%s Wins!", name);
        sleep(1);
        printf("Skillf - Excelent Work! XD XD XD\n");
        sleep(3);
    }
    else
    {
        printf("Match Draw!\n");
        sleep(1);
        printf("Ab bhad me jao, mereko pubg khelne jana hai...\n");
        sleep(3);
    }
    return 0;
}