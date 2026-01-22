#include<iostream>
using namespace std;
class A
{
	public:
		int x=10;
	public:
		A()
		{
			cout<<"default constructor of class A"<<endl;
		}
		~A()
		{
			cout<<"destructor of class A"<<endl;
		}
};
class B
{
	public:
		int y=20;
	public:
		B()
		{
			cout<<"default constructor of class B"<<endl;
		}
		~B()
		{
			cout<<"destructor of class B"<<endl;
		}
};
class C
{
	public:
		int z=30;
	public:
		C()
		{
			cout<<"default constructor of class C"<<endl;
		}
		~C()
		{
			cout<<"destructor of class C"<<endl;
		}
};
class D:public A,public B,public C
{
	public:
		int m=40;
	public:
		D()
		{
			cout<<"default constructor of class D"<<endl;
		}
		~D()
		{
			cout<<"destructor of class D"<<endl;
		}
		void print()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
			cout<<"m="<<m<<endl;
		}
};
int main()
{
	D ob;
	ob.print();
}
