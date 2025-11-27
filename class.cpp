#include <iostream>
#include <string>

using namespace std;

class Car {
    public:
    string brand;
    string model;
    string engine;
    int year;

    void displayInfo(string b, string m, string e, int y) {
        brand = b;
        model = m;
        engine = e;
        year = y;

        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine: " << engine << endl;w
        cout << "Year: " << year << endl;
    }
};

int main() {
    //display info menggunakan metode
    Car car1;
    car1.displayInfo("Toyota", "Camry", "V6", 2020);
    
    //display info menggunakan objek
    Car car2;
    car2.brand = "Honda";
    car2.model = "Civic";
    car2.engine = "V4";
    car2.year = 2022;
    cout << "Brand: " << car2.brand << endl;
    cout << "Model: " << car2.model << endl;
    cout << "Engine: " << car2.engine << endl;
    cout << "Year: " << car2.year << endl;
}