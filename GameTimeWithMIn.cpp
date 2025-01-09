#include<iostream>
using namespace std;
int main(){
    int imin,ihour,fmin,fhour,min=0,hour=0;
    cin>>ihour>>imin>>fhour>>fmin;
    
      if(imin<fmin){
        min=fmin-imin;
        if(ihour<fhour){
          hour=fhour-ihour;
          cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<min<<" MINUTO(S)"<<endl;
        }
        else if(ihour>fhour){
            hour=(fhour-ihour)+24;
            cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<min<<" MINUTO(S)"<<endl;
        }
        else if(ihour==fhour){
            hour=fhour-ihour;
            cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<min<<" MINUTO(S)"<<endl;
        }
      }

      else if(imin>fmin){
        min=(fmin-imin)+60;
        if(ihour<fhour){
          hour=(fhour-ihour)-1;
          cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<min<<" MINUTO(S)"<<endl;
        }
        else if(ihour>fhour){
            hour=(fhour-ihour)+24-1;
            cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<min<<" MINUTO(S)"<<endl;
        }
        else if(ihour==fhour){
            hour=(fhour-ihour)+24-1;
            cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<min<<" MINUTO(S)"<<endl;
        }
      }

     else if(imin==fmin){
        min=fmin-imin;
        if(ihour<fhour){
          hour=fhour-ihour;
          cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<min<<" MINUTO(S)"<<endl;
        }
        else if(ihour>fhour){
            hour=(fhour-ihour)+24;
            cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<min<<" MINUTO(S)"<<endl;
        }
        else if(ihour==fhour){
            hour=(fhour-ihour)+24;
            cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<min<<" MINUTO(S)"<<endl;
        }
      }

      return 0;
        
       }

       

