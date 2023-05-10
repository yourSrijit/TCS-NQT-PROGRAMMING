// 1 1 2 3 4 9 8 27 16.... print the nth term of this series 
#include <stdio.h>

int main(){
    int n,a,b;
    printf("Enter the Nth number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            if(i==2){
               b=1;
            }
            else{
                b=b*3;
            }
        }
        else{
            if(i==1){
                a=1;
            }
            else{
                  a=a*2;
            }
        }
    }
    if(n%2==0){
        printf("So the nth term of the series is =%d\n",b);
    }
    else{
          printf("So the nth term of the series is =%d\n",a);
    }
    
}
