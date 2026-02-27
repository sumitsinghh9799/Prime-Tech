#include <iostream>
using namespace std;

int fib(int g) {
    if(g <= 1)
        return g;{
    return fib(g-1) + fib(g-2);
}
}

int main(){
    int n;
    cin>>n;
   int g =0 ;
    for (int i = 1; i <= n; i++) {
       
        for (int j = 1; j <= i; j++) {
            
            cout<<fib(g)<<" ";
            g++;
        }
        cout<<"\n";
   }
   return 0;
}




