#include <stdio.h>
#include <conio.h>

int main(){

    char ch;
    char s1[10000];
    char s2[10000];

    // taking input of the string
    scanf("%c",&ch); // input a normal character
    scanf("%s",&s1); // input a normal word
    // take input of a total line
    scanf("\n"); // as we havent given a starting line \n we have to give it here
    scanf("%[^\n]%*c",&s2); // taking input till i dont find a new line characte
    printf("%c \n",ch); // printing all the character word and line that we took input 
    printf("%s \n",s1); 
    printf("%s \n",s2);

    return 0;
}