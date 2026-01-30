#include <iostream>
#include <iomanip>
using namespace std ;
int main ()
{
	const double hydrogen = 1.008 , oxygen = 16.00 , avagadros_no = 6.022 * ( 23 * 10 ) ;
	double no_of_molecules , molar_mass , total_mass , no_of_moles ;
	
	cout << " How many molecules of water do you have ? : ";
	cin >> no_of_molecules ;
	
	// Calculating Molar Mass
	molar_mass = ( 2 * hydrogen ) + ( 1 * oxygen ) ;  
	cout << " Molar mass of water is " << fixed << setprecision(3) << molar_mass << " g/mol. " << endl ;
	
	// Calculating Total Mass
	total_mass = ( no_of_molecules / avagadros_no ) * molar_mass ; 
	cout << " Total Mass of water is " << fixed << setprecision(3) << total_mass << " g." << endl ;
	
	// Calculating No. of Moles
	no_of_moles = ( total_mass / molar_mass ) ; 
	cout << " The no. of moles in water is " << fixed << setprecision(3) << no_of_moles << " moles." << endl ;
	
	return 0 ;
}

