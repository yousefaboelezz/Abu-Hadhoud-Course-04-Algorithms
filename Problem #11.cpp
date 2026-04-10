#include <iostream>

using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

void ReadNumbers(int& mark1, int& mark2, int& mark3) {
    cout << "Enter mark 1 : ";
    cin >> mark1;

    cout << "Enter mark 2 : ";
    cin >> mark2;

    cout << "Enter mark 3 : ";
    cin >> mark3;
}

int SumOf3Mark(int mark1, int mark2, int mark3) {
    return mark1 + mark2 + mark3;
}

float CalculateAverage(int mark1, int mark2, int mark3) {
    
    return (float)SumOf3Mark(mark1, mark2, mark3) / 3;
}

enPassFail CheckAverage(float Average) {
    if (Average >= 50)
        return enPassFail::Pass; 
    else
        return enPassFail::Fail;
}

void PrintResults(float Average) {
    cout << "\n Your Average is: " << Average << endl;

    if (CheckAverage(Average) == enPassFail::Pass)
        cout << "You Passed" << endl;
    else
        cout << "You Failed" << endl;
}

int main() {
    int Mark1, Mark2, Mark3;

    ReadNumbers(Mark1, Mark2, Mark3);

    PrintResults(CalculateAverage(Mark1, Mark2, Mark3));

    return 0;
}