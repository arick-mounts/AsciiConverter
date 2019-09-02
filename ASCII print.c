/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int print (void){
    unsigned char ascii = 0;
    
    while (ascii != 255){
        if (isprint(ascii)){
            printf ("%d:%c\n",ascii,ascii);
        }
        ascii++;
    }
}