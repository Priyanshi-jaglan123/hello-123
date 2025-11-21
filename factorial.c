#include<stdio.h>
int fact(int x){
    if(x==1 || x==0)  return 1;
    return x*fact(x-1);
}
int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);
     fact(n);
     printf("%d",fact(n));
    return 0;
}