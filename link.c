#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
int main(){

struct node*head= NULL, *newnode, *temp;
int choice=1;

while(choice){
    newnode=(struct node*) malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d", &newnode->data);
    newnode->next=NULL;

    if(head==NULL){
        head= temp= newnode;
    }
    else{
        temp->next= newnode;
        temp= newnode;
    }
    printf("Do you want to continue(0/1)");
    scanf("%d", &choice);
}
temp= head;
printf("linked list:");
while(temp !=NULL){
    printf("%d->", temp->data);
    temp= temp->next;

}
printf("null\n");

return 0;

}