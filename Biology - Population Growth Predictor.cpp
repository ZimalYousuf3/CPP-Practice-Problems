#include <iostream>
using namespace std ;
int main()
{
	double current_population_size , growth_percentage ;
	int no_of_years ;
	double growth_rate = growth_percentage / 100 ;
	
	cout << "Enter the current population size : " ; 
	cin >> current_population_size ;
	cout << "Enter the  annual growth rate in % : " ;
	cin >> growth_percentage ;
	cout << "Enter the no. of years : " ;
	cin >> no_of_years ;
	
	double temp = ( (1 + growth_rate) * no_of_years ) ;
	int future_population = current_population_size * temp ;
	
	cout << "Current Population : " << current_population_size << endl ;
	cout << "Growth rate : " << growth_percentage << "%" << endl ;
	cout << "Time period : " << no_of_years << " years" << endl ;
	cout << "Future Population : " << future_population ;
}


