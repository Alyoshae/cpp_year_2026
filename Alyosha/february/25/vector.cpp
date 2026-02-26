#include <iostream> 
#include <vector> 

class Vector{
        int sz; 
        double* elem;
    public: 
        Vector(int s);
        int size() const {return sz;}

}:

int main(){

   std::vector<double> age(4);
    age[0] = 0.33;
    age[1] = 22.0;
    age[2] = 23.2; 
    age[3] = 30.1; 

    return 0; 
}