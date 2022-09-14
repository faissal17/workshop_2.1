#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char  caracter ;
    printf("votre caracter ");
    scanf("%c" , &caracter);
    switch(caracter) {
    	case 'a': case'A' : case 'e' : case 'E' : case 'i' :  case 'I' : case 'o' :  case 'O'  :  case 'Y' : case 'y' :  case 'u' :  case 'U' :
    	printf(" voyelle");
    	break ;
    	default : 
    	printf("error");
    	break ;
	}
    
	return 0;
}
