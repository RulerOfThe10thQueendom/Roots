#include <iostream>
using namespace std;

int main()
{
	int a, b, c; 
	cout << "what is your a value : ";
	cin >> a;
	cout << "what is your b value : ";
	cin >> b;
	cout << "what is your c value : ";
	cin >> c;

	double descrim = b*b - 4.0*a*c;

	double sol1 = (-b + sqrt(b*b - 4.0 * a*c)) / (2.0 * a);
	double sol2 = (-b - sqrt(b*b - 4.0 * a*c)) / (2.0 * a);

	if (descrim >= 0)
		cout << "Solution 1: " << sol1 << endl << "Solution 2: " << sol2 << endl << endl;
	else
		cout << "There are no real solutions." << endl << endl;

	return 0;
}