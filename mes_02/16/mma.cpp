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
    std::cout << "INGRESA ALGO: "; 
    std::cin >>ch;
    if(isdigit(ch) || ch == '.'){
        std::cin.putback(ch);
        double valor = 0; 
        std::cin >> valor;
        return Token('n', valor);
    }
    else{
        return Token(ch);
    }
}


int main(){
    Token get = getToken();
    std::cout << "MI NUMERO ES DE TIPO: " << get.tipo << " y " << "ES DE VALOR: " << get.valor; 
    return 0; 
}