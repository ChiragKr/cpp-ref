/* Computation done OUTSIDE main().
 * Slight flexiabilty. Computation
 * CAN be REUSED with different
 * values by changing arguments.
 */

#include <iostream>
#include <cmath>

void get_time_velocity(int x0)
{
	/*Function: collection of statements
	that executes sequentially*/ 

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
	get_time_velocity(38);
	get_time_velocity(100);
}