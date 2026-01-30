#include <iostream>
#include <string>
#include <iomanip>
using namespace std ;

const int MAX_EMP = 50 ;
int empCount = 0 ;

// Function for adding employee details
void add_details (int &empCount ,int emp_ID[], string emp_name[] , string emp_department[], int emp_salary[])
{
	if (empCount < MAX_EMP)
	{
		cout << " Enter Employee ID: ";
		cin >> emp_ID[empCount] ;
		cin.ignore() ;
		
		cout << " Enter Employee Name: ";
		getline (cin, emp_name[empCount]) ;
		
		cout << " Enter Employee Department: ";
		getline (cin, emp_department[empCount]) ;
		
		cout << " Enter Employee salary: ";
		cin >> emp_salary[empCount] ;
		
		empCount++ ;
		cout << " Employee details added successfully!" << endl ;
		cout << endl ;
	}
	else {
		cout << " Maximum Capacity reached! Cannot add more details." << endl ;
	}
} 

// Function for displaying employee details
void display_details (int &empCount ,int emp_ID[], string emp_name[] , string emp_department[], int emp_salary[])
{
	if (empCount == 0) cout << " No employee details found. " << endl ;
	else {
		cout << "=================== Employee Details =======================" << endl ;
		cout << " IDs" << setw(15) << "Names" << setw(20) << "Departments"<< setw(20) <<"Salaries " << endl ;
		cout << "============================================================" << endl ;
		for (int i=0 ; i<empCount ; i++)
		{
			cout << emp_ID[i] << setw(18) << emp_name[i] << setw(20) << emp_department[i] << setw(15) << emp_salary[i] << endl ;
		}
	}
	cout << endl ;
}

// Function for searching an employee detail by ID
void search_by_ID (int search_ID, bool found, int emp_ID[],string emp_name[], string emp_department[] ,int emp_salary[], int empCount)
{
	cout << " Enter Employee ID: " ;
	cin >> search_ID ;
	
	for (int i = 0; i < empCount ; i++)
	{
		if ( emp_ID[i] == search_ID )
		{
			found = true ;
			cout << " ====== Search by ID ====== " << endl ;
			cout << " Employee ID: " << emp_ID[i] << endl ;
			cout << " Employee Name: " << emp_name[i] << endl ;
			cout << " Employee Department: " << emp_department[i] << endl ;
			cout << " Employee Salary: " << emp_salary[i] << endl ;
		}	
	} 
	if(!found)
	{
		cout << " Employee not found! " << endl ;
	}
	cout << endl ;
}

int main ()
{
	int emp_ID [MAX_EMP] ;
	string emp_name [MAX_EMP] ;
	int emp_salary [MAX_EMP] ;
	string emp_department [MAX_EMP] ;
	int search_ID ;
	int choice ;
	bool found = false ;
	
	do{
		// Displaying Menu
		cout << "=========== EMPLOYEE MANAGEMENT SYSTEM ===========" << endl ;
		cout << "   1. Add employee details. " << endl ;
		cout << "   2. Display employee details. " << endl ;
		cout << "   3. Search employee by ID. " << endl ;
		cout << "   4. Exit " << endl ;
		cout << "==================================================" << endl ;
		cout << endl ; 
		cout << " Enter your choice (1-4): " ;
		cin >> choice ;
		switch (choice)
		{
			case 1:
				{
					add_details(empCount ,emp_ID, emp_name , emp_department, emp_salary) ;
					break ;
				}
			case 2:
				{
					display_details(empCount ,emp_ID, emp_name , emp_department, emp_salary) ;
					break ;
				}	
			case 3:
			    {
			    	search_by_ID (search_ID, found, emp_ID, emp_name, emp_department ,emp_salary, empCount) ;
			    	break ;
				}	
			case 4:
				{
					cout << " Exiting! " << endl ;
					break ;
				}
			default :
			    cout << " Invalid Choice! Choose between 1-4 ." << endl ;	
		}
		
	} while (choice != 4) ;
	
	
	return 0 ;
}

