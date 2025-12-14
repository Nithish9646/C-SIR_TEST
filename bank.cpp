#include<iostream>
using namespace std;
class BankAccount
{
	private:
		int balance_acc1;
		int balance_acc2;
	public:
		void amount()
		{
			cout<<"enter the amount for account 1"<<endl;
			cin>>balance_acc1;
			cout<<"enter the amount for account 2"<<endl;
			cin>>balance_acc2;
		}
		void print()
		{
			cout<<"displaying balance"<<endl;
			cout<<"Account 1="<<balance_acc1<<endl;
			cout<<"Account 2="<<balance_acc2<<endl;
		}
		friend void transfermoney(BankAccount &ob1);
};
void transfermoney(BankAccount &ob1)
{
	int k;
	cout<<"enter the transfer amount : ";
	cin>>k;
	cout<<"account-1="<<ob1.balance_acc1<<endl;
	cout<<"account-2="<<ob1.balance_acc2<<endl;
	ob1.balance_acc1=ob1.balance_acc1-k;
	ob1.balance_acc2=ob1.balance_acc2+k;
}
int main()
{
	BankAccount ob1;
	ob1.amount();
	//ob1.print();
	transfermoney(ob1);
	cout<<"after transfering"<<endl;
	ob1.print();

}

