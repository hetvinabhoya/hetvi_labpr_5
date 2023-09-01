#include<iostream>
using namespace std;

class A{
	public:
		int s_id;
		string name;
		char div;
		int roll_no;
		string city;
		double phn_no;
		
};

class B : public A{
	public:

		set1()
		{
			cout << "Enter Student Id : ";
			cin >> s_id;
			cout << "Enter Name : ";
			cin >> name;
			cout << "Enter Division : ";
			cin >> div;
		}
};

class C : public A{
	public:
		
		set2()
		{
			cout << "Enter Roll no. : ";
			cin >> roll_no;
			cout << "Enter City : ";
			cin >> city;
			cout << "Enter Phone No. : ";
			cin >> phn_no;
		}
};

class D : public B,public C{
	public:
	
		get()
		{
			cout << endl;
			cout << "Student Id : " << B::s_id << endl;
			cout << "Name : " << B::name << endl;
    		cout << "Division : " << B::div << endl;
			cout << "Roll No. : " << C::roll_no << endl;
			cout << "City : " << C::city << endl;
			cout << "Phone No. : " << C::phn_no << endl;
		}
};

int main()
{
	D a;

	a.B::set1();
	a.C::set2();
	a.get();

	return 0;
}
