#include<iostream>
using namespace std;
class Kilogram
{
	int kg, g;
	public:
		Kilogram(){
			kg = 0;
			g = 0;
		}
		Kilogram(int kg1, int g1)
		{
			kg = kg1;
			g = g1;
		}
		void display_kg()
		{
		cout<<kg<<" KG "<<g<<" G "<<endl;
		}
};
class Gram
{
	int kg, g;
	public:
		Gram(int g1)
		{
			g = g1;
		}
		operator Kilogram ()
		{
			kg = g / 1000;
			g = g % 1000;
			return Kilogram(kg, g);
		}
		void display()
		{
			cout<<"Gram = "<<g<<endl;
		}
};

main()
{
	Gram G(1200);
	Kilogram K;
	cout<<"Total Gram: "<<endl;
	G.display();
	K = G;
	cout<<"Value after conversion: "<<endl;
	K.display_kg();
	return 0;
}
