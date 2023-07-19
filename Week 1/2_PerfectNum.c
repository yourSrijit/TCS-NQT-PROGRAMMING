#include <stdio.h>
void isPerfect(int n){
    int sum=1;
for(int i=2;i<n;i++){
    if(n%i==0){
     sum+=i;
    }
}
 if(n==sum){
    printf("%d is perfect number\n",n);
 }
 else{
     printf("%d is not a perfect number\n",n);
 }
}

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    isPerfect(n);
    return 0;
}