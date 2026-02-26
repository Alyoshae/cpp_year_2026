#include<iostream>
#include<fstream>
#include<string>

int main(){
    std::cout << "please enter input file name: ";
    std::string iname; 
    std::cin >> iname; 
    std::ifstream ist {iname};
    if(!ist)
        std::cout << "\nError! No input file " << iname << '.';

    return 0;
}