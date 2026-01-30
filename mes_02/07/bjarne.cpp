#include<iostream>

void stack2();
void stack3();
void stack4();
void stack5();
void stack6();

void stack2(){
    std::cout << "Hola Stack Frame numero 2\n";
    stack3();
}
void stack3(){
    std::cout << "Hola Stack Frame numero 3\n";
    stack4();
}
void stack4(){
    std::cout << "Hola Stack Frame numero 4\n";
    stack5();
}
void stack5(){
    std::cout << "Hola Stack Frame Numero 5\n";
    stack6();
}
void stack6(){
    std::cout << "Hola Stack Frame numero 6\n"; 
}

int main(){ // 1 stack frame 
    std::cout << "Hola Stack Frame Numero 1\n";
    stack2();
    return 0; 
}