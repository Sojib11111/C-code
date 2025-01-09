#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    cout<<"numbs[] = ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tar,count=0;
    cout<<"target = ";
    cin>>tar;
    for(int i=0;i<n;i++){
        if(arr[i]==tar){
            count++;
        }
    }
    if(count!=0){
       cout<<"Target "<<tar<<" occurs "<<count<<" time"<<endl;
    }else{
      cout<<"The element is not found"<<endl;
    }
    
    
    return 0;
}