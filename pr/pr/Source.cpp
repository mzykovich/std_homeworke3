#include<iostream>
#include<cmath>
using namespace std;

int main() {
		cout << "Enter Number:";
		int N, k = 1;
		cin >> N;
		cout << "Answer: ";
		while (N >= pow(k, 2))
		{
			cout << pow(k, 2) << endl;
			k = k + 1;
		}
		system("pause");
		return 0;
	


}