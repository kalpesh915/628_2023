/**
    structure
*/

#include<stdio.h>
/// derived data type / non premitive data type
struct student{
    int roll;           /// 04
    char name[20];      /// 20
    int marks;          /// 04
    float per;          /// 04
                        /// 32
};

void main(){
    struct student student1;
    printf("\n Size of Structure is %d Bytes", sizeof(student1));
}
