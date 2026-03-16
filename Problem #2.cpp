#include <iostream>

using namespace std;
string ReadName(){

cout << "please enter your name: "<< endl;

  string Name;
    getline(cin, Name);
    return Name;

}
void printName(string Name){

cout << "\n Your Name Is : " << Name << endl;

}



int main() {


   printName(ReadName());

    return 0;
}
