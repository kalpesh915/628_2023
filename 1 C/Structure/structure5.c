/**
    box structure
*/

#include<stdio.h>

struct box{
    int h, w, d;
};

void main(){
    struct box b1;
    printf("\n Size of Structure is %d Bytes ",sizeof(b1));

    printf("\n Enter Height of Box \t");
    scanf("%d", &b1.h);
    printf("\n Enter Width of Box \t");
    scanf("%d", &b1.w);
    printf("\n Enter Depth of Box \t");
    scanf("%d", &b1.d);

    printf("\n volume of Box is %d", b1.h * b1.w * b1.d);
}
