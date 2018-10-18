/*
 * This programs is designed to find the length of a string that the user introduces without using the C Predesigned
 * Function of strlen().
 * For this program, we will initialize a counter that will increase according to each element that the user introduces.
 *
 * Author: Soraya Maqueda
 * Date: 18.10.2018
 * Contact: soraya_maqueda@hotmail.com
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int stringLength(char string[]) {
    int length = 0;//Counter

    while(string[length] != '\0'){
        length++;
    }

    return length;
}

int main() {
    char string[100]; //Where the string is going to be saved.
    //int length = 0; //Counter for the size of the string.

    //Here I ask the user for the string.
    printf("Write here: ");
    fgets(string, sizeof(string), stdin);

    printf("The length of the string is: %i", stringLength(string));


    return 0;
}



