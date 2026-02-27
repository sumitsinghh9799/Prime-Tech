#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int og =n;
    int temp=n;
    int sum=0;

    int l=0;
    while(temp!=0){
        temp/=10;
        l++;
    }

    while(n!=0){
        int k=n%10;
        sum=sum+pow(k,l);;
        n/=10;
    }

    if(og==sum){
        cout<<"ARMSTRONG"<<endl;

    }
    else {
        cout<<"NOT ARMSTRONG"<<endl;
    }
    return 0;
}