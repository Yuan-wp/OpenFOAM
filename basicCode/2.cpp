#include<iostream>
int main()
{
	using namespace std;
	int a = 1;
	cout << "a=" << a << endl;
	int* b = new int[10];
	b = &a;
	cout << *b << endl;
	delete b;
	return 0;      

}
