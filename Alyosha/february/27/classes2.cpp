#include<iostream> 

enum class Month{
    jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec 
};

class Date{
    public: 
        Date(int y, Month m, int d);
        int day(){return d; }
        Month month(){return m; }
        int year(){return y; }
    private: 
        int y;
        Month m; 
        int d; 

};


Date::Date(int yy, Month mm, int dd)
    :y{yy}, m{mm}, d{dd}
{
}



int main(){

    Date today{2025, Month::feb, 27};
    
    return 0;
}