#include <iostream>
using namespace std;
class Time
{
	int hr,min;
	public:
		void get_data()
		{
			cout<<"Enter the hr: ";
			cin>>hr;
			cout<<"Enter the min: ";
			cin>>min;
		}
		void display()
		{
			cout<<"HR = "<<hr<<endl;
			cout<<"Min = "<<min;
		}
		Time sum(Time t1, Time t2)
		{
			Time temp;
			temp.hr = t1.hr + t2.hr;
			temp.min = t1.min + t2.min;
			if(temp.min>= 60)
			{
				temp.hr = temp.hr + temp.min/60;
				temp.min = temp.min % 60;
			}
			return temp;
		}
};
main()
{
	Time t1,t2,t3;
	t1.get_data();
	t1.display();
	t2.get_data();
	t2.display();
	t3.sum(t1,t2);
	t3.display();
}
