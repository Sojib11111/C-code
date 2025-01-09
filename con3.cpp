#include <iostream>

using namespace std;
int main(){
int T,i;
cin>>T;
int M[T],X[T],j[T],tot[T],temp[T];
for(i=1;i<=T;i++){
    cin>>M[i]>>X[i];
    cout<<endl;
}
for(i=1;i<=T;i++){
     tot[i]=M[i]/X[i];
     temp[i]=tot[i];
   while(temp[i]>1){
    temp[i]=temp[i]/2;
     j[i]++;
 }
}
 for(i=1;i<=T;i++){
    cout<<tot[i]<<endl; 
 }


    return 0;
}