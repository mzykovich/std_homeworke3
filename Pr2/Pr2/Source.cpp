#include<iostream>
#include<cmath>
using namespace std;

int main() {
	cout << "Enter Number:";
	int n;
	cin >> n;
	int i = 2;
	while (i*i<=n)
	{
		if (n % i == 0)
		{
			cout << i << endl;
			break;
		}
		i++;
	}

	system("pause");
	return 0;
}