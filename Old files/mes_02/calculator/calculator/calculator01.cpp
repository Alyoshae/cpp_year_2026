#include <iostream> 
#include <vector> 

class Token{
    public: 
        char n;
        double valor;
        Token(char n) :tipo{n}, valor{0.0}{}
        Token(char n, double v) :tipo{n}, valor{v}{}
};

class Token_stream{
    public:
        Token get();
        void putback(Token t);
    private:
        bool full = false;
        Token buffer;
};

void Token_stream::putback(Token t){
    buffer = t; 
    full = true; 
}

 main(){

    char ch = 0; 
    if!(std::cin >> ch){
        error("No input\n");
    }
    switch(ch){
        case ';': 
        case 'q':
        case '(': case ')': case '+': case '-': case '*': case '/':
            return Token(ch);
    }

    return 0; 
}