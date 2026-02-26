#include<iostream> 
#include<vector> 


class Vector{
    public:
    void setValor(int x){
        vector.push_back(x);
    }
    void pullValor(int i){
        std::cout << vector[i];
    }
    private:
    std::vector<int> vector{};
};


int main(){
    int x{};
    Vector objeto{};
    for(int i{0}; i < 3; ++i){
        std::cout << "Ingresa el valor numero " << i+1 << ": ";
        std::cin >> x;
        objeto.setValor(x);
    }
    std::cout << "\n(";
    for(int i{0}; i < 3; ++i){
        objeto.pullValor(i);
        if(i != 2){
            std::cout << ", "; 
        }
    }
    std::cout << ")\n";

    
    return 0; 
}


