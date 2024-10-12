#include<stdio.h>
int fact(int n);

int main(){

    int n, ans;
    printf("enter any positive number: ");
    scanf("%d",&n);
    ans=fact(n);// calling and saving the value in new variable
    printf("factorial of given number is %d", ans);
}

int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    else{ 
        return fact(n-1)*n;
    }
}