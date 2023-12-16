#include<iostream>

using namespace std;

class Room{

    private:
    int lenght;
    int breadht;

    public :

friend istream &operator >>(istream &input,Room &r);


};
/**************************function ***************************/
istream &operator >>(istream &input,Room &r){

cout<<"Enter Lenght :";
input>>r.lenght;
cout<<"Enter Breadht :";
input>>r.breadht;

return input;
}

int main(){

    Room r1;
    cin>>r1;/****************operator(cin,r1)*************/
}