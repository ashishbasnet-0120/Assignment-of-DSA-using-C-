#include<stdio.h>
int prices[2][3]={{1250, 350, 850},
{650, 1100, 300}
};

int main(){
    int i, j;
    printf("the two dimensional array is:\n");

    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("  %d", prices[i][j]);
        }
        printf("\n");
    }
    return 0;
}