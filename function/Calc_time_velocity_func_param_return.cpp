/* Computation done OUTSIDE main().
 * Slight flexiabilty. Computation
 * CAN be REUSED with different
 * values by changing arguments.
 */

#include <iostream>
#include <cmath>

using namespace std;

double get_time(int x0)
{

	// Initialization
	double g = 9.81;

	// Expressions and Assignment
	double t = sqrt((2*x0)/g);

    return t;
}
int main()
{
    double time;
    time = get_time(38);
    cout << "if v_initial = 38 then ";
    cout << "t_final = " << time << " sec \n";

    time = get_time(100);
    cout << "if v_initial = 100 then ";
    cout << "t_final = " << time << " sec \n";
}