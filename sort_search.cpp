#include <iostream>
using namespace std;

int main(){
   int n,key;
   cin>>n;
   int arr[n],i,j,temp;
   for(i=0;i<n;i++){
      cin>>arr[i];
   }
   for(i=0;i<n-1;i++){
      for(j=0;j<n-i-1;j++){
         if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
      }
   }
   for( i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cin>>key;
   int left=0,right=n;
      while(left<=right){
        int middle=(right+left)/2;
        if(arr[middle]==key){
         cout<<"The index is : "<<middle<<endl;
         return 0;
        }else if(arr[middle]<key){
             left=middle+1;
        }else if(arr[middle]>key){
           right=middle-1;
        }
      }
   cout<<"The item is not found"<<endl;
      
    return 0;
}