#include <iostream> 
#include <SFML/Graphics.hpp> 


int main(){

    //Window properties
    sf::ContextSettings settings;
    settings.antiAliasingLevel = 4; 
    sf::RenderWindow window(sf::VideoMode({800,600}), "My window", sf::State::Windowed, settings);
    window.setFramerateLimit(60);
    
    //circle properties 
    sf::CircleShape circle(50.f, 1000);
    circle.setFillColor(sf::Color(50,215,230));

    //start clock 
    sf::Clock clock; 


    while(window.isOpen()){

        //print clock in seconds 
        double dt = clock.restart().asSeconds();
        double fps = 1.f / dt; 
        std::cout << dt << std::endl;
        clock.restart();

        while(const std::optional event = window.pollEvent()){

            if(event -> is<sf::Event::Closed>()){
                window.close();
            }
        }

        window.clear(sf::Color(127,127,200));
        window.draw(circle);
        window.display();

    }


    return 0;
}