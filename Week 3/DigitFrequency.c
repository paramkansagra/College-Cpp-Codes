// https://www.hackerrank.com/challenges/frequency-of-digits-1/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int arr[10] = {0};
    
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    for(int i=0;i<strlen(s);i++){
        int x = (int)(s[i]);
        if(x>=48 && x<=57){
            arr[x-48] += 1;
        }
    }
    
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}
