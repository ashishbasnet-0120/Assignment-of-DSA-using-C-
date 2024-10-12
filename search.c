# include<stdio.h>
int marks[3]={90, 65, 45};
int searchmarks, found;

int main(){
    int i;
    printf("enter the element you want to search:");
    scanf("%d", &searchmarks);
    
    for(i=0; i<3; i++){
        if(marks[i]== searchmarks){
            found=1;
            printf("the searchmarks is %d present at index %d", searchmarks, i);
            break ;
        }
    }
if(!found){
    printf(" THe search marks you are looking for is not present in an array");
}
    return 0;
}
