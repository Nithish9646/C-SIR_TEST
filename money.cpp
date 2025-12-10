#include<iostream>
using namespace std;
class money
{
	private:
		int rupees;
		int paisa;
		public:
		void set()
		{
			cin>>rupees;
			rupees=rupees*100;
			cin>>paisa;
		}
		void print()
		{
			cout<<"rupees : "<<rupees<<endl;
			cout<<"paisa : "<<paisa<<endl;
		}
		money operator+()
		{
		 money temp;
		 temp.rupees=rupees+paisa;
		 return temp;
		}
		void pri()
		{
			cout<<"rupees"<<rupees<<endl;
		}
		bool operator <(money & ob4)
		{
			 bool a;
			a=rupees<ob4.rupees;
			return a;
		}
};
int main()
{
	money ob1,ob2,m1,m2;
		bool m3;
	cout<<"ob1"<<endl;
	ob1.set();
	cout<<"ob2"<<endl;
	ob2.set();
	cout<<"print 1"<<endl;
	ob1.print();
	cout<<"print 2"<<endl;
	ob2.print();
	m1=+ob1;
	m2=+ob2;
	m1.pri();
	m2.pri();
	m3=m1<m2;
        if(m3==0)
		cout<<"false"<<endl;
	else
		cout<<"true"<<endl;

}
