#include <iostream>
#include <iomanip>
using namespace std ;
int main()
{
   const double Gravity = 9.8 ;
   const double conversion_km_per_h = 3.6 ;
   double Velocity , Distance ;
   
   int Time;
   cout << " -----Free Fall Calculator------" << endl ;
   cout << " Enter the fall time in seconds: " ;
   cin  >> Time ;
   
   Velocity = Gravity * Time ;

   cout << " Final Velocity : " << fixed << setprecision(1) << Velocity << " m/s." << endl ;
   
   Distance = ( 0.5 * Gravity * Time * Time ) ;
   cout << " Distance Fallen : " << fixed << setprecision(2) << Distance << "m." << endl ;
 
   cout << " After conversion Velocity : " << fixed << setprecision(2) << Velocity * conversion_km_per_h << " Km/h." << endl ;
   
   return 0;
}  





