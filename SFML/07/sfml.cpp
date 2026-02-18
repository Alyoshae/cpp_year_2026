#include <SFML/Graphics.hpp>

int main()
{
    sf::ContextSettings settings;
    settings.antiAliasingLevel = 4; 
    // create the window
    sf::RenderWindow window(sf::VideoMode({800, 600}), "My window", sf::State::Windowed, settings);

    sf::RectangleShape rectangle({200.f, 100.f});
    rectangle.setPosition({200.f,200.f});
    rectangle.setRotation(sf::degrees(-90.f));
    rectangle.setFillColor(sf::Color(20,100,70));
    rectangle.setOutlineColor(sf::Color(50,130,100));
    rectangle.setOutlineThickness(5.f);

    sf::CircleShape circle(200.f,60);
    circle.setOrigin({250.f, 250.f});
    circle.setPosition({450.f, 300.f});
    circle.setFillColor(sf::Color(127,50,100));
    circle.setOutlineColor(sf::Color(130,80,130));
    circle.setOutlineThickness(5.f);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear(sf::Color(127,127,200));
        window.draw(rectangle);
        window.draw(circle);
        window.display();
    }
    return 0;
}