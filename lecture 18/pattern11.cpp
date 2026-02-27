#include <iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;

    for (int i=1 ; i<=n ; i++) {
        //for (char j='a'; j<='e' ; j++){
         //   cout<< j <<" ";
         for (int j=1 ; j<=n ; j++){
            char name = 'a'+ j-1;
            cout << name <<" ";

         }
        
        cout <<endl;
    }
    return 0;
}