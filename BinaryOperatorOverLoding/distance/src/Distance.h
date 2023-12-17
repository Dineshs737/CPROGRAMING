#include<iostream>
#include<string>

class Distance{

private:

int feet;
int inches;

public:
friend std::istream &operator >>(std::istream &input,Distance &d);
friend std::ostream &operator <<(std::ostream &out,Distance &d);

Distance operator +(Distance d){
    Distance temp;

    temp.feet =this->feet+d.feet;
    if(this->inches+d.inches >11){
        temp.feet ++;
        temp.inches=this->inches+d.inches -12;

    }
    else{
        temp.inches =this->inches+d.inches;
    }
    return temp;
}

bool operator >(Distance d){

    if(this->feet >d.feet){

        return true;
    }
}


};