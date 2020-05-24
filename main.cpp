//	 IN THE NAME OF GOD

#include <iostream>

#include "functions.h"

using namespace std;

int main()
{
	int a, b;
	cout << "Enter first posetive intiger\n";
	cin >> a;
	cout<<endl<<"Enter first posetive intiger\n";
	cin >> b;
	cout << endl <<"your result is:\t"<< gcd(a, b)<<endl;

	system("pause");
	return 0;

}