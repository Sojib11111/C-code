#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    int i,j;
    char arr1[100],arr2[100],arr[200];
    cout<<"Enter the first name :";
    gets(arr1);
    cout<<"Enter the second name :";
    gets(arr2);
    strcat(arr1,arr2);
    cout<<arr1;

    getch();
}