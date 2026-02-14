#include <SFML/Window.hpp> 
#include <iostream> 

int main(){

    sf::Window window(sf::VideoMode({800,600}), "My window"); 

    //run the program as long as the window is open 
    while(window.isOpen()){
        //check all the window's event's that are triggered since the last iteration of the lopp 
        while(const std::optional event = window.pollEvent()){
            //close requested event : we close de window
            if(event -> is<sf::Event::Closed>()){
                window.close();
            }
        }
    }
}