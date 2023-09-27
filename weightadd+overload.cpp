#include <iostream>
using namespace std;
class Weight
{
	int kg, g;
	public:
		Weight(int kg, int g)
		{
			this->kg = kg;
			this->g = g;
		}
		Weight operator + (Weight temp)
		{
			int total_kg = kg + temp.kg;
			int total_g = g + temp.g;
			if(total_g > 1000)
			{
				total_kg = total_kg + total_g/1000;
				total_g = total_g%1000;
			}
			return Weight(total_kg, total_g);
		}
		void display()
		{
			cout<<"Weight = "<<kg<<" KG "<<g<<" G "<<endl;
		}
};
main()
{
	Weight w1(6, 750), w2(3, 840);
	Weight w3 = w1 + w2;
	w1.display();
	w2.display();
	cout<<"Total Weight: "<<endl;
	w3.display();
	return 0;
}
