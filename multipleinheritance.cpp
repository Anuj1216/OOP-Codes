#include <iostream>
using namespace std;
class Academic
{
	protected:
	 	float marks;
	public:
		void get_academic()
		{
			cout<<"Enter Academic marks: ";
			cin>>marks;
		}
		void display_academic()
		{
			cout<<"Academic Marks = "<<marks<<endl;
		}
};
class Extra
{
	protected:
		float punctuality, discipline;
	public:
		void get_extra()
		{
			cout<<"Enter Punctuality and Discipline marks: ";
			cin>>punctuality>>discipline;
		}
		void display_extra()
		{
			cout<<"Punctuality Marks = "<<punctuality<<endl;
			cout<<"Discipline Marks = "<<discipline<<endl;
		}
};
class Result : public Academic, public Extra
{
	float total;
	public:
		void get_total()
		{
			total = marks + punctuality + discipline;
		}
		void display_result()
		{
			cout<<"Total Marks = "<<total<<endl;
		}
};
main()
{
	Result R;
	R.get_academic();
	R.get_extra();
	R.display_academic();
	R.display_extra();
	R.get_total();
	R.display_result();
	return 0;
}
