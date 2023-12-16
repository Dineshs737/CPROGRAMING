#include<iostream>

using namespace std;

class Room{

    private:
    int lenght;
    int breadht;

    public :

friend istream &operator >>(istream &input,Room &r);
friend ostream &operator <<(ostream &output,Room &r);



};
/**************************input overloding function ***************************/
istream &operator >>(istream &input,Room &r){

cout<<"Enter Lenght :";
input>>r.lenght;
cout<<"Enter Breadht :";
input>>r.breadht;

return input;
}
/****************************output overloding function ******************************/

ostream &operator <<(ostream &output,Room &r){

    output<<"Lenght is :"<<r.lenght<<"    "<<"Breadht is :"<<r.breadht<<endl;
}
int main(){

    Room r1;
    cin>>r1;/****************operator(cin,r1)*************/
}