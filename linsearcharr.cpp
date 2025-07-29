#include <iostream>
using namespace std;
int main(){
    int target;
    int len;
    int flag  = 0;
    cout<<"Enter the length of array:";
    cin>>len;
    int arr[len] = {};
    for(int  i =0; i<len; i++){
        cout<<"Enter a number = ";
        cin>>arr[i];
    }
    cout<<"Enter the number you want to find : ";
    cin>>target;
    for(int i = 0;i<len;i++){
        if(arr[i]==target){
            flag++;
            cout<<"Target found at index "<<i;
        }
    }
    if(flag==0){
        cout<<"Not found in array ";
    }
}