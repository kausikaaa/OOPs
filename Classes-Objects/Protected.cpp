#include<iostream>
using namespace std;

class Car{
protected:
    string brand;
public:
    void setBrand(string b){
        brand = b;
    }
};
class MyCar : public Car{
  public:
  void display(){
      cout<<"The car is "<<brand;
  }
};

int main(){
   MyCar c;
   c.setBrand("Audi");
   c.display();
   
}