#include <iostream>
using namespace std;
int main()
{
	int i , n;
	cout << " Enter a number: ";
	cin >> n ;
	for( i = 2 ; i < n ; i++ )
	{
		if ( n % i == 0 )
		{
		  cout << " " << n << " is a composite number." ;
		  break ;
	    } 
    }
    
    if ( i == n )
    {
    	cout << " " << n << " is a prime number." ;
	}	
	
	return 0 ;
}