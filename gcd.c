//the Greatest Common Factor (GCF) or Highest Common Factor (HCF), is the largest positive integer that divides two or more integers without leaving a remainder. In other words, it is the biggest number that can evenly divide the given numbers.
#include<stdio.h>
int hcf( int a, int b);// a and b are paramters 
int main(){
    int result;
    int firstnum, secondnum;
    int a, b;
    printf("enter two numbers:\n");
    scanf("%d %d", &firstnum, &secondnum);
   result= hcf(firstnum, secondnum);// here fistnum and secondnum ia arguments $firstnum is assigned to a, and secondnum is assigned to b. So, the function operates on these values.
   
    printf(" the gcd of %d and %d is %d", firstnum, secondnum, result);

    return 0;
}
int hcf(int a, int b){
    if(b==0){
        return a;// if bis zero a is the greatest common factor
    }
    else{
        return hcf(b, a % b);
    }

}