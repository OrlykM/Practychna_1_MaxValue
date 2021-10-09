#include <iostream>
using namespace std;
int main()
{
	int n, k;
	cout << "Enter size :>>> ";
	cin >> n;
	int* arry = new int[n+1];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter value: ";
		cin >> k;
		arry[i] = k;
	}
	for (int i = 0; i < n; i++)
	{
		if (arry[i] >= arry[i+1] && arry[i] >= arry[0]) {
			arry[0] = arry[i];
		}
	}
	cout << "Max value is: " << arry[0];
	delete[] arry;
}