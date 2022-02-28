#include <stdio.h>
#include <stdlib.h>

int main(){

    // taking input of the string
    int n;
    printf("input the string length ");
    scanf("%d",&n);

    char string[n];
    scanf("%s",&string);

    // now go thru the list and check if it is vovel or a consonant
    for(int i=0;i<n;i++){
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
            printf("%c is a vovel \n",string[i]);
        }
        else{
            printf("%c is a consonant \n",string[i]);
        }
    }

    return 0;
}