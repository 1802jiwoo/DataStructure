#include<iostream>
using namespace std;

struct Car {
    char carName[20];
    int carGas;
    int carSpeed;
};

void ShowCar(Car myCar) {
    cout<<"������ : "<<myCar.carName<<endl;
    cout<<"���ᷮ : "<<myCar.carGas<<endl;
    cout<<"�ӵ� : "<<myCar.carSpeed<<endl;
}

int main() {
    Car kia = {"Park", 10, 90};
    ShowCar(kia);
}