#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(4);

    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;

    
    
}
