#include <iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter the length of array:";
    cin>>len;
    int arr[len] = {};
    for(int  i =0; i<len; i++){
        cout<<"Enter a number = ";
        cin>>arr[i];
    }
    cout<<"Reversed array is :"<<endl;
    for(int  i =len-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}