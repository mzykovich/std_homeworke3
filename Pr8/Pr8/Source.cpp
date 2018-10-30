#include<iostream>
#include<cmath>
using namespace std;

int main() {
	cout << "Enter Number:";
	int n;
	cin >> n;
	int i = 0;
	int k = n;
	while (n)
	{
		if (n > k)
		{
			k = n;
			i = 1;
		}
		else
			if (n == k)
				i++;
		cin >> n;
	}
	cout << i << endl;
	system("pause");
	return 0;
}