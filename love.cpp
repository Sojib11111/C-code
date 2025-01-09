#include <iostream>
using namespace std;
int main(){
    char value;
    cout<<"Do you love me?"<<endl;
    cout<<"If your answer is yes then press Y and no then press N : ";
    cin>>value;
    if(value=='Y'){
        cout<<"I love you."<<endl;
         cout<<"Will you marry me ?"<<endl;

            cin>>value;
            if(value=='Y'){
                cout<<"Love you again baby."<<endl;
            }
            else if(value=='N'){
                cout<<"What the fuck!!"<<endl;
            }
        } 
        else if(value=='N'){
             cout<<"Can we be friend ?"<<endl;

             cin>>value;
              if(value=='Y'){
                cout<<"Can we have coffee together."<<endl;

                cin>>value;
                if(value=='Y'){
                    cout<<"Thank you."<<endl;
                }
                else if(value=='N'){
                    cout<<"It's ok."<<endl;
                }
              }
              else if(value=='N'){
                cout<<"It's ok."<<endl;
              }
        } 

        else{
            cout<<"The letter is not valied !!"<<endl;
        }

        return 0;

}