#include<iostream>
#include<cmath>
using namespace std;

int main() {
	cout << "Enter Number:";
	int n;
	cin >> n;
	int i = 0;
	while (n) {
		i += n % 2;
		n /= 2;
	}
	if (i == 1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	system("pause");
	return 0;
} 