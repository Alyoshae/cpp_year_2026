#include<iostream> 

int main(){

    enum class Month{
        jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
    };

    Month operator++(Month& m)
    {
        m = (m==Month::dec) ? Month::jan : Month{to_int(m)+1};
        return m;
    }
 
    return 0; 
}