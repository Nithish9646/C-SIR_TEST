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
			cout<<"enter the rupees : ";
			cin>>rupees;
			rupees=rupees*100;
			cout<<"enter the paisa : ";
			cin>>paisa;
		}
		void print()
		{
			cout<<"rupees : "<<rupees/100<<" * "<<100<<" = "<<rupees<<endl;
			cout<<"paisa : "<<paisa<<endl;
		}
		money operator+()
		{
		 money temp;
		 temp.rupees=rupees+paisa;
		 return temp;
		}
		bool operator <(money & ob4)
		{
			 bool a;
			a=rupees<ob4.rupees;
			return a;
		}
		bool operator >(money & ob4)
		{
			 bool a;
			a=rupees>ob4.rupees;
			return a;
		}
		bool operator <=(money & ob4)
		{
			 bool a;
			a=rupees<=ob4.rupees;
			return a;
		}
		bool operator >=(money & ob4)
		{
			 bool a;
			a=rupees>=ob4.rupees;
			return a;
		}
		bool operator ==(money & ob4)
		{
			 bool a;
			a=rupees==ob4.rupees;
			return a;
		}
		bool operator !=(money & ob4)
		{
			 bool a;
			a=rupees!=ob4.rupees;
			return a;
		}
};
int main()
{
	money ob1,ob2,m1,m2;
		bool m3;
	cout<<"set data for ob1"<<endl;
	ob1.set();
	cout<<"set data for ob2"<<endl;
	ob2.set();
	cout<<endl;
	cout<<"displaying ob1"<<endl;
	ob1.print();
	cout<<"displaying ob2"<<endl;
	ob2.print();
	m1=+ob1;
	m2=+ob2;
	int num;
	cout<<endl;
	cout<<"1.<\t2.>\t3.<=\t4.>=\t5.==\t6.!="<<endl;
	cout<<"enter the option : ";
       cin>>num;
       switch(num)
       {
	       case 1: m3=m1<m2;
		       break;
	       case 2: m3=m1>m2;
		       break;
	       case 3: m3=m1<=m2;
		       break;
	       case 4: m3=m1>=m2;
		       break;
	       case 5: m3=m1==m2;
		       break;
	       case 6: m3=m1!=m2;
		       break;
	      default :cout<<"invalid"<<endl;
		       return 0;
       }
        if(m3==0)
		cout<<"\tFALSE"<<endl;
	else if(m3==1)
		cout<<"\tTRUE"<<endl;


}
