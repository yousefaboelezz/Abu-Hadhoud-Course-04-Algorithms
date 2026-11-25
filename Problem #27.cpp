#include <iostream>
#include <string>

using namespace std;

int ReadNumber() {
    int Number;
    cout << "Please Enter Number : ";
    cin >> Number;
    return Number;
}

void PrintRangeFromNto1_UsingWhile(int N) {
    int counter = N;
    cout << "\nRange printed using While Statement:\n";
    while (counter >= 1) {
        cout << counter << endl;
        counter--;
    }
}

void PrintRangeFromNto1_UsingDoWhile(int N) {
    int Counter = N;
    cout << "\nRange printed using Do..While Statement:\n";
    do {
        cout << Counter << endl;
        Counter--;
    } while (Counter >= 1);
}

void PrintRangeFromNto1_UsingFor(int N) {
    cout << "\nRange printed using For Statement:\n";

    for (int i = N; i >= 1; i--) {
        cout << i << endl;
    }
}

int main() {
    int N = ReadNumber();

    PrintRangeFromNto1_UsingWhile(N);
    PrintRangeFromNto1_UsingDoWhile(N);
    PrintRangeFromNto1_UsingFor(N);

    return 0;
}
