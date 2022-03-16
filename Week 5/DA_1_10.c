#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char ch;
    printf("input the character ");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'y':
        printf("Hydrogen\n");
        break;
    
    case 'Y':
        printf("Hydrogen\n");
        break;
    
    case 'O':
        printf("Ammonia\n");
        break;
    
    case 'o':
        printf("Ammonia \n");
        break;
    
    case 'B':
        printf("Carbon monoxide\n");
        break;
    
    case 'b':
        printf("Carbon monoxide\n");
        break;
    
    case 'g':
        printf("Oxygen\n");
        break;
    
    case 'G':
        printf("Oxygen\n");
        break;
    
    default:
        printf("Invalid input\n");
        break;
    }

    return 0;
}