#include <iostream>
#include <string>

using namespace std;
void ReadNumber(float& num1 ,float& num2){

    cout << "Please Enter Num 1 : " << endl ;
    cin >> num1;

    cout << "Please Enter Num 2 : " << endl ;
    cin >> num2;



}

float  CalculateRectangleArea(float A, float B)
{
    return A * B;
}
void printresult(float Area){

 cout << "\nRectangle Area = " << Area << endl;

}

int main()
{
    float num1 , num2 ;
    ReadNumber(num1,num2);
     printresult(CalculateRectangleArea(num1, num2));

    return 0;
}
