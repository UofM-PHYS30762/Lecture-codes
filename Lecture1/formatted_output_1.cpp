// L1/formatted_output_1.cpp
// Speed of light; unformatted (PHYS30762)
// Source: Prof. Niels Walet's code repository
// Last updated, Charanjit Kaur, 28/01/24
#include<iostream>
int main() 
{ 
  const double speed_of_light_estimate{3.0195949};
  const double speed_of_light_error{0.03943};
  std::cout<<"Our best estimate of c = ("<< speed_of_light_estimate<<"+/-"
	   <<speed_of_light_error<<")x10^8 m/s"<<std::endl;
  return 0; 
} 

