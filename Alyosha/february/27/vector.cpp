#include<iostream>  

class Vector{ //vector of doubles 
    public: 
        Vector(int s); //constructor: Allocate elements on the heap and initialize them 
        Vector(){delete[] elem;} //destructor: Return elements to the heap 
    private: 
        int sz;         // the size 
        double* elem;  //pointer to the element
    };

    Vector::Vector(int s){      //constructor 
            :sz{s},             // initialize sz 
            elem{new double[s]} // initialize elem to elements on the heap 
        {
            for(int i=0; i<s; ++i)
                elem[i] = 0;
        }
    }   

    Vector::Vector(){     //destructor
        delete[] elem;    //returns elements to the heap 
    }




int main(){

    double* p = new double[4];

    return 0; 
}