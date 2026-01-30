#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string name;
    double price = -1; 
    double total_cost = 0;

    cout << "-----SHOPPING CART TOTAL CALCULATOR-----" << endl;

    while (price != 0) 
	{
        cout << "Enter Item Name (Optional): ";
        
        if (total_cost > 0) 
		{
            cin.ignore(1000, '\n'); 
        }
        
        getline(cin, name);
        
        cout << "Enter Price (enter 0 to finish shopping and calculate the total) : ";
        
        if (!(cin >> price)) 
		{
            cout << "Invalid input. Ending program." << endl;
            break;
        }
        
        if (price > 0)
		{
            total_cost += price; 
            cout << "Added " << name << " for Rs. " << price << ". Current total: Rs. " << total_cost << endl;
        } 
		
		else if (price == 0)
		{
            cout << "Zero entered. Finalizing shopping cart..." << endl;
        } 
		
		else 
		{
          
            cout << "Price cannot be negative. Please try again." << endl;
            price = -1; 
        }
    }
    cout << fixed << setprecision (2) ;
    cout << endl << "---------- Total Checkout Bill ----------" << endl;
    cout << "Total Cost of Shopping: Rs. " << total_cost << endl;

    return 0;
}

