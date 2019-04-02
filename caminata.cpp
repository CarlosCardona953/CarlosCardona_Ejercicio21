#include <iostream>
#include <random>
#include <stdlib.h>


int main(){
  int i;
  float x=0;
  float y=0;
  
  srand48(50);

  for (i=0;i<1000;i++){ 
      
    
    std::cout << x << " " << y << std::endl; 
      
    float a = ((drand48()*2))*3.1416;   
      
    float dx = x + sin(a);
      x = dx;
    float dy = y + cos(a);
      y = dy;
    
    
  }
  
  return 0;
}
