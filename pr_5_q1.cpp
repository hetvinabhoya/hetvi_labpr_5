#include<iostream>
using namespace std;

int main()
{
	int a,b,n;
	
	cout << "Enter Value of A : ";
	cin >> a;
	cout << "Enter Value of B : ";
	cin >> b;
	
	try
	{
		if(a == 0)
		{
			throw a;
		}
		
		n = a / b;
		cout << "Result : " << n;
		
	}
	
	catch(...)
	{
		cout << "Can't divided by Zero...";
	}
	
	return 0;
}
