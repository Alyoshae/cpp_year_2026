#include <SFML/Graphics.hpp> 
#include <iostream>

int main(){

    float x = 400;
    float y = 300; 

    sf::RenderWindow window(sf::VideoMode({800,600}), "My window");
    sf::RectangleShape rectangle({100.f,100.f});
    rectangle.setFillColor(sf::Color(100,200,200));
    rectangle.setOrigin({50.f,50.f});
    rectangle.setPosition({x,y});

    while(window.isOpen()){

        while(const std::optional event = window.pollEvent()){
            if(event->is<sf::Event::Closed>()){
                window.close();
            }
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Scancode::W)){
            std::cout << "Move up\n";
            rectangle.setPosition({x,y= y-.10});
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Scancode::A)){
            std::cout << "Move lefts\n";
            rectangle.setPosition({x=x-.10,y});
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Scancode::S)){
            std::cout << "Move down\n";
            rectangle.setPosition({x,y=y+.10});
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Scancode::D)){
            std::cout << "Move right\n";
            rectangle.setPosition({x=x+.10,y});
        }

        window.clear(sf::Color(127,127,200));
        window.draw(rectangle);
        window.display();
    }

    return 0;
}