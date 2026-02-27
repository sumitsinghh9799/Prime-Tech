#include <iostream>
using namespace std;
 int main(){
    //create
    //first way
    int arr[5];//by default garbage value hogi and baad mee hum change kar sakte hai

//second way
int arr_b[]={1,2,3,4,5}; //pehkle se initialize hai baad mee hum change kar sakte hai

//third way
int n;
cin>>n;
int arr_c[n];//by default garbage value hogi and baad mee hum change kar sakte hai

//read
int s=sizeof(arr_b) / sizeof(int);
    for(int i=0;i<s;i++){
        cout<<arr_b[i]<<" ";
    }

    //update 
    for(int i=0;i<s;i++){
        arr[i]+=i;
    }
    cout<<endl;
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}