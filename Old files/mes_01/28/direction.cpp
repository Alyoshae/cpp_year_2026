#include<iostream> 

void print(int* x){
    std::cout << x << '\n';
    std::cout << *x;

}

int main(){
    int x{0};
    std::cout << &x << '\n';
    print(&x);
    return 0; 
}

