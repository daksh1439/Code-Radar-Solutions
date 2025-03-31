#include <stdio.h>

int fibonacci(int n){
    if(n==1 || n==2){
        return n-1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
int main(){
    int n;
    scanf("%d", &n);
    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }
    fibonacci(n);
    return 0;
}
}