#include<vector>

class stack{
    private:
    std::vector<int>v1;
    
    /************************** crate top function this function is private  *********************/
    int top(void);

    public:
/****************************** public function are in here **************************************/
    void push(int num);

    int pop(void);

};