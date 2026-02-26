#include <iostream> 

struct Date{    
    int day{};
    int month{};
    int year{};
};

int main(){
    Date d{};
    std::cout << "What's todays day date?\n" << "Response: ";
    std::cin >> d.day;
    std::cout << "What's todays month date?\n" << "Response: "; 
    std::cin >> d.month; 
    std::cout << "What's currently year?\n" << "Response: "; 
    std::cin >> d.year;
    std::cout << d.day << '/' << d.month << '/' << d.year << '\n';
    return 0; 
}