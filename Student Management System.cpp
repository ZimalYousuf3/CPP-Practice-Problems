#include <iostream>
#include <string>
#include <iomanip>
using namespace std ;
int main ()
{
	const int MAX_STD = 50 ;
	int stdIDs [MAX_STD] , grades [MAX_STD][3] ;
	string stdNames [MAX_STD] ;
	int choice , stdCount = 0 , i=0 , j=0 ;
	
	do{ // Displaying Menue
		cout << "========= STUDENT MANAGEMENT SYSTEM ===========" << endl ;
		cout << " 1. Add Student Details. " << endl ;
		cout << " 2. Display Student Details. " << endl ;
		cout << " 3. Display Average Grades of students. " << endl ;
		cout << " 4. Display the details of Top student. " << endl ;
		cout << " 5. Search student by ID. " << endl ;
		cout << " 6. Exit " << endl ;
		cout << "===============================================" << endl ;
		cout << " Enter your choice (1-6): " ;
		cin >> choice ;
		
		switch (choice)
		{
			case 1 :
				{
					if (stdCount < MAX_STD)
					{
						cout << " Enter student ID : " ;
						cin >> stdIDs [stdCount] ;
						
						cout << " Enter student name: " ;
						cin.ignore() ;
						getline (cin, stdNames[stdCount]) ;
						
						cout << " Enter grades of 3 subjects: " << endl ;
						for ( int j=0 ; j<3 ; j++ )
					{
						cout << " Subject " << j+1 << " : " ;
						cin >> grades [stdCount][j] ;
					}
					    stdCount++ ;
						cout << " Student details added successfully! " << endl ;	
					}
					else
					{
						cout << " Maximum Student capacity reached! " << endl ;
					}
					cout << endl ;
					break ;
				}
				
			case 2 :
			    {
			    	if ( stdCount == 0 )
			    	{
			    		cout << " No student details to display! " << endl ;
					}
					else
					{
			cout << setw(10) << "IDs" << setw(15) << "Names" << setw(12) << "Sub-1" << setw(10) 
			     << "Sub-2" << setw(10) << "Sub-3" << endl ;
						cout << "----------------------------------------------------------------------" << endl ;  
                        for ( i=0 ; i<stdCount ; i++ )
                        {
                        	cout << setw(10) << stdIDs[i] << setw(15) << stdNames[i] << setw(10) ;
							for ( j=0 ; j<3 ; j++ )
							{
								cout << grades[i][j] << "         " ;
							} 
							cout << endl ;
						}
						cout << endl ;
					}
					break ;
			    }	
			case 3 :
			    {
			    	if (stdCount == 0)
			    	{
			    		cout << " No student detail found! " << endl ;
					}
					else 
					{
						float sum = 0 ;
						for ( i=0 ; i<stdCount ; i++ )
						{
							for ( j=0 ; j<3 ; j++ )
							{
								sum += grades[i][j] ;
							}
						}
						float average = sum/3 ;
						cout << " Student Average: " << fixed << setprecision(2) << average << endl ;
					}
					cout << endl ;
					break ;
				}    
			case 4 :
			    {
			    	if ( stdCount == 0 )
			    	{
			    		cout << " No Students found!. " ;
					}
					else{
						int topCount = 0 ;
			    	    float topAverage = 0 ;
						for ( i=0 ; i<stdCount ; i++ )
						{
							float sum = 0 ;
							for ( j=0 ; j<3 ; j++ )
							{
								sum += grades[i][j] ;
							}
							float average = sum/3 ;
			    	        if (average > topAverage)
			    	        {
			    		       topAverage = average ;
			    		       topCount = i ;
			                }
			            }
			    		cout << "--- Top Student Details ---" << endl ;
			    		cout << " Name: " << stdNames [topCount] << endl ;
			    		cout << " ID: " << stdIDs [topCount] << endl ;
			    		cout << " Grades : " << grades[topCount][0] << " , " << grades[topCount][1] 
						     << " , " << grades[topCount][2] << endl ;
			    		cout << " Average: " << fixed << setprecision(2) << topAverage << endl ;
			    		cout << endl ;
					}
					break ;
				}	
			case 5 :
			    {
			    	bool found = false ;
			    	int searchID ;
					cout << " Enter the student ID: " ;
					cin >> searchID ;
					for ( i=0 ; i<stdCount ; i++ )
					{
						if ( stdIDs[i] == searchID )
						{
							found = true ;
							cout << " Student Found! " << endl ;
							cout << " Name: " << stdNames[i] << endl ;
							cout << " ID: " << stdIDs[i] << endl ;
							cout << " Grades: " << grades[i][0] <<", " << grades[i][1] 
							     << ", " << grades[i][2] << endl ;
							float sum = 0 ;
						
							for ( j=0 ; j<3 ; j++ )
							{
								sum += grades[i][j] ;
							}
							float average = sum/3 ;
						    cout << " Average: " << average << endl ;
						}
					}
					if(!found)
					cout << " Student with ID " << searchID << " not found." << endl ;
					
					cout << endl ;
					break ; 
				}	
			case 6 :
			cout << " EXITING! Goodbye " << endl ;
			break ;
			
			default:
			cout << " Invalid choice! Enter again (1-6) : " ;	
		}
	} while ( choice != 6 ) ;
	return 0 ;
}
