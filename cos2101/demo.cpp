#include <iostream>
#include <string>
using namespace std;

int main(){
  int num, power, result;

  //ask for numbers
  cout << "Put your Number: "; 
  cin >> num;
  //Power camp
  cout << "Power by";
  cin >> power;

  //math
  result = num ^ power;

  //script
  std::cout << num << "power by "<< power << "is " << result <<endl;
  return 0;
}
