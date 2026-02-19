#include <SFML/Graphics.hpp> 
#include <iostream> 
#include <SFML/System/Vector2.hpp>


int main(){
    //window 
    sf::RenderWindow window(sf::VideoMode({800,600}), "My window");
   window.setFramerateLimit(10);

    //rectangle
    sf::RectangleShape rectangle({50.f, 50.f});
    rectangle.setFillColor(sf::Color::Blue);
    rectangle.setOrigin({25.f,25.f});

    //position
    float x = rectangle.getPosition().x;
    float y = rectangle.getPosition().y;

    
    //clock
    sf::Clock clock;

    while(window.isOpen()){
        //clock 
        float dt = clock.restart().asSeconds();
        float fps = 1 / dt; 
        std::cout << dt << std::endl;


       //close e vent
        while(const std::optional event = window.pollEvent()){
            if(event ->is<sf::Event::Closed>()){
                window.close();
            }
        }

        x = x + 300.f*dt; 
        rectangle.setPosition({x, 0.f});


        //see
        window.clear(sf::Color(127,127,200));
        window.draw(rectangle);
        window.display();

    }


    return 0; 
}