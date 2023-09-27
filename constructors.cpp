#include <iostream>
using namespace std;
class Car
{
	int model,myear;
	float mileage;
	public:
		Car()
		{
			model = 126;
			myear = 2016;
			mileage = 55;
		}
		Car(int model, int myear, float mileage)
		{
			(*this).model = model;
			(*this).myear = myear;
			(*this).mileage = mileage;
		}
		Car (Car &t)
		{
			model = t.model;
			myear = t.myear;
			mileage = t.mileage;
		}
		void display()
		{
			cout<<"Model Number = "<<model<<endl;
			cout<<"Manufacture Year = "<<myear<<endl;
			cout<<"Mileage = "<<mileage<<endl;
		}
		~Car(){}
};
main()
{
	Car c1,c2(234, 2017, 60),c3;
	c3 = c2;
	c1.display();
	c2.display();
	c3.display();
	return 0;
	
	
}
