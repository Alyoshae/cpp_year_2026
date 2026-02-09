#include<iostream> 

class Token{
    public: 
        char tipo;
        double valor; 
        Token(char t, double v): tipo{t}, valor{v}{}
        Token(char t): tipo{t}, valor{0.00}{}
};  
class Token_stream{
    public:
       Token get();
       void putback(char t);
    public: 
        bool full = false; 
        Token buffer; 
};

Token Token_stream::get(){
    char ch = 0;
    std::cin >> ch; 
    if(isdigit(ch) || ch == '.'){
        std::cin.putback(ch);
        double valor{0}; 
        std::cin >> valor; 
        return Token{'n', valor};
    }

}

void suma(){
    Token left = ts.get();
    

}

int main(){
    Token_stream ts; 
    while(std::cin){
        Token resultado = suma();
        std::cout << "EL TIPO ES: " << resultado.tipo << " Y " << "EL VALOR ES:" << resultado.valor;
        break;
    }
    return 0; 
}