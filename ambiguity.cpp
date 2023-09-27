/*Ambiguity refers to a situation where the compiler is unable to determine 
which version of a function or operator to use because there are multiple 
valid options available, and none of them is more specific or appropriate 
than the others.*/
#include <iostream>
using namespace std;
class Theory
{
	protected:
		int tmarks;
	public: 
		Theory()
		{
			tmarks = 60;
		}
		void display()
		{
			cout<<"Theory Marks = "<<tmarks<<endl;
		}
};
class Practical
{
	protected:
		int pmarks;
	public:
		Practical()
		{
			pmarks = 40;
		}
		void display()
		{
			cout<<"Practical Marks = "<<pmarks<<endl;
		}
};
class Total : public Theory, public Practical
{
	int total;
	public:
		void get_total()
		{
			total = tmarks + pmarks;
		}
		void display()
		{
			cout<<"Total Marks = "<<total<<endl;
		}
};
main()
{
	Total T;
	T.Theory::display();
	T.Practical::display();
	T.get_total();
	T.display();
	return 0;
}
