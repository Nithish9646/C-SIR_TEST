#include<iostream>
using namespace std;
class customer
{
	public:
		virtual void getfinalamount()
		{
			cout<<"base"<<endl;
		}
};
class regularcustomer:public customer
{
	public:
		int amount;
		void getfinalamount()
		{
			cout<<"enter the fine amount : ";
			cin>>amount;
			cout<<amount/100*95<<endl;
		}
};
class premiumcustomer:public customer
{
	public:
		int amount;
		void getfinalamount()
		{
			cout<<"enter the fine amount : ";
			cin>>amount;
			cout<<amount/100*85<<endl;
		}
};
int main()
{
	customer *ptr;
	int n,i,op;
	cout<<"enter the num : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"1) regularcustomer 2) premiumcustor"<<endl;
		cin>>op;
		switch(op)
		{
			case 1:ptr=new regularcustomer;
			       break;
			case 2:ptr=new premiumcustomer;
			       break;
		}
		ptr->getfinalamount();
	}
}
