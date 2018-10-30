#include<iostream>
#include<cmath>
using namespace std;

int main() {
	cout << "Enter Number:";
	int n=1, i = 0;
	while (n != 0)
	{
		cin >> n;
		i++;
	}
	cout << i-1 << endl;
	system("pause");
	return 0;
}