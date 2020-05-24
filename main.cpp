//	 IN THE NAME OF GOD

#include <iostream>

#include "functions.h"
#include "d:\moein proje\source\repos\my library\graphic\color.h"
using namespace std;

int main()
{
	int a, b;
	setcolor(6);
	cout << "Enter first posetive intiger\n";
	setcolor(7);
	cin >> a;
	setcolor(6);
	cout<<endl<<"Enter first posetive intiger\n";
	setcolor(7);
	cin >> b;
	setcolor(2);
	cout << endl <<"your result is:\t"<< gcd(a, b)<<endl;
	setcolor(7);
	system("pause");
	return 0;

}