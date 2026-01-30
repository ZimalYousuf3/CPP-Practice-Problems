#include <iostream>
using namespace std ;
int main ()
{
	const int NUM_QUESTIONS = 3 ;
	int responses [NUM_QUESTIONS] ;
	
	cout << "-----SYSTEM USABILITY SURVEY-----" << endl ;
	cout << " Q1: Clarity of instructions? " << endl ;
	cout << " 1. (Poor), 2. (Okay), 3. (Good) " << endl ;
	do{
		cout << " Enter your response (1-3): " ;
	    cin >> responses [0] ;
	    if ( responses[0] < 1 || responses[0] > 3 )
	    {
	    	cout << " Invalid Response! " << endl ; 
		}
	} while ( responses[0] < 1 || responses[0] > 3 ) ;

	cout << "---------------------------------" << endl ;
	cout << " Q2: Speed of the system? " << endl ;
	cout << " 1. (Poor), 2. (Okay), 3. (Good) " << endl ;
	do{
		cout << " Enter your response (1-3): " ;
	    cin >> responses [1] ;
	    if ( responses[1] < 1 || responses[1] > 3 )
	    {
	    	cout << " Invalid Response! " << endl ; 
		}
	} while ( responses[1] < 1 || responses[1] > 3 ) ;

	cout << "---------------------------------" << endl ;
	cout << " Q3: Overall satisfaction? " << endl ;
    cout << " 1. (Poor), 2. (Okay), 3. (Good) " << endl ;
	do{
		cout << " Enter your response (1-3): " ;
	    cin >> responses [2] ;
	    if ( responses[2] < 1 || responses[2] > 3 )
	    {
	    	cout << " Invalid Response! " << endl ; 
		}
	} while ( responses[2] < 1 || responses[2] > 3 ) ;

    cout << endl ;
	cout << " Your Responses: " ;
	for (int i=0 ; i<NUM_QUESTIONS ; i++)
	{
		cout << responses[i] ;
		if ( i < NUM_QUESTIONS - 1 ) cout << "," ;
	}
	cout << endl ;
	cout << " GOODBYE! " << endl ;
	
	return 0 ;
}
