/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include<stdio.h>

int menu (void);
int print (void);
int codetochar (void);
int chartocode (void);

/*
 *This program prints all printable ascii characters and there corresponding ascii value, or converts a user inputted value to ascii character, or vice-versa
 *C @ TCC
 * Arick Mounts
 *
 */

int main (void){
    int select = menu();

    switch (select){
        case 1:
            print();
            break;
            
        case 2:
            codetochar();
            break;
        case 3:
            chartocode();
            break;
            
        default: /* Optional - but a good idea expecially if you have no other error catching! */
        printf("Please enter a valid selection.\n");
        }

    return 0;
}

int menu(void) {
    int choice = 1;
    printf("***************************\n");
    printf(" 1. ASCII table \n");
    printf(" 2. ASCII code to character converter \n");
    printf(" 3. ASCII character to code converter\n");
    printf("99. Exit\n");
    printf("Please select number and press enter:\n");
    printf("***************************\n");
    scanf("%d", &choice);
    return choice;   
}