////
//// Created by Сергей Павлов on 25.09.2021.
////
//
//#include <SFML/Graphics.hpp>
//#include <SFML/System.hpp>
//#include <SFML/Window.hpp>
//#include <iostream>
//#include <cmath>
//
//void init(sf::ConvexShape& pointer)
//{
//    pointer.setPointCount(3);
//    pointer.setPoint(0, {40, 0});
//    pointer.setPoint(1, {-20, -20});
//    pointer.setPoint(2, {-20, 20});
//    pointer.setPosition({400, 300});
//    pointer.setFillColor(sf::Color(0xFF, 0x80, 0x00));
//}
//
//void pollEvents(sf::RenderWindow &window, sf::Vector2f& mousePosition)
//{
//    sf::Event event;
//    while (window.pollEvent(event))
//    {
//        switch (event.type)
//        {
//            case sf::Event::Closed:
//                window.close();
//                break;
//            case sf::Event::MouseButtonPressed:
//                std::cout << "mouse pressed,"
//                          << " x=" << event.mouseButton.x
//                          << " y=" << event.mouseButton.y
//                          << std::endl;
//                break;
//            case sf::Event::MouseButtonReleased:
//                std::cout << "mouse released,"
//                          << " x=" << event.mouseButton.x
//                          << " y=" << event.mouseButton.y
//                          << std::endl;
//                break;
//            default:
//                break;
//        }
//    }
//};
//
//void update(const sf::Vector2f& mousePosition, sf::ConvexShape& pointer)
//{
//
//}
//
//void redrawFrame(sf::RenderWindow &window, sf::ConvexShape& pointer)
//{
//    window.clear();
//    window.draw(pointer);
//    window.display();
//}
//
//float toDegrees(float radians)
//{
//    return float(double (radians) * 180.0 / M_PI);
//}
//
//int main()
//{
//    constexpr unsigned WINDOW_WIDTH = 1200;
//    constexpr unsigned WINDOW_HEIGHT = 1000;
//
//    sf::ContextSettings settings;
//    settings.antialiasingLevel = 8;
//    sf::RenderWindow window(sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}), "events", sf::Style::Default, settings);
//
//    sf::ConvexShape pointer;
//    sf::Vector2f mousePosition;
//
//    init(pointer);
//
//    while (window.isOpen())
//    {
//        pollEvents(window, mousePosition);
//        update(mousePosition, pointer);
//        redrawFrame(window, pointer);
//    }
//}