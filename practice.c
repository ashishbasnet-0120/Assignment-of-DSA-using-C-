void deenqueue(){
    stuct node*temp;
    temp=front;

    if(front==0 && rear==0){
        printf("queue is empty");
    }
    else{
        printf("%d", front->data);
        front=front->;
        free(temp);
    }