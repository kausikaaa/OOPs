#include<iostream>
using namespace std;

class Car{
    public:
      string brand;
      int speed;
    
    void display(){
        cout<<"The "<<brand<<" runs at a speed"<<speed<<"km/hr"<<endl;
    }
};

int main(){
    Car myc;
    myc.brand="BMW";
    myc.speed=200;
    myc.display();
}