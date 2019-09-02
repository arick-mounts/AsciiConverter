#include <stdio.h>
#include <ctype.h>

int chartocode (void){
    unsigned char CH = 1;
    int C;
    while (CH!=255){
        getchar();
        printf ("Input a character to convert it  to ASCII code, enter 255 to exit\n");
        scanf ("%c",&CH);
        if (isprint(CH)){
            printf ("\'%c\', is %d in ASCII encoding\n****************************\n\n",CH,CH);
        }else if (CH == '\n'){
            printf("The newline character is %d in ASCII encoding\n****************************\n\n",CH);
        
        }
        else {
            printf ("that is not a printable ASCII character");
        }
    }

}
