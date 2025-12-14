#include<iostream>
using namespace std;
class A
{
	private:
		char name[150];
		int age;
	public:
		A()
		{
			cout<<"default"<<endl;
			cout<<"name : "<<name<<endl;
			cout<<"age : "<<age<<endl;
		}
		friend ostream & operator <<(ostream & out, A & ob4);
		friend istream & operator >>(istream & in, A & ob4);
		void print()
		{
			cout<<"name : "<<name<<endl;
			cout<<"age : "<<age<<endl;
		}
};
ostream & operator <<(ostream & out,A &ob4)
{
	out<<"name : "<<ob4.name<<" "<<ob4.age<<endl;
	return out;

}
istream & operator >>(istream & in, A &ob4)
{
	cout<<"name : " ;
	in>>ob4.name;
	cout<<"age : ";
	in>>ob4.age;
	return in;
}
int main()
{
	A ob1;
	int t,n,sum=0;
	cout<<"enter the  t : ";
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cout<<"enter the n : ";
		cin>>n;
		sum=sum+n;
		for(int j=0;j<n;j++)
		{
			cin>>ob1;
			//cout<<ob1;
		}
		for(int j=0;j<n;j++)
		{
			cout<<ob1;
		}
	}


}
