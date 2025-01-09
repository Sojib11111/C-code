#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
   long long int n,k,x;
    cin>>n>>k;
    if(n%2==0){
        x=n/2;
    }
    else{
       x=(n+1)/2;
    }
    if(k<=x){
        cout<<(k*2)-1;
    }
    else{
        cout<<(k-x)*2;
    }
    return 0;

}
