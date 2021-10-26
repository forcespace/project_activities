//
// Created by Сергей Павлов on 15.10.2021.
//

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <cmath>

constexpr unsigned WINDOW_WIDTH = 1000;
constexpr unsigned WINDOW_HEIGHT = 1000;

int main()
{
    constexpr int pointCount = 200;
    const sf::Vector2f roseCenter = {500.f, 500.f};
    constexpr int roseDirectionRadius = 200;
    constexpr int polarRoseSpeed = 4;

    sf::Clock clock;
    float roseDirection = 0;

    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(
        sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}), "Rose",
        sf::Style::Default, settings);

    sf::ConvexShape rose;
    rose.setPosition(roseCenter);
    rose.setFillColor(sf::Color(204, 153, 255));
    rose.setPointCount(pointCount);

    for (int pointNo = 0; pointNo < pointCount; ++pointNo)
    {
        float angle = float(2 * M_PI * pointNo) / float(pointCount);
        float roseRadius = 200 * std::sin(6 * angle);
        sf::Vector2f point = {
            roseRadius * std::sin(angle),
            roseRadius * std::cos(angle)};
        rose.setPoint(pointNo, point);
    }

    while (window.isOpen())
    {
        sf::Event event{};
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) window.close();
        }

        float deltaTime = clock.getElapsedTime().asSeconds();
        roseDirection = float(2 * (-M_PI) * deltaTime) / polarRoseSpeed;
        sf::Vector2f polarRosePosition = {
            roseCenter.x + roseDirectionRadius * std::sin(roseDirection),
            roseCenter.y + roseDirectionRadius * std::cos(roseDirection)};
        rose.setPosition(polarRosePosition);

        window.clear();
        window.draw(rose);
        window.display();
    }
}