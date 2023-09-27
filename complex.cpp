#include<iostream>
 using namespace std;
 class Complex{
 	int hr,min;
 	public:
               Complex(){
               	hr=0;
               	min=0;
               }
               Complex(int a){
               	hr=95/60;
               	min=95%60;
               }
               void display(){
               	cout<<"hour="<<hr<<endl;
               	cout<<"min="<<min;
               }
 };
 main()
 {
 	Complex c;
 	int duration=95;
 	c=duration;
 	c.display();
 }
