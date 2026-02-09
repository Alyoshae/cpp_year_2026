#include<iostream> 

class Token{   
    public: 
        char kind;
        double value;  
        Token(char k, double v): kind{k}, value{v}{}
        Token(char k): kind{k}, value{0.00}{}
};

class Token_stream{
    public: 
        Token get();
        void putback(Token t); 
    private: 
        bool full = false; 
        Token buffer{0}; 
};

void Token_stream::putback(Token t){
    buffer = t; 
    full = true;
}

Token Token_stream::get(){
    if (full){
        full = false; 
        return buffer; 
    }
    char ch = 0; 
    if (!(std::cin >> ch)){
        std::cout << "NO INPUT\n"; 
    }
    switch(ch){
        case ':':
        case 'q': 
        case '(': case ')': case '+': case '-': case '*': case '/': 
            return Token(ch); 
        case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9': 
        {
            std::cin.putback(ch);
            double val = 0.00; 
            std::cin >> val; 
            return Token('8', val);            
        }
        default: 
            std::cout << "ERROR"; 
            return 0;
    }
}

Token_stream ts; 
double expression(); 

double primary(){
    Token t = ts.get();
    switch(t.kind){
        case '(': 
        {
            double d= expression();
            t = ts.get();
            if(t.kind != ')')
                std::cout << "ERROR, ')' ESPERADO...\n";
            return d; 
        }
        case '8':
            return t.value; 
        default:
            std::cout << "Error, primary expected!\n"; 
    }
}
double term(){
    double left = primary();
    Token t = ts.get();
    while(true){
        switch(t.kind){
            case '*': 
                left *= primary();
                t = ts.get();
                break;
            case '/':
            {
                double d = primary();
                if(d == 0){
                    std::cout << "Error! DIVISION DE 0\n";
                }
                left /= d; 
                t = ts.get();
                break;
            }
            default:
                ts.putback(t); 
                return left; 
        }
    }
}
double expression(){
    double left = term(); // lee y evaluea term
    Token t = ts.get();
    while(true){
        switch(t.kind){
            case '+': 
                left += term();
                t = ts.get();
                break;
            case '-': 
                left -= term();
                t = ts.get();
                break;
            default:
                ts.putback(t);
                return left;
        }
    }
}

int main(){
    try{
        while(std::cin){
            std::cout << expression() << '\n';
        }
    }
    catch(std::exception& e){
        std::cerr << e.what() << '\n'; 
        return 1;
    }
    catch(...){
        std::cerr << "EXCEPTION \n";
        return 2;
    }
    return 0;
}