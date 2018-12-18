/* Computation done OUTSIDE main().
 * Slight flexiabilty. Computation
 * CAN be REUSED with identical
 * values  
 */

#include <iostream>
#include <cmath>

void get_time_velocity()
{
	/*Function: collection of statements
	that executes sequentially*/

	// Declaration
	int x0; 

	// Assignment
	x0 = 38; 

	// Initialization
	double g = 9.81;

	// Expressions and Assignment
	double t = sqrt((2*x0)/g); 
	double v = g*t;

	/*Print output to console*/
	std::cout << "t_final = " << t << " sec" << std::endl;
	std::cout << "v_final = " << v << " m/s" << std::endl;

}
int main()
{
	get_time_velocity();
}