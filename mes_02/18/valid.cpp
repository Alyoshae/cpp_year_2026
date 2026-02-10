#include <iostream> 

int get_int();
int get_int(int low, int high);

void skip_to_int(){
    if(std::cin.fail()){
        std::cout << "Trying if it can be saved..\n"; 
        std::cin.clear();
        for(char ch; std::cin >> ch;){
            if(isdigit(ch) || ch == '-'){
                std::cin.unget();
                std::cout << "YES!!\n";
                return;
            }
            else{
                std::cout << "No interger written in the input, please try again...\n";
                get_int();
            }
        }
    }
}

int get_int(){
    std::cout << "Enter an interger: ";
    int n = 0; 
    while (true){
        if (std::cin >> n)
            return n;
        std::cout << "Sorry, that was not a number; please try again...\n";
        skip_to_int();
    }
}

int get_int(int low, int high){
    std::cout << "Please enter an interger in the range " << low << " to " << high << " (inclusive)\n ";
    while(true){
        int n = get_int();
        if(low <= n && n <= high)
            return n;
        std::cout << "Sorry " << n << " is not in the [" << low << ':' << high << "] range; please try again.\n";
    }
}


int main(){ 
    int n = get_int(1,10);
    std::cout << "This is your int: " << n;
}