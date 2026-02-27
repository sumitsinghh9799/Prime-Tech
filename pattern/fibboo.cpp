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
    cout<<fib(n)<<endl;
    return 0;
}