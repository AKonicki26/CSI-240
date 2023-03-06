#include <iostream>
using namespace std;



class Car {

public:

    Car(string brand, int year) {
        cout << "2 param const" << endl;

        this->brand = brand;

        this->year = new int;
        *(this->year) = year;

        this->vin = staticVin++;
    }

    Car(const Car & car) {
        this->brand = car.brand;
        *(this->year) = *car.year;
        this->vin = car.vin;
    }

    Car() {
        
        cout << "Default Constructor" << endl;
    }

    ~Car() {
        delete year;
    }

    void printInfo() const {

        cout << brand << "\t" << *year << "\t" << vin << endl;

    }

private:
    static int staticVin;
    string brand;
    int* year = new int;
    int vin;
};

int Car::staticVin = 1;

int main() {

    Car volvo("Volvo", 2022);

    const Car myCar = volvo;

    Car* corolla = new Car("Corolla", 2023);

    volvo.printInfo();
    corolla->printInfo();
    myCar.printInfo();

    delete corolla;
    
}


/*
int main()
{
    string* name;
    name = new string;
    *name = "Murat";

    string* namePtr2;
    namePtr2 = name;

    cout << *name;

    delete name;
    name = nullptr;


    int age = 50;
    int* ptr = &age;
}

*/