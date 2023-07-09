#include<iostream>
#include<stdbool.h>
using namespace std;
 bool isPalindrom(int num){
    string str =to_string(num);
    int n=str.length();
    for(int i=0,j=n-1;i<j;i++,j--){
        if(str.at(i)!=str.at(j)){
            return false;
        }
    }
    return true;
 }
int main()
{
    int num;
    cout<<"Enter a number\n";
    cin>>num;
    bool ans=isPalindrom(num);
    if(ans){
        cout<<"The number is palindrom"<<endl;
    }
    else{
        cout<<"The number is not palindrom"<<endl;
    }
    return 0;
}