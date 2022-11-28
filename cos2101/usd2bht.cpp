#include <iostream>
using namespace std;

int main(){
 double  rate = 35;
 double usd, baht;

 cout<< "how much USD do you want to exchange: ";
  cin>>usd;
  cout<< "how much BAHT do you want to exchange: ";
  cin>>baht;
  

  usd =rate * usd;
  baht = baht / rate;

  std::cout << "Your USD in thai Baht is "<<usd<<std::endl;
  std::cout << "Your BAHT in USD is  "<<baht<<std::endl;

}
