#include<iostream>
#include<string>

class Distance{

private:

int feet;
int inches;

public:
friend std::istream &operator >>(std::istream &input,Distance &d);
friend std::ostream &operator <<(std::ostream &out,Distance &d);


};