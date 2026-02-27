#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum =0;
    while(n!=0){
        int digit = n%10;
        sum = sum+1;
        n/=10;
    }if(sum<0)
    sum=sum *(-1);
     
    cout<<sum<<endl;
    return 0;
}