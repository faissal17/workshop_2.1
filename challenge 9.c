#include <stdio.h>
#include <stdbool.h>
bool ispremier(int n){
   int i , p;
   bool premier = 1 ;
    for (i=2;i<=n/2;i++){
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
    int n , i;
    printf("entre le nombre : ");
    scanf("%d",&n);
    ispremier(n);
    return 0;
}
