#include<iostream>
using namespace std;
template<class ty>
class A
{
	public:
	ty a[3];
	ty max=3;
        ty top=0;
	public:
	void push()
	{
		try
		{
			if(top==max)
			{
				throw "stack is full";
			}
			else
			{
				ty ele;
				cout<<"enter the value for ele : ";
					cin>>ele;
				a[top++]=ele;
			}
		}
		catch (const char *s)
		{
			cout<<"s="<<s<<endl;
		}
		
	}
	void pop()
	{
		try
		{
			if(top==0)
			{
				throw "stack is underflow";
			}
			else
			{
				a[--top]=0;
			}
		}
		catch (const char *s)
		{
			cout<<"s="<<s<<endl;
		}
		
	}
	void display()
	{
		ty i;
		for(i=0;i<max;i++)
		{
			cout<<"a["<<i<<"]="<<a[i]<<endl;
		}
	}
};
int main()
{
	A <int> ob;
	int op;
	while(1)
	{
		cout<<"1) push , 2) pop , 3) display  , 4) exit "<<endl;
		cout<<"enter the option : ";
		cin>>op;

		switch(op)
		{
			case 1:
				ob.push();
				break;
			case 2:
				ob.pop();
				break;
			case 3: ob.display();
				break;
			case 4: return 0;
				break;
			default:cout<<"invalid option"<<endl;
				break;
		}
	}
}
