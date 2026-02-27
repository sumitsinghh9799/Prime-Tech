#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int r;//reminder
    int sum=0;
    int og=n;//original value
    while(n>0){
        r= n%10;//got last digit of num
       sum=sum+ r*r*r;
       n=n/10;
    }

    if(sum==og){
         cout<<og<<"ARMSTRONG NO.";
    }
    else{
        cout<<"NOT ARMSTRONG NO.";
    }
    cout<<endl;
    return 0;
}