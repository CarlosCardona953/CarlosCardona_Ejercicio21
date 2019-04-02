#include <iostream>
#include <random>
#include <stdlib.h>


int main(){
  int i;
  float x=0;
  float y=0;
  
  srand48(26);

  for (i=0;i<1000;i++){ 
      
      
    float dx = x +((drand48()*2)-1)*3.1416;
      x = dx;
    float dy = y +((drand48()*2)-1)*3.1416;
      y = dy;
    std::cout << x << " " << y << std::endl;
    
  }
  
  return 0;
}
