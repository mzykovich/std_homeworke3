#include<iostream>
#include<cmath>
using namespace std;

int main() {
	cout << "Enter Number:";
	int n;
	cin >> n;
	int i = 1;
	while (i <= n)
	{
		cout << i << endl;
		i *= 2;
	}

	system("pause");
	return 0;
}