#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
for ( int i=n; i>=1; i--){
    //or for ( int j=1; j<= n-(i-1);j++)
    for ( int j=1; j<=i; j++){
        cout<<j<<" ";
    }
       
        cout<<endl;
   }
   return 0;
}
    