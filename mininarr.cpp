#include <iostream>
using namespace std;
int main(){
   
    int len;
    cout<<"Enter the length of array:";
    cin>>len;
    int arr[len] = {};
    for(int  i =0; i<len; i++){
        cout<<"Enter a number";
        cin>>arr[i];
    }
    int min = arr[0];
    for(int i = 0; i<len;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"The maximum number is = "<<min;
}