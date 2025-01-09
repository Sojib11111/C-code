#include <iostream>

using namespace std;

int main() {
	int N;
	cin>>N;
	if(N<1982){
		if(N%4==0){
		cout<<"I can participate in LCPC"<<endl;
        }
			else{
		cout<<"I have to travel back to the past"<<endl;
	          }
    }
		else{
		if(N%4==0 && N%100 !=0){
			
				cout<<"I can participate in LCPC"<<endl;
			
        }
			else if (N%400==0){
				cout<<"I can participate in LCPC"<<endl;
			}
		
			else{
		cout<<"I have to travel back to the past"<<endl;
		
		}
 }
	
	
	
	return 0;
}
