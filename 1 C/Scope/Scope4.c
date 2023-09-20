/**
   formal parameters
*/

#include<stdio.h>

void main(){
    int i, j;
    printf("\n Enter value for i \t");
    scanf("%d", &i);
    printf("\n Enter value for j \t");
    scanf("%d", &j);
    sum(i, j);
}

void sum(int i, int j){
    printf("\n sum is %d", i + j);
}
