#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
//reverse pattern with raw sub to i add 1
    for(int i=1; i<=n ; i++)
    {
    for(int j=1; j<=n-i+1 ; j++){
            
            cout<<"* ";
        }
        cout<<"\n";
   }
   return 0;
}
    