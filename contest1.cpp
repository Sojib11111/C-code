#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    int key;
    cin>>key;
    for(auto it:v){
        if(it==key){
            cout<<"The index is : "<<it<<endl;
            return 0;
        }
    }
    cout<<"The value is not found"<<endl;

}