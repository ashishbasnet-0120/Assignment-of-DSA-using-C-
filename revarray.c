#include<stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    
    
    for (int i = 0; i < 5 / 2; i++) {// here divide by 2 means the loop will run only he result example 5\2 is 2.5 but loop will run only 2 times if size of array is 8 then it will only loop 4 times . here in this question 5 is replaced by 1 and 4 is replaced by 2 here 3 is unchanged 
        int temp = arr[i];
        arr[i] = arr[5 - 1 - i];// the purpose of size-1-i means we know array indices ranges from 0 to n to replace last element we have to write sze-1-i got it 
        arr[5 - 1 - i] = temp;
    }


    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}   