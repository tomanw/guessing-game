#include <stdio.h>
#include <time.h>

// definitions
#define MAX_NUMBER 10


// function declerations
int RandomNumber(int MAX_INT);
int atoi(const char *nptr);
int srand(unsigned int seed);
int rand();

// actual code
int main() {
    char userInput[100]; // user Input
    srand(time(NULL));
    int randomNumber = RandomNumber(10); // random number (feel free to change) 
    printf("$ ");
    scanf("%99s", userInput); // gets user input
    if (atoi(userInput) == randomNumber) {
        // if the player got it right
        printf("You got it right!\n");
    } else {
        // if the player got the number wrong
        printf("You got it wrong :( the answer was: %i\n", randomNumber);
    }
    return 0;
}

// generate random number
int RandomNumber(int MAX_INT) {
    return rand() % (MAX_INT + 1);
}