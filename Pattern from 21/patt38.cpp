#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=n; i>=0; i--){
        for (int k=1;k<=n-i; k++){
            cout<<"  ";
        }
        for(int j=i;j>=0;j--){
            cout<<j<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    for(int i=-0; i<=n; i++){
        for (int k=1;k<=n-i; k++){
            cout<<"  ";
        }
        for(int j=i;j>=0;j--){
            cout<<j<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}