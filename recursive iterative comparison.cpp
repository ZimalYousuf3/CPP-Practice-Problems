#include <iostream>
using namespace std;

long long iterative_factorial (int num)
{
	int fact = 1 ;
	for ( int i = 1 ; i <= num ; i++ )
	{
		fact *= i ;
	}
	return fact ;
}

long long recursive_factorial (int n)
{
	// Base Case
	if (n==0 || n==1)
	return 1 ;
	
	// Recursive Case
	else
	{
		return n * recursive_factorial (n-1) ;
	}
}

int iterative_fibonacci (int n)
{
	// Base Cases
	if (n==0)
	return 0 ;
	
	else if (n==1)
	return 1 ;
	
	// Iterative Case
	else
	{
		int prev1 = 0 , prev2 = 1 , current ;
		for (int i = 2 ; i < n ; i++)
		{
			current = prev1 + prev2 ;
			prev1 = prev2 ;
			prev2 = current ;
		}
		return current ;
	}
}

int recursive_fibonacci (int n)
{
	// Base Case
	if (n==0)
	return 0 ;
	
	else if (n==1)
	return 1 ;
	
	// Recursive Case
	else
	{
		return recursive_fibonacci (n-1) + recursive_fibonacci (n-2) ;
	}
}

inline int square (int n)
{
	return (n*n);
}

inline int cube (int n)
{
	return (n*n*n);
}

int main()
{
	int n , choice ;
	do{
		cout << "-----MATH CALCULATOR-----"<< endl ;
		
		cout << "1. Factorial (Iterative)" << endl;

        cout << "2. Factorial (Recursive)" << endl;

        cout << "3. Fibonacci (Iterative)" << endl;

        cout << "4. Fibonacci (Recursive)" << endl;

        cout << "5. Square and Cube" << endl;
        
        cout << "6. Exit" << endl;
		
		cout << " Enter a number : " ;
		cin >> n ;
		
		cout << " Enter the choice (1-6) : " ;
		cin >> choice ;
		
		switch (choice)
		{
			case 1 :
				{
					cout << n << "! = " << iterative_factorial (n) << endl ;
					break ;
				}
			case 2 :
				{
					cout << n << "! = " << recursive_factorial (n) << endl ;
					break ;
				}
			case 3 :
			    {
			    	cout << " fibonacci (" << n << ") = " << iterative_fibonacci (n) << endl ;
			    	break ;
				}
			case 4 :
			    {
			    	cout << " fibonacci (" << n << ") = " << recursive_fibonacci (n) << endl ;
			    	break ;
				}
			case 5 :
			    {
			    	cout << "Square of " << n << " = " << square(n) << endl ; 
			    	cout << "Cube of " << n << " = " << cube(n) << endl ;
			    	break ;
				}
			case 6 :
			    {
			    	cout << " EXITING " << endl ;
			    	break ;
				}	
			default :
			    {
			    	cout << " INVALID CHOICE!" ;
				}					
		}
	}
	while (choice != 6) ;
	
	return 0 ;
}










	