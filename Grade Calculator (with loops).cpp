#include <iostream>
using namespace std ;
int main ()
{
	int sum = 0 , grade = 0 , count = 1 ;
	
	while (true)
	{
		cout << " Enter your grade " << count << " : " ;
		cin >> grade ;
		
		if (grade == -1)
		break ;
		
		if (grade < 0 && grade > 100)
		{
			cout << " Invalid grade! Enter again." << endl ;
		}
		
		sum += grade ;
		count ++ ;
    }
		if (count > 0)
		{
			double avg = static_cast <double> (sum) / count ;
			cout << " Average grade = " << avg << endl ;
			cout << " Total students = " << count << endl ;
		}
		else
		{
			cout << " No grades were entered." ;
		}
	
	return 0 ;
}
