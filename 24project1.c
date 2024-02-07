/*Project 1: Number guessing Number 
Problem:- This is going to be fun we will write a program that generate a random number and ask the player to guess it. If the players guess 
is higher than the actual number, the program display "Lower Number Please". Similarly if the user guess is too low, the program prints 
"Higher number please."
When the user guess the correct number, the program displays the number of guesses the player used to arrive at the number.
Hint: Use Loops 
      Use Random Number. */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,nguess=1;
    srand(time(0));
    number=rand()%100+1;
    //printf("The number is %d\n",number);
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower Number Please\n");
        }
        else if(guess<number){
            printf("Higher Number Please\n");
        }
        else{
            printf("You Guessed it in %d attempts\n",nguess);
        }
        nguess++;
    }while(guess!=number);
    return 0;
}