#include <stdio.h>
#include <stdlib.h>

int main(){

    // is a word a palindrome or not
    // adda -> a = a -> b = b { exit print it is a palindrome}
    // woodow -> w = w -> o=o -> o = d {loop ko exit karo and print it is not a palindrome}

    // len(sting) -> length

    int length;
    scanf("%d",&length);

    // word banana
    char word[length]; // string
    scanf("%s",&word); // input 
    int i;
    for(i=0;i<length;i=i+1){
        if(word[i] == word[length-i-1]){
            printf("theek hai idhar tak \n");
        }
        else{
            printf("idhar gadbad hai \n");
        }
    }

}