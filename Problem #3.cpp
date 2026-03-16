#include <iostream>

using namespace std;

enum enNumberType { Odd = 1, Even = 2 };

int ReadNumber() {
    int Num;
    cout << "please enter a number: " << endl;
    cin >> Num;
    return Num;
}

enNumberType CheckNumberType(int Num) {
    if (Num % 2 == 0) {
        return enNumberType::Even;
    } 
    else {
        return enNumberType::Odd;
    }
}

void printNumberType(enNumberType NumberType) {
    if (NumberType == enNumberType::Even)
        cout << "\n Number is Even. \n";
    else
        cout << "\n Number is Odd. \n";
}

int main() {
    printNumberType(CheckNumberType(ReadNumber()));
    return 0;
}