#include <iostream> 

int main(){

    int x{5};
    int& referencia{x}; //valid - non-const l-value reference bound to a modifiable l-value. 

    const int y{5};
    int& invalidRef{y}; //not valid - non-const l-value reference bound to a non modifiable l-value. 
    int& invalidRef2{0}; //not valid - non-const l-value reference can't bound to an r-value.

    //you can't BOUND a non-const l-value to const (not modifiable) lvalue os rvalues, you would be able to change it via the reference, thats why. 
    

    return 0; 
}