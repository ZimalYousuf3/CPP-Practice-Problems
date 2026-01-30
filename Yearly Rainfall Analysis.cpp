#include <iostream>
using namespace std;
int main()
{
	double rainfall [12] ;
	double total = 0 , avg = 0 , max = 0 ;
    int i , month ;
	for ( i=0 ; i < 12 ; i++ )
	{
		cout << " Enter the rainfall in mm for month no. " << i+1 << " : " ;
		cin >> rainfall [i] ;
		total = total + rainfall[i] ;
	} 
	avg = total / 12.0 ; 
	max = rainfall[0] ;
	
	for ( i=0 ; i < 12 ; i++ ) 
	{
		if ( rainfall[i] > max )
		{
			max = rainfall[i] ;
		    month = i+1 ;
		}
	}
	cout << " Total Rainfall of the year is " << total << " mm." << endl ;
	cout << " Average Rainfall of the year is " << avg << " mm." << endl ;
	cout << " Highest rainfall is " << max << " mm in month no. " << month ;
	
	return 0 ;
}