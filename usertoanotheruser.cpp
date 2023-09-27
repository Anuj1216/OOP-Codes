#include<iostream>
using namespace std;
class Gram
{
	int g;
	public:
		Gram()
		{
			g = 0;
		}
		Gram(int g1)
		{
			g = g1;
		}
		int getter()
		{
			return g;	
		}
		void display()
		{
			cout<<"Gram = "<<g<<endl;
		}
};
class Kilogram
{
	int kg, g;
	public:
		Kilogram()
		{
			kg = 0;
		}
		Kilogram(int kg1)
		{
			kg = kg1;
		}
		Kilogram(Gram G)
		{
			int kg;
			g = G.getter();
			g = g % 1000;
			kg = g / 1000;
		}
		void display_kg()
		{
		cout<<kg<<" KG "<<g<<" G "<<endl;
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
