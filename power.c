#include<stdio.h>
int result(int base, int power);
int ans=1;
int main(){
    int base, power;
    printf("enter the base : ");
    scanf("%d",&base);

    printf("enter the power; ");
    scanf("%d", &power);

result(base, power);
printf("%d\n",ans);
return 0;
}
int result(int base, int power){
    while(power>0){
        ans*=base;
        power--;
    }
    return 0;
}