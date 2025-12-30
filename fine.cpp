#include<iostream>
using namespace std;
class librarymember
{
	public:
		virtual void calculatefine(int day)
		{
			cout<<"base class"<<endl;
		}
};
class student:public librarymember
{
	public:
		int fine;
		string type;
		void calculatefine(int day)
		{
			fine=day*2;
			cout<<"fine="<<fine<<endl;
		}
		/*void print()
		{
			cout<<"fine="<<fine<<endl;
		}*/
};
class teacher:public librarymember
{
	public:
		int fine;
		string type;
		void calculatefine(int day)
		{
			fine=day*1;
			cout<<"fine="<<fine<<endl;
		}
		/*void print()
		{
			cout<<"fine="<<fine<<endl;
			cout<<"type="<<type<<endl;
		}*/
};
int main()
{
	librarymember *ptr;
	int n,i,op;
	string type;
	cout<<"enter the how many times to run : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"1) student 2) teacher "<<endl;
		cin>>op;
		switch(op)
		{
			case 1:ptr=new student;
			       break;
			case 2:ptr=new teacher;
			       break;
		}
		int day;
		cout<<"enter the days : ";
		cin>>day;
		ptr->calculatefine(day);
		//ptr->print();
	}
}
