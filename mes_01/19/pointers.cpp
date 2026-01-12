#include <iostream> 

int main(){
    int x{5};
    //best way to initialice a pointer 
    int* ptr{&x}; //initialized with the adress of a variable x. 
    int* ptr2{}; //null pointer (ok)

    return 0; 
}