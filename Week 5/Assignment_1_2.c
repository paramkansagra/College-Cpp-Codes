// Description
// Write a C program to check whether a number is prime, Armstrong, perfect number or not using functions. How to check prime or Armstrong or perfect number using functions. Print ‘invalid’ and exit from the execution, if the boundary condition is not met.

// Boundary Condition:
// Number >=0

// Input Format
// First-line contains a integer number

// Output Format
// Print the result as either ‘prime’ or ‘armstrong’ or ‘perfect’

// Sample Testcase Input-1
// 7

// Sample Testcase Output-1
// 7 is Prime number
// 7 is Armstrong number
// 7 is not Perfect number

// Sample Testcase Input-2
// 28

// Sample Testcase Output-2
// 28 is not Prime number
// 28 is not Armstrong number
// 28 is Perfect number

// Sample Testcase Input-3
// 0
// Sample Testcase Output-3
// invalid

// Sample Testcase Input-4
// 32

// Sample Testcase Output-4
// 32 is not Prime number
// 32 is not Armstrong number
// 32 is not Perfect number

// Sample Testcase Input-5
// 31

// Sample Testcase Output-5
// 31 is Prime number
// 31 is not Armstrong number
// 31 is not Perfect number

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n){
    if(n == 1){
        return false;
    }
    if(n == 2){
        return true;
    }
    
    for(int i=2;i<n;i++){
        if(n%i == 0){
            return false;
        }
    }
    
    return true;
}

bool isArmstrong(int n){
    int check = n;
    int numbers = 0;
    while(check != 0){
        numbers++;
        check = check/10;
    }
    
    int sum = 0;
    check=n;
    while(check != 0){
        int x = check%10;
        check = check/10;
        sum += pow(x,numbers);
    }
    
    
    if(sum == n){
        return true;
    }
    return false;
}

bool isPerfect(int n){
    int count = 0;
    for(int i=1;i<n;i++){
        if(n%i == 0){
            count += i;
        }
    }
    
    if(count == n){
        return true;
    }
    return false;
}

int main(){
    
    int n;
    scanf("%d",&n);
    
    if(n<=0){
        printf("invalid \n");
        exit(1);
    }
    
    bool prime = isPrime(n);
    bool armstrong = isArmstrong(n);
    bool perfect = isPerfect(n);
    
    if(prime){
        printf("%d is Prime number\n",n);
    }
    else{
        printf("%d is not Prime number\n",n);
    }
    
    if(armstrong){
        printf("%d is Armstrong number\n",n);
    }
    else{
        printf("%d is not Armstrong number\n",n);
    }
    
    if(perfect){
        printf("%d is Perfect number\n",n);
    }
    else{
        printf("%d is not Perfect number\n",n);
    }
    
    return 0;
}