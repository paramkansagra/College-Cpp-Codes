#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ascending(int arr[],int start,int end){
    
    for(int i=start;i<end;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int sum(int arr[],int start,int end){
    int total = 0;
    for(int i=start;i<=end;i++){
        total += arr[i];
    }
    return total;
}

int main(){
    
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int max = -1;
    
    for(int start=0;start<n;start++){
        for(int end=start+1;end<n;end++){
            if(ascending(arr,start,end) && sum(arr,start,end)>max){
                max = sum(arr,start,end);
            }
        }
    }
    
    printf("%d",max);
    
    return 0;
}