#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class student
{
    public:
    char name[20];
    int age;
    double cgpa;
    void display(){
        cout<<"Name="<<name<<endl<<"Age="<<age<<endl<<"SGPA="<<cgpa<<endl<<endl<<endl;
    }
};
int main()
{
    student sojib,sakib,alraji,moinur;
    strcpy(sojib.name,"sojib biswas");
    sojib.age=21;
    sojib.cgpa=3.66;
    sojib.display();

    strcpy(sakib.name,"sakib hassan");
    sakib.age=24;
    sakib.cgpa=3.86;
    sakib.display();

    strcpy(alraji.name,"Alraji talukder");
    alraji.age=22;
    alraji.cgpa=3.71;
    alraji.display();

    strcpy(moinur.name,"Moinur hassan");
    moinur.age=21;
    moinur.cgpa=3.62;
    moinur.display();


    getch();

}