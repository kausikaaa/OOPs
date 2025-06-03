#include <iostream>
using namespace std;
class Car{
    public:
    string brand;
    int speed;

    void display(){
        cout<<brand<<"goes"<<speed<<"km/hr"<<endl;
    }
}

int main(){
    Car myCar;
    myCar.brand="Suzuki";
    myCar.speed=200;
    display();
}