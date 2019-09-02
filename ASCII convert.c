/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <ctype.h>

int codetochar (void){
    unsigned char CH;
    
    while (CH!=255){
        printf ("Input a ASCII code to convert it to a Character\nEnter 255 to exit:\n");
        scanf ("%d",&CH);
        if (CH==255){
            return;
        } else if (isprint(CH)){
            printf ("%d, is \'%c\' in ASCII encoding\n****************************\n\n",CH,CH);
        }else if (CH == '\n'){
            printf("%d is the newline character in ASCII encoding\n****************************\n\n",CH);
        
        }else{
            printf ("That does not correspond to a printable ASCII character\n****************************\n\n", CH);
        }
        getchar();
    }
}
