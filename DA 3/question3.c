#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
 
struct MobileStore{
    char brandName[20];
    int modelNumber;
    int price;
};

int main(){

    int n;
    scanf("%d",&n);

    struct MobileStore arr[n];
    for(int i=0;i<n;i++){
        scanf("%s %d %d",&arr[i].brandName,&arr[i].modelNumber,&arr[i].price);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j].price<arr[j+1].price){
                struct MobileStore temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%s %d %d\n",arr[i].brandName,arr[i].modelNumber,arr[i].price);
    }

    return 0;
}