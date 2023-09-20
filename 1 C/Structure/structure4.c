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
    struct student student1, student2;
    printf("\n Size of Structure is %d Bytes", sizeof(student1));

    printf("\n Enter roll no. \t");
    scanf("%d", &student1.roll);
    fflush(stdin);
    /// Clear buffer memory and get ready for accept new values from key board
    printf("\n Enter Student name \t");
    gets(student1.name);
    printf("\n Enter Marks for student \t");
    scanf("%d", &student1.marks);
    printf("\n Enter percentage of Student \t");
    scanf("%f",&student1.per);

    student2 = student1;

    printf("\n Roll No. is %d", student2.roll);
    printf("\n Name is %s", student2.name);
    printf("\n Marks is %d", student2.marks);
    printf("\n Percentage is %f", student2.per);
}
