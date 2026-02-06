#include<iostream> 

class Token{
    public: 
        char tipo; 
        double valor; 
        Token(char t, double v): tipo{t}, valor{v}{}
        Token(char t): tipo{t}, valor{0.00}{}
};

class TokenStream{
    public:
    Token get();
    void putback(Token t);
    private: 
    bool full = false;
    Token buffer; 
};

void TokenStream::putback(Token t){
    buffer = t; 
    full = true; 
}

int main(){


    return 0; 
}