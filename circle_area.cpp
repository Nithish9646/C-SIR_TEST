#include<iostream>
using namespace std;
class circle
{
	private:
		float radius;
	public:
	void set()
	{
		int num;
		cout<<"enter thr radius"<<endl;
		cout<<"radius (1<=radius<=1000)"<<endl;
		cin>>num;
		if((num>=1)&&(num<=1000))
			radius=num;
		else
			exit(1);
	}
		friend class circle_math;
			
};
class circle_math
{
	public:
	void area(circle &ob4);
};
void circle_math::area(circle &ob4)
{
	float k;
	k=3.14*(ob4.radius*ob4.radius);
	cout<<"Area="<<k<<endl;
}
int main()
{
	circle ob;
	ob.set();
	circle_math ob2;
	ob2.area(ob);
}
