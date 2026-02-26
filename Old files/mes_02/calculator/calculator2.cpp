#include<iostream> 
#include<vector> 

class Token{
    public:
        char tipo;
        double value;
        Token(char t, double v) :tipo{t}, value{v}{}
        Token(char t) :tipo{t}, value{0.00}{}
};

Token returnToken(){
    char ch = 0;
    std::cout << "Ingresa un char: ";
    std::cin >> ch;
    switch(ch){
        case '(': case ')': case '+': case '-': case '*': case '/':
            return Token{ch};
        case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
        {
            std::cin.putback(ch);
            double val{0.00};
            std::cin >> val; 
            return{'n', val};
        }
        default:
            std::cout << "Error \n";
            return 0; 
    }
}

int main(){
    Token mitoken = returnToken();
    std::cout << "MI TOKEN ES: " << mitoken.tipo << " Y " << "MI TOKEN VALE: " <<  mitoken.value;
    return 0; 
}

