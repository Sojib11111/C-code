#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    double a,b,c,d,e,sum=0,sum1=0;
    cin>>a>>b>>c>>d;
    sum=(a+b+c+d)/4;
    printf("Media: %.1lf\n",sum);

    if(sum>=7.0){
        cout<<"Aluno aprovado."<<endl;
    }
    else if(sum<5.0){
        cout<<"Aluno reprovado."<<endl;
    }
    else if(sum<=5.0 && sum>=6.9){
        cout<<"Aluno em exame."<<endl;

        cin>>e;
        printf("Nota do exame: %.1lf\n",e);
        sum1=(sum+e)/2;

        if(sum1>=5.0){
            cout<<"Aluno aprovado."<<endl;
        }
        else if(sum<=4.9){
            cout<<"Aluno reprovado."<<endl;
        }

        printf("Media final: \n",sum1);
    }

    return 0;
}