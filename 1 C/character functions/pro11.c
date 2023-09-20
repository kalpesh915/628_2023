/**
    character functions
*/

#include<stdio.h>
#include<ctype.h>

void main(){
    char c;

    printf("\n Enter any character \t");
    c = getche();

    printf("\n Character in uppercase is %c", toupper(c));
    printf("\n Character in lowercase is %c", tolower(c));
}
