#include <stdio.h>

int fibonacciSeries(int n){
    if(n==1 || n==2){
        return n-1;
    }
    return fibonacciSeries(n-1)+fibonacciSeries(n-2);
int main(){
    int n;
    scanf("%d", &n);
    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }
    else{
        printf("%d",fibonacciSeries(n));
    }
    return 0;

}
}