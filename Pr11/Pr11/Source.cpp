#include<iostream>
#include<cmath>
using namespace std;

int main() {
	cout << "Enter Number:";
	int a, b, c;
	cin >> a >> b >> c;
	if (a >= b && b >= c) cout << c << " " << b << " " << a<<endl;
	else
		if (b >= c && c >= a) cout << a << " " << c << " " << b << endl;
	else 
		if (a >= c && c >= b) cout << b << " " << c << " " << a<<endl;
	
	else
		if (c >= b && b >= a) cout << a << " " << b << " " << c << endl;
	else 
		if (b >= a && a >= c) cout << c << " " << a << " " << b<<endl;

	system("pause");
	return 0;
}