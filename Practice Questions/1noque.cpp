/*Create a class Shape with data members length and width. Derive two classes Rectangle and 
Square from Shape class with member function area() to calculate the area of Rectangle and Square. 
Crete another class Cube that inherits from square includeing member function volume() to calculate 
volume of the Cube.
WAP to implement this.
*/
#include<iostream>
using namespace std;
class Shape{
    protected: //protected banako kina vane data tala ni use garnu xa 
	    int l,w;
        float area, vol;
	public:
		void get_data_rectangle(){ //rectangle ko data lina kinaki rectangle ma length ra width chahinxa
		cout<<"Enter length and width: "; 
	    cin>>l>>w;
	}
        void get_data_square(){ //square ko data line cause square ma length matrai chahinxa
		cout<<"Enter length: "; 
	    cin>>l;
	}
	void display_data_rectangle(){ //rectangle ko lagi data display
		cout<<"Length = "<<l<<endl;
		cout<<"Width = "<<w<<endl;
	}
    void display_data_square(){ //square ko lagi data display 
		cout<<"Length = "<<l<<endl;
	}	
    void display_area() //area display garne 
    {
        cout<<"Area = "<<area<<endl;
    }	
    void display_volume() //volume display garne 
    {
        cout<<"Volume = "<<vol<<endl;
    }
};
class Rectangle:public Shape{ //aba yaha get_area le rectangle ko area nikalne
	public:
	void get_area(){
        area = l * w; 
	}
};
class Square :public Shape{ //yaha square ko area nikalne
		public:
			void get_area()
            {
                area = l * l;
	        }
};
class Cube: public Square{ //yaha cube ko volume nikalne
    public:
        void get_volume()
        {
            vol = area * l;
        }
};
int main(){
	Rectangle r; //rectangle ko object
    r.get_data_rectangle(); //yo rectangle ko lagi length rra width line
    r.Rectangle::get_area(); //rectangle ko area calculate
    cout<<"For Rectangle: "<<endl;
    // r.display_data_rectangle();
    r.display_area(); //rectangle ko area display
    Cube c;
    c.get_data_square(); //square ko lagi length line
    c.Square::get_area(); //square ko area calculate garne
    cout<<"for Square: "<<endl;
    // c.display_data_square();
    c.display_area(); //square ko area display
    cout<<"For Cube: "<<endl;
    c.get_volume(); //cube ko volume calculate
    c.display_volume(); //cube ko volume display
	return 0;
}