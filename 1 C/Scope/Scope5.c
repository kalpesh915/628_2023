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

void sum(int x, int y){
    printf("\n sum is %d", x + y);
}
