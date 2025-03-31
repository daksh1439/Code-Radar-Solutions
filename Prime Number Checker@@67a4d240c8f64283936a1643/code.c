#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int not_prime=0;
    if(n==0||n==1){
        not_prime=1;
    }
    else{
        for(int i=2; i<n; i++){
            if(n%i=0 && n!=2){
                not_prime=1;
            }
        }
    }
    if(not_prime){
        printf("0");
    }
    else{
        printf("1");
    }
    return 0;
}