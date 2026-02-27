#include <climits>
#include <iostream>
using namespace std;

int main(){
    int n;
cin>>n;
int arr_a[n];
for(int i=0;i<n;i++){
cin>>arr_a[i];
}

int ans=INT_MIN;
for(int i=0;i<n;i++){
        if (ans<arr_a[i]){
            ans=arr_a[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}