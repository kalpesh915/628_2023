#include<stdio.h>

enum days {monday = 1, tuesday, wednesday, thursday, friday, saturday, sunday};

void main(){
    enum days d1;
    d1 = sunday;
    printf("\n d1 is %d", d1);
}
