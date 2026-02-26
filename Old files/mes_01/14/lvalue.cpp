//L-value references 
#include <iostream> 

int main(){

    //all of theese are l-value expressions. however some of them are modifiable.
    int x{};
    const int y{};

    int e{x}; //can be modifiable and it's a left value expression. 
    const int z{y}; //can't be modificable, due to const or constexpr. 

    return 0; 
}