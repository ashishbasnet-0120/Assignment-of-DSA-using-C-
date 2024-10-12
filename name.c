#include<stdio.h>
void name();

int main(){
name();
return 0;    
}

void name(){
    char name[50];
    int i;
    printf("enter your fullname:\n");
        fgets(name, sizeof(name), stdin);// stdin is written to read the input from the user
        
    for(i=0; i<10; i++){
        
        printf("your name is %s\n", name);
    }
}