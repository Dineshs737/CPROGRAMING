#include<iostream>
#include"Distance.h"

std::istream &operator >>(std::istream &input,Distance &d){
   std:: cout<<"Enter Feet :";
   input>>d.feet;
   std::cout<<"Enter inches :";/*************** inches shoud be 0-11 ****************/
   input>>d.inches;
   return input;

}

