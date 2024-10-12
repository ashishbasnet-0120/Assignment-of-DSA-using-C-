#include<stdio.h>
int sum(int n);
 int main(){
    int n, ans;
    printf("enter upto which you want to find the sum:");
    scanf("%d", &n);
    ans=sum(n);// calling and saving the result in ans variable
printf("sum of natural number upto %d=%d",n, ans );
return 0;
}
int sum(int n){
    int ans;
    if(n==1){ return 1;
    }
    else{
        
        return n+sum(n-1);
    }
}