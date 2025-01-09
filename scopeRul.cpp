#include<iostream>
#include<conio.h>
using namespace std;
int x=10;
int y=20;
int main(){
    int x=30;
    ::y=40;
    cout<<x<<" "<<::x<<endl;
    cout<<y<<" "<<::y<<endl;
    getch();

}