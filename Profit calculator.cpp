#include <iostream>
using namespace std;
int main()
{
	int amount , tenure ;
	float profit;
	cout << " Enter the principal amount: " ;
	cin >> amount ;
	cout << " Enter the tenure: " ;
	cin >> tenure ;
	if ( amount > 25000 && tenure > 10 )
	{
		profit = 0.10 * amount ;
	}
	else if ( amount == 25000 && tenure == 10 )
	{
		profit = 0.07 * amount ;
	}
	else if ( amount < 25000 && tenure < 10 )
	{
		profit = 0.05 * amount ;
	}
	else
	{
		profit = 0 ;
	}
	
	cout << " Profit = "<< profit ;
	return 0 ;
}