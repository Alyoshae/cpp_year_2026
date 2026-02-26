#include<iostream> 

class Token{
    public: 
        char tipo;
        double valor; 
        Token(char t, double v): tipo{t}, valor{v}{}
        Token(char t): tipo{t}, valor{0.00}{}
};

Token getToken(){
    char ch = 0; 
    std::cout << "Ingresa un numero: ";
    std::cin >> ch; 
    if(isdigit(ch) || ch == '.'){
        std::cin.putback(ch);
        double valor{0.0};
        std::cin >> valor; 
        return Token{'n', valor};
    }
    else{
        return Token{ch};
    }
}


int main(){
    Token mitoken = getToken();
    std::cout << "MI TOKEN ES: " << mitoken.tipo  << " Y " << "ES DE VALOR : " << mitoken.valor; 
    return 0; 
}