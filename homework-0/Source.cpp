#include<iostream>
#include<map>
#include<vector>
using namespace std;



class A
{
public:
	int i;
};
A* f()
{

	A x;
	return &x;
}
int main()
{
	A* pA = f();
	pA->i = 10;
	cout << pA->i;
}