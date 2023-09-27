#include <iostream>
using namespace std;
class Time
{
	int hr,min;
	public:
		void get_data()
		{
			cout<<"Enter hour: ";
			cin>>hr;
			cout<<"Enter minute: ";
			cin>>min;
		}
		void display()
		{
			cout<<hr<<" Hour and "<<min<<" Minutes"<<endl;	
		}
		Time add(Time T1, Time T2)
		{
			Time temp;
			temp.min = T1.min + T2.min;
			temp.hr = temp.min/60;
			temp.min = temp.min % 60;
			temp.hr = T1.hr + T2.hr + temp.hr;
			return temp;
		}
};
int main()
{
	Time t1,t2,t3;
	cout<<"First Object:"<<endl;
	t1.get_data();
	cout<<"Second Object:"<<endl;
	t2.get_data();
	cout<<"Sum = "<<endl;
	t3 = t3.add(t1,t2);
	t3.display();
	return 0;
}
