#include<iostream> 

void size(char ch, int i, int* p, bool t, double d){
    std::cout << "The size of a char is " << sizeof(char) << ' ' << sizeof(ch) << '\n';
    std::cout << "The size of an int is " << sizeof(int) << ' ' << sizeof(i) << '\n';
    std::cout << "The size of a *int is " << sizeof(int*) << ' ' << sizeof(p) << '\n';
    std::cout << "The size of a bool is " << sizeof(bool) << ' ' << sizeof(t) << '\n'; 
    std::cout << "The size of a double is " << sizeof(double) << ' ' << sizeof(d) << '\n'; 
}



int main(){

    int x = 17; 
    int* pi = &x; 

    double e = 2.71828; 
    double* pd = &e;
    
    char ch = 'a'; 
    int i = 10; 
    bool t = true; 
    double d = 20.10; 

    std::cout << "=========================================================\n"; 
    std::cout << "pi == " << pi << ": Contenido de pi == " << *pi << '\n';
    std::cout << "pd == " << pd << ": Contenido de pd == " << *pd << '\n'; 
    std::cout << "=========================================================\n"; 
    std::cout << std::endl;
  
    std::cout << "=========================================================\n"; 
    size(ch, i, pi, t, d); 
    std::cout << "=========================================================\n"; 


    return 0; 
}