#include <iostream> 

int main(){

    int x{7};
    int& y{x};
    std::cout << x << y << '\n';
    
    x = 8; 
    std::cout << x << y << '\n';
    
    y = 9; // int& y == x -> if y changes then x changes too. 
    std::cout << x << y << '\n';

    return 0; 
}

//im thinking to much, im feeling to much, thus is hard to mantain focus on myself, one day ill forget the feeling of beeing a terrible person. 
