#include <stdio.h>
#include <stdlib.h>
int main(){
    float prod1 = 2.98,prod2 = 4.5,prod3 = 9.98,prod4=4.49,prod5 = 6.87;
    int n;
    printf("input the number of product value pairs ");
    scanf("%d",&n);
    float sum = 0;
    for(int i=0;i<n;i++){
        int prod_num,quantity;
        scanf("%d %d",&prod_num,&quantity);
        switch (prod_num)
        {
        case 1:
            sum += prod1*quantity;
            break;
        
        case 2:
            sum += prod2 * quantity;
            break;
        
        case 3:
            sum += prod3 * quantity;
            break;
        
        case 4:
            sum += prod4 * quantity;
            break;
        
        case 5:
            sum += prod5 * quantity;
            break;

        default:
            printf("invalid\n");
            break;
        }
    }
    printf("total amount sold = %.2f",sum);
    return 0;
}