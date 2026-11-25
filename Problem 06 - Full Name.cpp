#include <iostream>
#include <string>

using namespace std;

struct stInfo {
    string FirstName;
    string LastName;
};

stInfo ReadInfo() {
    stInfo Info;
    cout << "Please enter your First Name: " << endl;
    cin >> Info.FirstName;

    cout << "Please enter your Last Name: " << endl;
    cin >> Info.LastName;

    return Info;
}

string GetFullName(stInfo Info) {

    string FullName = Info.FirstName + " " + Info.LastName;
    return FullName;
}

void printFullName(string FullName) {
    cout << "\n Your Full Name is: " << FullName << endl;
}

int main() {

    printFullName(GetFullName(ReadInfo()));

    return 0;
}
