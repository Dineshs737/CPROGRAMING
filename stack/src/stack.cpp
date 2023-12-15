#include"stack.h"


    int stack::top(void){
        return v1[v1.size()-1];
    }

    void stack::push(int num){
        v1.push_back(num);
    }

    int stack::pop(void){
        int t =top();
        v1.pop_back();
        return t;
    }