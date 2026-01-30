#include <iostream>
using namespace std ;
int main ()
{
	int choice ;
	do{
		cout << "----- MENU -----" << endl ;
		cout << " 1. Home page " << endl ;
		cout << " 2. Gallery " << endl ;
		cout << " 3. Exit " << endl ;
		cout << "----------------" << endl ;
		
		cout << " Enter your choice (1-3): " ;
		cin >> choice ;
		
		switch (choice)
		{
			case 1 :
				cout << " Opening Home page " << endl ;
				break ;
				
			case 2 :
				cout << " Opening Gallery " << endl ;
				break ;
				
			case 3 :
				cout << " EXITING " << endl ;
				break ;		
				
			default :
				cout << " INVALID CHOICE! Please enter again. " << endl ;
				
		} 
	} while (choice!=3) ;
	
	return 0 ;
}





