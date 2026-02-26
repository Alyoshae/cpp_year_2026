#include<iostream>
#include<vector>

int main(){
int x{};
std::cout << "ingrese cuantos parciales tuvo esta materia: ";
std::cin >>x;

std::vector<int>calificaciones(x);
for(int i{0}; i < x; ++i){
    std::cout << i+1 << " Parcial: ";
    std::cin >> calificaciones[i];
    std::cout << '\n';
}

for(int i:calificaciones){
    std::cout << i << '\n';
}
}