#include <iostream>
using namespace std;

int fibboo(int g){
    if(g==0 or g==1){
        return g;
    }
    return fibboo(g-1)+fibboo(g-2);

}
int main(){
    int n;
    cin>>n;
    int g=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
    cout<<fibboo(g)<<" ";
    g++;
        }
        cout<<endl;
    }
    return 0;
}