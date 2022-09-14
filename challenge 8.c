#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void echange (int a , int b ){
    int c;
    c = a ;
    a = b ;
    b = c ;
 printf("la nouvelle valeur de a est : %d\n",a);
 printf("la nouvelle valeur de b est : %d",b);
}
int main() {
    int a , b , c ;
    printf("la valeur de a est : ");
    scanf("%d",&a);
    printf("la valeur de b est : ");
    scanf("%d",&b);
    echange (a , b );
   
	return 0;
}
