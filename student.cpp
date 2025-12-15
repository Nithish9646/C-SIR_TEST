#include<iostream>
using namespace std;
class A
{
	private:
		char name[150];
		int age;
	public:
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
	out<<ob4.name<<" "<<ob4.age<<endl;
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
	A ob1[100];
	int t,n,sum=0,k=0;
	cout<<" 1>= T <=10"<<endl;
	cout<<"enter the  t : ";
	cin>>t;
	if((t>=1)&&(t<=10))
	for(int i=0;i<t;i++)
	{
		cout<<"1>= N <=1000"<<endl;
		cout<<"enter the n : ";
		cin>>n;
		if((n>=1)&&(n<=1000))
		{
		sum=sum+n;
		for(int j=0;j<n;j++)
		{
			cin>>ob1[k++];
		}
		}
		else
			return 0;
	}
	else
		return 0;
	cout<<endl;
	for(int j=0;j<sum;j++)
	{
		cout<<ob1[j];
	}



}
