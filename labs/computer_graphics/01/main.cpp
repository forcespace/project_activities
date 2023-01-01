//
// Created by Сергей Павлов on 25.09.2021.
//

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <cmath>

int main()
{
    sf::RenderWindow window(sf::VideoMode({1200, 1000}), "title");

    window.clear();

    sf::ConvexShape word1;
    word1.setFillColor(sf::Color(93,30,23));
    word1.setPosition({200, 300});
    word1.setPointCount(9);
    word1.setPoint(0, {150, 0});
    word1.setPoint(1, {150, 50});
    word1.setPoint(2, {50, 50});

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(word1);
        window.display();
    }
}