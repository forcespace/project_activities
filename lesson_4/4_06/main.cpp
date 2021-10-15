////
//// Created by Сергей Павлов on 15.10.2021.
////
//
//#include <SFML/Graphics.hpp>
//#include <SFML/System.hpp>
//#include <SFML/Window.hpp>
//#include <cmath>
//
//constexpr unsigned WINDOW_WIDTH = 1200;
//constexpr unsigned WINDOW_HEIGHT = 1000;
//
//int main()
//{
//    constexpr int pointCount = 200;
//    constexpr int petalsCount = 12;
//    const sf::Vector2f ellipseRadius = {150.f, 30.f};
//
//    sf::ContextSettings settings;
//    settings.antialiasingLevel = 8;
//    sf::RenderWindow window(
//        sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}), "ellipse",
//        sf::Style::Default, settings);
//
//    sf::ConvexShape ellipse;
//    ellipse.setPosition({400, 320});
//    ellipse.setFillColor(sf::Color(0xFF, 0x09, 0x80));
//
//    ellipse.setPointCount(pointCount);
//
//    for (int pointNo = 0; pointNo < pointCount; ++pointNo)
//    {
//        float angle = float(2 * M_PI * pointNo) / float(pointCount);
//        sf::Vector2f point = sf::Vector2f
//            {
//                ellipseRadius.x * std::sin(angle),
//                ellipseRadius.y * std::cos(angle) * 5
//            };
//        ellipse.setPoint(pointNo, point);
//    }
//
//    while (window.isOpen())
//    {
//        sf::Event event{};
//        while (window.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed) window.close();
//        }
//
//        window.clear();
//        window.draw(ellipse);
//        window.display();
//    }
//}