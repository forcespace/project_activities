//
// Created by Сергей Павлов on 07.10.2021.
//

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

constexpr unsigned WINDOW_WIDTH = 800;
constexpr unsigned WINDOW_HEIGHT = 600;

int main()
{
    sf::RenderWindow window(sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}), "title");
    sf::Clock clock;

    sf::CircleShape shape(40);
    shape.setPosition({200, 120});
    shape.setFillColor(sf::Color(255, 255, 255));

    while (window.isOpen())
    {
        sf::Event event{};
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) window.close();
        }

        const sf::Vector2 speed = {50.f, 15.f};
        const float deltaTime = clock.restart().asSeconds();
        sf::Vector2f position = shape.getPosition();
        position += speed * deltaTime;
        shape.setPosition(position);

        window.clear();
        window.draw(shape);
        window.display();
    }
}