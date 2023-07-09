#include <stdio.h>
int findSum(int n1,int n2){
    if(n1==1){
        n1+=1;
    }
    int sum=0;
    for(int i=n1;i<=n2;i++){
        int flag=-1;
        for(int j=2;j*j<=i;j++){
             if(i%j==0){
                flag=1;
             }
        }
        if(flag==-1){
            sum+=i;
        }
    }
    return sum;
}

int main(){
    int n1,n2;
    printf("Enter two number\n");
    scanf("%d %d",&n1,&n2);
    int res=findSum(n1,n2);
    printf("Sum of betwen two prime num is %d",res);    
    return 0;
}