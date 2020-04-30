#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    srand(time(NULL)); //Sets the seed using time

    /* 
    The ASCII codes will range from 32-126 since these are all real characters (including spaces) that can be used in passwords
    */

    int c; //Used for character count inputted by user


    printf("How many characters would you like in your password: ");
    scanf("%d", &c);

    printf("Your password is: ");

    for (int i=0; i < c; i++) {
        
        int rand_num; //Will be a random number used to pick a character in range 32-126
        
        rand_num = rand() % (126 - 32 + 1) + 32;
        /* Will set rand_num to a number between 32 and 126 using this formula
           rand() % (b - a + 1) + a (with a and b being your boundries)
        */
        
        printf("%c", rand_num); //Will print out the character associated with the number stored in rand_num
    }
}