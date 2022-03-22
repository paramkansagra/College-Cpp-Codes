// Write a C program to print a string in reverse using a pointer(without using library function). 
// Hint: add #include <ctype.h>, to use isalpha(), isdigit() function checks whether a character is an alphabet / digit.

// Input Format:
// The first line contains the string.

// Output Format:
// The first line contains the the reverse of given string.

// Example Input/Output 1:
// Input:
// vitchennai

// Output:
// iannehctiv

// Example Input/Output 2:
// Input:
// india

// Output:
// aidni

// Example Input/Output 3:
// Input:
// acbc234fsdf

// Output:
// invalid

// Example Input/Output 4:
// Input:
// 123425

// Output:
// invalid

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    
    char s[100];
    scanf("%s",&s);
    
    int n = strlen(s);
    for(int i=0;i<n;i++){
        if(isdigit(s[i])){
            printf("invalid\n");
            exit(1);
        }
        if(i<n/2){
            char temp = s[i];
            s[i] = s[n-i-1];
            s[n-i-1] = temp;
        }
    }
    
    printf("%s",&s);
    
    return 0;
}