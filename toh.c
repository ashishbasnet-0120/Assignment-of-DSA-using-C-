#include<stdio.h>
void tower_of_hanoi(int n, char from, char to, char aux);
int main(){

int n;
    printf("enter the number of disk:");
    scanf("%d",&n);

    tower_of_hanoi(n,'a','b', 'c');// calling the function using recursion .here n denotes no of disk similarly  a denotes source peg or source rod and c denotes destination rod and b is auxulliary rod or we can say helper rod.IMP a,b,c is arguments.

    return 0;
}

 void tower_of_hanoi(int n, char from, char to, char aux){// here n, from to and aux is parameters
  if (n == 1) {// if it has only one disk
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    } 
tower_of_hanoi(n - 1, from, aux, to);// this is the recursive function call  first call moves n-1 disks to the auxiliary peg.
printf("Move disk %d from %c to %c\n", n, from, to);//print statement moves the nth disk to the destination peg.
 tower_of_hanoi(n - 1, aux, to, from);//third call moves the n-1 disks from the auxiliary peg to the destination peg.

 }