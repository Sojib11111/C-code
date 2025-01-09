#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
int main(){
    while(1){
        int gussNumber,randomNumber;
        cout <<"Enter the number between 1 to 5 :";
        cin>>gussNumber;
        randomNumber=1+rand()%5;

        if(gussNumber==randomNumber){
            cout<<"You are win"<<endl<<endl;
            break;
        }
        else{
            cout<<"You are lost ....plzz try again !!"<<endl<<endl;
            cout<<"Random number is :"<<randomNumber<<endl<<endl;
        }

    }

    getch();
}
                                