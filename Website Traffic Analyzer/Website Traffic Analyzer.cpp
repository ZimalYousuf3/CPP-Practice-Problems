#include <iostream>
#include <fstream> // for File I/O
#include <iomanip> // for setprecision ()
#include <cstdlib> // for exit (1)
using namespace std ;

int main ()
{
	int totalPoints = 0 , lowPoints = 0 , mediumPoints = 0 , highPoints = 0 ;
	double value = 0.0 , totalVisitors = 0.0 , averageVisitors = 0.0 ;   
	
	// Reading the file
	ifstream inFile ;
	inFile.open ("traffic.txt") ;
	if (inFile)
	{
		while (inFile >> value)
		{
			totalPoints++ ;
			totalVisitors += value ;
			
			// Categorizing Visitors data points
			if (value < 50.0)
			{
				lowPoints++ ;
			}
			
			else if (value >= 50.0 && value <= 200.0)
			{
				mediumPoints++ ;
			}
			
			else
			{
				highPoints++ ;
			}
		}
		averageVisitors = totalVisitors / static_cast <double> (totalPoints) ;
	}
	else
	{
		cout << " Error reading the file! " ;
		exit (1) ;
	}
	
	inFile.close() ;
	
	// Writing the report to the file
	ofstream outFile ;
	outFile.open("traffic_report.txt") ;
	if (outFile)
	{
		outFile << "----------- TRAFFIC REPORT --------------" << endl ;
		outFile << " Total no. of traffic data points: " << totalPoints << endl ;
		outFile << " Total Visitora: " << fixed << setprecision(2) << totalVisitors << endl ;
		outFile << " Average Visitors: " << fixed << setprecision(2) << averageVisitors << endl ;
		outFile << " Visitors Data Points Categories:- " << endl ;
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
	cout << "----------- TRAFFIC REPORT -----------" << endl ;
	cout << " Total no. of visitors data points: " << totalPoints << endl ;
	cout << " Total Visitors: " << totalVisitors << endl ;
	cout << " Average Visitors: " << averageVisitors << endl ;
	cout << " Visitors Data Points Categories:- " << endl ;
	cout << " Low data points: " << lowPoints << endl ;
	cout << " Medium data points: " << mediumPoints << endl ;
	cout << " High data points: " << highPoints << endl ;
	cout << "------------------------------------" << endl ;   
	
	return 0 ;
}
