#include <iostream>
#include <cmath>

void drawCircle();
void drawTriangle();
void drawIntersect();
void drawBase();

int main(){
  drawCircle();
  drawTriangle();
  drawIntersect();
  drawBase();

  return 0;
}
void drawCircle(){
    std::cout <<"  *  "<<std::endl;
    std::cout <<"*    *"<<std::endl;
     std::cout <<"  *  "<<std::endl;
}
void drawTriangle(){
    std::cout<<"  /\\  "<<std::endl;
    std::cout<<" /  \\ "<<std::endl;
    std::cout<<"/    \\ "<<std::endl;
}
void drawIntersect(){
    std::cout<<"--------"<<std::endl;
}
void drawBase(){
     std::cout<<"  /\\  "<<std::endl;
     std::cout<<" /  \\ "<<std::endl;
     std::cout<<"/    \\ "<<std::endl;
}




