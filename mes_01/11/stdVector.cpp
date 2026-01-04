#include<iostream>
#include<vector> //NEW BEST FRIEND 

int main(){

    //valor inicializado (default construct = {})
    std::vector<int> vacio{}; //0 int elements in it right now. 

    std::vector<int> numerosPrimos{2, 3, 5, 7}; //contiene 4 elementos "int" el vector.
    std::vector vocales{'a', 'e', 'i', 'o', 'u'}; //Usa CTAD cpp17 para averiguar el tipo de vector => char

    

    return 0;
}