////
//// Created by Сергей Павлов on 25.09.2021.
////
//
//#include <SFML/Graphics.hpp>
//#include <SFML/System.hpp>
//#include <SFML/Window.hpp>
//
//int main()
//{
//    sf::RenderWindow window(sf::VideoMode({1920, 1080}), "title");
//
//    window.clear();
//
//    sf::CircleShape shape1(40);
//    shape1.setPosition({200, 120});
//    shape1.setFillColor(sf::Color(0xFF, 0x0, 0x0));
//
//
//    sf::CircleShape shape2(48);
//    shape2.setPosition({260, 120});
//    shape2.setFillColor(sf::Color(0x0, 0xFF, 0x0));
//
//    sf::CircleShape shape3(60);
//    shape3.setPosition({320, 160});
//    shape3.setFillColor(sf::Color(0x0, 0x0, 0xFF));
//
//    sf::CircleShape shape4(75);
//    shape4.setPosition({330, 220});
//    shape4.setFillColor(sf::Color(0xFF, 0xFF, 0x0));
//
//    while (window.isOpen())
//    {
//        sf::Event event;
//
//        while (window.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//
//        window.clear();
//        window.draw(shape1);
//        window.draw(shape2);
//        window.draw(shape3);
//        window.draw(shape4);
//        window.display();
//    }
//}