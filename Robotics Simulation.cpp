#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int actions_performed = 0 ; 
    int total_actions_needed ; 
    bool task_completed = false ;

    cout << "-----Robotics Task Simulation-----" << endl ;
    cout << " Enter the total number of actions required for the robot to complete its task: " ;
    
    if (!(cin >> total_actions_needed) || total_actions_needed <= 0) 
	{
        cout << " Invalid input. Starting with a default of 5 actions." << endl ;
        total_actions_needed = 5 ;
    }

    cout << " Starting simulation with " << total_actions_needed << " required actions..." << endl ;
    cout << "--------------------------------------------------------" << endl ;
    while (task_completed == false) 
	{    
        actions_performed++ ;
        cout << " Action " << actions_performed << ": Robot is picking up the object." << endl ;
        
        if (actions_performed >= total_actions_needed) 
		{
            task_completed = true ; 
            cout << " Goal reached! Task completion condition met." << endl ;
        }
    }

    if (task_completed == true) 
	{
        cout << endl << "---------- Simulation Results ---------" << endl ;
        cout << " Task COMPLETED successfully!" << endl ;
        cout << " Total actions performed: " << actions_performed << endl ;
        cout << " Robot is now switching to standby mode." << endl ;
    } 
	else 
	{ 
        cout << " Program Ended (Task Incomplete)." << endl ;
    }

    return 0 ;
} 



