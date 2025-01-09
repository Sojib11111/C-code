#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    cout<<"Input : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=1;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
        else{
           cout<<arr[i]<<":"<<count<<endl;
           count=1;
        }
    }
     
    return 0;
}