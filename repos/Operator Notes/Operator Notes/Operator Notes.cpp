#include <iostream>
#include <fstream>
using namespace std;

class Container {
public:

    void print() { cout << amount << endl; }
    Container()             { amount = 0; }
    Container(int amount)   { this->amount = amount; }

    int add(const Container& another) {
        int sum = this->amount + another.amount;
        return sum;
    }

    int operator+(const Container& another) {
        int sum = this->amount + another.amount;
        return sum;
    }

    int operator-(const Container& another) {
        int difference = this->amount - another.amount;
        return difference;
    }
private:
    int amount;
    friend void globalPrint(ostream& out, const Container& container);
    friend ostream& operator<<(ostream& cout, const Container& container);
    friend istream& operator>>(istream& in, const Container& container);
};

ostream& operator<<(ostream& out, const Container& container) {
    out << container.amount << endl;
    return out;
}

istream& operator>>(istream& in, const Container& container) {
    in >> container.amount;
    return in;
}

int main()
{
    
    Container a;
    Container b(10);

    cout << "Enter an amount: ";
    cin >> a;

    a.print();
    cout << a << endl;
    b.print();
    cout << b << endl;

    ofstream fout("MyOutput.txt");
    fout << b << endl << "Hey there" << endl;
    fout.close();


    cout << a.add(b) << endl;
    cout << a + b << endl;

    cout << a - b << endl;
    cout << b - a << endl;

}


void globalPrint(ostream& out, const Container& container) {
    out << container.amount << endl;
}

