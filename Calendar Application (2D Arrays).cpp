#include <iostream>
#include <string>
using namespace std ;

int main ()
{
	const int weeks = 5, days = 7 ; 
	string events [weeks][days] ;
	events [1][5] = " PF's Exam " ;
	events [0][3] = " Birthday " ;
	events [2][2] = " Meeting " ;
	events [3][1] = " Conference " ;
	events [4][2] = " Qawali " ;
	
	string day_names [days] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" } ;
	int calender [weeks][days] = {
	                              { 0, 1, 2, 3, 4, 5, 6 } ,
	                              { 7, 8, 9, 10, 11, 12, 13 } ,
								  { 14, 15, 16, 17, 18, 19, 20 } ,
								  {	21, 22, 23, 24, 25, 26, 27 } ,
								  { 28, 29 , 30, 31, 0, 0, 0} ,
								 } ;
	
	for (int i=0 ; i<days ; i++)
	{ 
	  // Displaying day names
		cout << "  " << day_names [i] << "\t" ;
	}
	cout << endl ;
	
	for (int i=0 ; i<weeks ; i++)
	{    
	  // Displaying calender dates
		for (int j=0 ; j<days ; j++)
		{
			if ( calender [i][j] == 0 )
			{
				cout << "\t" ;
			}
			else
			{
				cout << "  " << calender [i][j] << "\t" ;
			}
			
		}
		cout << endl ;
		
		// Displaying events
		for (int j=0 ; j<days ; j++)
		{
			if (!events [i][j].empty())
			{
				cout  << events [i][j] ;
			}
			else
			{
				cout << "\t" ;
			}
		}
		cout << endl ;
	}
	return 0 ;
}


