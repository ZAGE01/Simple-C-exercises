#include <iostream>
using namespace std;

unsigned long fibonacci(int x)
{
	if (x <= 1) {
		return x;
	}
	else {
		return fibonacci(x - 1) + fibonacci(x - 2);
	}
	

}

int main()
{
	int luku;
	cout << "Anna fibonaccin lukujen maara: ";
	cin >> luku;
	cout << "\nFibonnacci Sarja : ";
	for (int i=0; i<luku; i++) 
		cout << " " << fibonacci(i);

	return 0;
}
