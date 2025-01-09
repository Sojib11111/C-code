#include <iostream>

using namespace std;
int main()
{
    int a,b,c,d,e,i;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>b>>c;
        d=(b/c);
        e=d/2;
        cout<<d+e<<endl;
    }
    return 0;
}