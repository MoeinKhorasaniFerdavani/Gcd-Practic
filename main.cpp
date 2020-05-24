//	 IN THE NAME OF GOD

#include <iostream>


#include "d:\moein proje\source\repos\my library\graphic\color.h"
#include "functions.h"

using namespace std;

int main()
{
	int a, b;
	printc(4, "Welcom to program\n");
	printc(6, "Enter first intiger\n");
	cin >> a;
	printc(6, "Enter secend intiger\n");
	cin >> b;
	printc(2, "bmm is :\t");
	cout << gcd(a, b) << endl;
	printc(2, "kmm is :\t");
	cout << kmm(a, b) << endl;
	cout << endl << endl;
	system("pause");
	return 0;

}