////
//// Created by Сергей Павлов on 07.10.2021.
////
//
//#include <SFML/Graphics.hpp>
//#include <SFML/System.hpp>
//#include <SFML/Window.hpp>
//#include <iostream>
//#include <cmath>
//
//constexpr unsigned WINDOW_WIDTH = 800;
//constexpr unsigned WINDOW_HEIGHT = 600;
//
//int main()
//{
//    sf::RenderWindow window(sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}), "title");
//    sf::Clock clockX, clockY;
//
//    constexpr float BALL_SIZE = 40;
//    sf::CircleShape ball(BALL_SIZE);
//    ball.setFillColor(sf::Color(255, 255, 255));
//    ball.setPosition({200, 50});
//    sf::Vector2 speed = {500.f, 150.f};
//
//    constexpr float offsetY = 350;
//
//    while (window.isOpen())
//    {
//        sf::Event event{};
//        while (window.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed) window.close();
//        }
//
//        const float deltaTime = clockX.restart().asSeconds();
//        sf::Vector2f position = ball.getPosition();
//        position.x += speed.x * deltaTime;
//
//        constexpr float amplitudeY = 80.f;
//        constexpr float periodY = 2;
//        const float time = clockY.getElapsedTime().asSeconds();
//        const float wavePhase = time * float(2 * M_PI);
//        const float y = amplitudeY * std::sin(wavePhase / periodY);
//
//        position.y = y + offsetY;
//
//        if ((position.x + 2 * BALL_SIZE >= WINDOW_WIDTH) && (speed.x > 0))
//        {
//            speed.x = -speed.x;
//        }
//
//        if ((position.x < 0) && (speed.x < 0))
//        {
//            speed.x = -speed.x;
//        }
//
//        ball.setPosition(position);
//
//        window.clear();
//        window.draw(ball);
//        window.display();
//    }
//}