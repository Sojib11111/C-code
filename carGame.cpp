
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	int speed = 0;
	int gear = 0;
	int accel = 0;
	int brake = 0;
	bool running = true;
	
	cout << "Welcome to the Car Game!" << endl;
	cout << "You are driving a car with a manual transmission." << endl;
	
	while (running)
	{
		cout << "Speed: " << speed << "mph" << endl;
		cout << "Gear: " << gear << endl;
		
		cout << "What would you like to do? (A)ccelerate, (B)rake, (S)hift, (Q)uit: ";
		char input;
		cin >> input;
		
		if (input == 'A')
		{
			if (gear > 0)
			{
				cout << "How much would you5 like to accelerate (1-5): ";
				cin >> accel;
				if (accel > 0 && accel <= 5)
				{
					speed += accel;
				}
				else
				{
					cout << "Invalid amount." << endl;
				}
			}
			else
			{
				cout << "You must be in a gear to accelerate!" << endl;
			}
		}
		else if (input == 'B')
		{
			cout << "How much would you like to brake (1-5): ";
			cin >> brake;
			if (brake > 0 && brake <= 5)
			{
				speed -= brake;
				if (speed < 0)
				{
					speed = 0;
				}
			}

        }
    }
}
		