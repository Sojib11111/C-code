#include <iostream> 
using namespace std;
int main(){
    int M,N,i,j,k;
    cin>>N>>M;
    int arr[N][M];

    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
     for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            if(arr[i][0]==0){
                if(arr[i][j]==1)
                k++;
            }
        }
    }
    cout<<k<<endl;

    return 0;
    
}