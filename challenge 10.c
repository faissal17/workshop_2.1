#include <stdio.h>
#include <stdbool.h>
bool ispremier(int n ,int i){
   bool premier = 1 ;
   int result = n%i;
    for (i=2;i<=result/2;i++){
        if(n%i==0){
            premier=0;
        }
    } 
    if(premier == 1){
        printf(" le nombre est premier\n");
    }else 
     printf(" le nombre est non premier\n");
}
int main() {
    int i, n;
     printf("entre les valeur de n et i:");
    scanf("%d%d",&i,&n);
    if(ispremier( n , i)==1){
    	 printf("le resultat est premier");
	}else {
		 printf("le resultat est non premier");
	}
   
    ispremier(n,i);
    return 0;
}
