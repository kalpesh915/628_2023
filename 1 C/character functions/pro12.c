/**
    count total number of characters, numbers, alphabets, words, special characters,
    uppercase, lowercase from entered string

    ip = rajkot\0

    \0 is known as null character, for indicate termination of string.
*/

#include<stdio.h>
#include<ctype.h>


void main(){
    int i = 0, cc = 0, uc = 0, lc = 0, dc = 0, scc = 0, wc = 1;
    char ip[100], c;

    printf("Enter any String \t");
    gets(ip);

    while(ip[i] != '\0'){
        c = ip[i];
        if(isalpha(c)){
            cc++;
            if(isupper(c)){
                uc++;
            }else{
                lc++;
            }
        }else if(isdigit(c)){
            dc++;
        }else if(ispunct(c)){
            scc++;
        }else if(isspace(c)){
            wc++;
        }
        i++;
    }

    printf("\n Total Characters is %d", i);
    printf("\n Total Alphabets are %d", cc);
    printf("\n Total Digits are %d", dc);
    printf("\n Total Words are %d", wc);
    printf("\n Total Special Characters are %d", scc);
    printf("\n Total Uppercase Alphabets are %d", uc);
    printf("\n Total Lowercase Alphabets are %d", lc);
}
