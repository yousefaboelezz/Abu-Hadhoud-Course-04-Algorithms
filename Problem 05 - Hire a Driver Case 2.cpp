#include <iostream>

using namespace std;

struct stInfo
{

    int Age;
    bool HasDrivingLicense;
    bool Hascommendation;
};
stInfo ReadInfo()
{
    stInfo Info;
  cout <<"please enter your Age: " << endl;
  cin >> Info.Age;


  cout << "do you have a driver's license ? (1 for Yes, 0 for No)"<<endl;
  cin >> Info.HasDrivingLicense;


  cout << "Do you have recommendation?" << endl ;
  cin >> Info.Hascommendation;



    return Info;
}

bool Accepted (stInfo Info){
    if(Info.Hascommendation){

        return true;
    }
    else{


  return(Info.Age > 18 && Info.HasDrivingLicense);
    }

}
void printResult(stInfo Info){

  if (Accepted(Info)){
    cout << "\n Hired" << endl;

  }
  else {
    cout << "\n Rejected" << endl;
  }

}







int main() {

   printResult(ReadInfo());

    return 0;
}
