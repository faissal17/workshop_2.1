#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a , b ;
	printf("entre la premier valeur :");
	scanf("%d" ,&a);
	 
	 printf("entre la deuxieme valeur :");
	 scanf("%d",&b);
	 
	 
	 if (a == b) {
	     printf("le triple est %d", (a+b)*3);
	 }else {
	     printf("la somme de deux valeur est %d\n", a+b);
	 }
	return 0;
}
