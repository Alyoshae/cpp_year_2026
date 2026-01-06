#include <iostream> 

void returnNothing(){ //void -> no return 
}
int returnFive(){ //int -> must return 
    return 5;
}

int main(){

    returnNothing(); //will compile, nothing will happen.
    returnFive(); //will compile, returns 5 but does nothing with it. 

    std::cout << returnFive(); //will compile, returns 5 and it's printed out. 
    std::cout << returnNothing(); //will NOT compile, std::cout needs a value, since it's void, there's no value at the right side of it. 

    return 0; 
}