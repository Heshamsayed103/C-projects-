#include <iostream>
#include <cmath>
using namespace std;
int main() {
	const double pi = 3.14;//declartion a constant .
	float r;
	cout << "Please Enter the r " << endl;
	cin >> r;
	double result = pow(r, 2) *pi ;/*calling a function 
	we need to write what is the type it will return and second its name and Third the function and in() : what its take and you input*/
	cout << "The Area of Cycle =" << result;
	return 0;
}