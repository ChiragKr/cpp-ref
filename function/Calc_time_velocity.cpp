/* Computation done INSIDE main().
 * No flexiabilty. Computation
 * CANNOT be REUSED in anyway. 
 */

#include <iostream>
#include <cmath>

int main()
{
	// Statements & Expression

	/*Declaration Statement*/
	int x0;

	/*Assignment Statement*/
	x0 = 38;

	/*Simultaneous Declaration and
	Assignment = Initialization*/
	double g = 9.81;

	/*Expressions (computation)
	followed by Assignment*/
	double t = sqrt((2*x0)/g);
	double v = g*t;

	/*Print output to console*/
	std::cout << "t_final = " << t << " sec" << std::endl;
	std::cout << "v_final = " << v << " m/s" << std::endl;

}