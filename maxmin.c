#include<stdio.h>
int marks[5];
int main(){
    int i, max, min;
    printf("Enter the five elements:\n");
    for(i=0; i<5; i++){
        scanf("%d", &marks[i]);
    }
    max=marks[0];
    min=marks[0];

    for(i=0; i<5; i++){
        if(marks[i]>max){
            max=marks[i];
        }
        if(marks[i]<min){
            min=marks[i];
        }
    }
printf(" The maxmimum element is %d\n", max);
        printf(" The minimum element is %d\n", min);
return 0;

}
