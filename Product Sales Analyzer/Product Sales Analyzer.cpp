#include <iostream>
#include <fstream> // for File I/O
#include <iomanip> // for setprecision ()
#include <cstdlib> // for exit (1)
using namespace std ;

int main ()
{
	int totalPoints = 0 , lowPoints = 0 , mediumPoints = 0 , highPoints = 0 ;
	double value = 0.0 , totalSales = 0.0 , averageSales = 0.0 ;   
	
	// Reading the file
	ifstream inFile ;
	inFile.open ("sales.txt") ;
	if (inFile)
	{
		while (inFile >> value)
		{
			totalPoints++ ;
			totalSales += value ;
			
			// Categorizing sales data points
			if (value < 1000.0)
			{
				lowPoints++ ;
			}
			
			else if (value >= 1000.0 && value <= 5000.0)
			{
				mediumPoints++ ;
			}
			
			else
			{
				highPoints++ ;
			}
		}
		averageSales = totalSales / static_cast <double> (totalPoints) ;
	}
	else
	{
		cout << " Error reading the file! " ;
		exit (1) ;
	}
	
	inFile.close() ;
	
	// Writing the report to the file
	ofstream outFile ;
	outFile.open("sales_report.txt") ;
	if (outFile)
	{
		outFile << "----------- SALES REPORT --------------" << endl ;
		outFile << " Total no. of sales data points: " << totalPoints << endl ;
		outFile << " Total Sales: " << fixed << setprecision(2) << totalSales << endl ;
		outFile << " Average Sales: " << fixed << setprecision(2) << averageSales << endl ;
		outFile << " Sales Data Points Categories:- " << endl ;
		outFile << " Low data points: " << lowPoints << endl ;
		outFile << " Medium data points: " << mediumPoints << endl ;
		outFile << " High data points: " << highPoints << endl ;
		outFile << "---------------------------------------" << endl ;
	}
	else
	{
		cout << " Error creating the file! " ;
		exit (1) ;
	}
	outFile.close() ;
	
	// Displaying the report
	cout << "----------- SALES REPORT -----------" << endl ;
	cout << " Total no. of sales data points: " << totalPoints << endl ;
	cout << " Total Sales: " << totalSales << endl ;
	cout << " Average Sales: " << averageSales << endl ;
	cout << " Sales Data Points Categories:- " << endl ;
	cout << " Low data points: " << lowPoints << endl ;
	cout << " Medium data points: " << mediumPoints << endl ;
	cout << " High data points: " << highPoints << endl ;
	cout << "------------------------------------" << endl ;   
	
	return 0 ;
}

