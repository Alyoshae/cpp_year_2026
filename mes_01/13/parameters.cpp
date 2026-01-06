#include <iostream> 

void vacio(){

}

int Parameters(int x){// <- Parameters are the ones inside the parentesis. 
    return x; // Returns that same value. 
}

int TwoParameters(int x, int y){ // <- Two parameters inside.
    return x + y; // expresion, it returns the value from the expresion. 
}

int main(){

    //note - this two functions will do nothing since they return a value but nothing is done with them - 
    Parameters(5);       // <- the 5 inside the parentesis is called an argument. 
    TwoParameters(5,10); // <- two arguments. 

    //note - this two functions will print the value returned by the expresion given on the function. 
    std::cout << Parameters(5);
    std::cout << TwoParameters(5,10); 

    //does nothing
    vacio();

    //compile error! no returned value so std::cout turns red 
    std::cout << vacio();

    return 0;
}