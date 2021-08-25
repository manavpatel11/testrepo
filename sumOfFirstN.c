#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    printf("The sum of first %d natural numbers is %d.",n,sum(n));
    return 0;
}
int sum(int n){
    if(n<=1){
        return n;
    }
    else{
        return n+ sum(n-1);
    }
    
}