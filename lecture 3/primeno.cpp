#include<iostream>
using namespace std;
int main()
{int n;
cin>>n;
for ( int i=2; i<=n; i++)
{
    if(n%i==0){
        cout<<"prime nahi hai";

    }
    else{
        cout<<"prime hai";
    }
    break;
}
return 0;
}