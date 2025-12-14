#include<iostream>
using namespace std;
class ticket;
class passanger
{
	private:
		char name[20];
	public:
		passanger()
		{
			cout<<"ENTER YOUR NAME : ";
			cin>>name;
		}
		friend class ticket;
};
class ticket
{
	private:
		int distance;
	public:
		ticket(passanger &ob)
		{
			cout<<"ENTER YOUR DISTANCE : ";
			cin>>distance;
			cout<<endl;
			cout<<"Passanger : "<<ob.name<<endl;
			cout<<"Fair : "<<(1.5*distance)<<endl;
			cout<<"EXPLANATION : ";
			cout<<distance<<" x "<<1.5<<" = "<<(1.5 * distance)<<endl;
		}
};
int main()
{
	passanger ob;
	ticket ob1(ob);
}
