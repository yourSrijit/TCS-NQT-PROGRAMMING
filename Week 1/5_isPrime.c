#include <stdio.h>
#include<stdbool.h>
bool isPrime(int num){
    if(num<=1){
        return false;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    bool ans=isPrime(n);
    if(ans){
        printf("The number %d is a Prime number\n",n);
    }
    else{
          printf("The number %d is not a Prime number\n",n);
    }
    return 0;
}