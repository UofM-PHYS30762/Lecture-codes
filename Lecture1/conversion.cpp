// L1/conversion.cpp
// Conversion from J to erg (PHYS30762)
// Source: Prof. Niels Walet's code repository
// Last updated, Charanjit Kaur, 28/01/24
#include<iostream>
int main()
{ 
  const double erg_to_joule{1.e-7}; // define conversion factor between J and erg
  bool convert_erg_to_joule;
  double energy;
  std::cout<<"Please enter 1 to convert from erg to J or 0 for J to erg:"<<std::endl; 
  std::cin>>convert_erg_to_joule;
  if(convert_erg_to_joule)
  {
    std::cout<<"You opted to convert from erg to J"<<std::endl; 
    std::cout<<"Please enter the energy in erg:"; 
    std::cin>>energy; 
    std::cout<<"The energy in J is "<<energy*erg_to_joule<<std::endl; 
  }
  else
  {
    std::cout<<"You opted to convert from J to erg"<<std::endl; 
    std::cout<<"Please enter the energy in J:"; 
    std::cin>>energy; 
    std::cout<<"The energy in erg is "<<energy/erg_to_joule<<std::endl; 
  } 
  return 0; 
} 
