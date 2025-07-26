#include <iostream>
using namespace std;
int main(){
    int sum = 0;
    int len;
    cout<<"Enter the length of array:";
    cin>>len;
    int arr[len] = {};
    for(int  i =0; i<len; i++){
        cout<<"Enter a number";
        cin>>arr[i];
    }
    for(int  i =0;i<len;i++){
        sum = sum+arr[i];
    }
    cout<<" Sum of array is = "<<sum;
}