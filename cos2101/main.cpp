#include <iostream>
using namespace std;

 int main(){
  int time = 60; //60 min or sec
  float hour, min, mins, sec;

  std::cout << "Hour ";
  std::cin >> hour;
  std::cout << "minutes ";
  std::cin >> mins;
  

  min = time * hour;
  sec = time * mins;
  std::cout << "Result: " << hour <<" is " << min<< " minutes "<< std::endl; 
  std::cout << "Result: " << mins <<" is " << sec << " seconds "<< std::endl; 



  return 0;
}
