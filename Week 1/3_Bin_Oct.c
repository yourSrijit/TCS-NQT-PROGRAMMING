#include<stdio.h>
#include<math.h>
int binaryToOctet(long long binary){
    long long bi=binary;
    int deci=0,octet=0,i=0;
    while(binary!=0){
        deci+=(binary%10)*pow(2,i);
        binary/=10;
        i++;
    }
    i=1;
    printf("Decimal of %lld is %d \n",bi,deci);
    while(deci!=0){
        octet +=(deci%8)*i;
        deci/=8;
        i*=10;
    }
  return octet;
}
 int main(){
    long long n;
    printf("Enter the binary number\n");
    scanf("%lld",&n);
    int octet=binaryToOctet(n);
    printf("Octet of %lld is %d ",n,octet);
    return 0;
 }