#include<iostream> 

class Date{
    private:
        int y, m, d; 
    public: 
        Date(int y, int m, int d); //we define that a constructor will be created. 
        void add_day(int n);
        int month(){return m; }
        int day(){return d; }
        int year(){return y; }
};

Date::Date(int yy, int mm, int dd) //constructor (must be the same name as the class) 
    :y{yy}, m{mm}, d{dd}
{                                  //if we need something, a condition must be here. 
    if (!is_valid());
        throw invalid{};    
}

std::ostream& operator<<(std::ostream& os, Date d){ //operator overloading. 
    return os<< d.year() << '/' << d.month() << '/' << d.day();  
}

int main(){
    Date today{2026,2,27};

    // std::cout << today.d; <- we cannot enter here due to privacy on the class. (we must enter with a public function) 
    std::cout << today; //correct 

    return 0; 
}