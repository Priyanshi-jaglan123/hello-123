#include<stdio.h>
int fib(int x){
    if(x==2 || x==1)  return 1;
    int r=fib(x-1)+fib(x-2);
    return r;
}
int main(){
    int x;
    printf("enter number of terms:");
    scanf("%d",&x);
    int a=1,b=1;
    for(int i = 1 ;i<= x ;i++)
        printf("%d " ,fib(i) );
    return 0;
}