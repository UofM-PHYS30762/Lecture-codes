// L1/formatted_output_2.cpp
// Speed of light; formatted (PHYS30762)
// Source: Prof. Niels Walet's code repository
// Last updated, Charanjit Kaur, 28/01/24
#include<iostream>
#include<iomanip> 
int main() 
{ 
  const double speed_of_light_estimate{3.0195949};
  const double speed_of_light_error{0.03943};
  std::cout<<"Our best estimate of c = ("
	   <<std::setprecision(3)<<speed_of_light_estimate
	   <<"+/-"
	   <<std::setprecision(1)<<speed_of_light_error
	   <<")x10^8 m/s"<<std::endl;
  return 0; 
}
