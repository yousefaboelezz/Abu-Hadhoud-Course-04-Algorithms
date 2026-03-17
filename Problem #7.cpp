#include <iostream>
#include <string>

using namespace std;

int ReadNumber()
{
    int Num;
    cout << "Please enter a number? " << endl;
    cin >> Num;
    return Num;
}

float CalculatHalfNumber(int Num)
{
    return (float)Num / 2;
}

void printresult(int Num)
{
    float half = CalculatHalfNumber(Num); 
    
    cout << endl << "Half of " << Num << " is " << half << endl;
}

int main() {

    printresult(ReadNumber());

    return 0;
}