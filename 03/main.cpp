//
// Created by Сергей Павлов on 25.09.2021.
//

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

//int main()
//{
//    sf::RenderWindow window(sf::VideoMode({800, 600}), "title");
//
//    window.clear();
//
//    sf::ConvexShape triangle;
//    triangle.setFillColor(sf::Color(0xFF, 0x80, 0));
//    triangle.setPosition({200, 120});
//    triangle.setPointCount(3);
//    triangle.setPoint(0, {50, -20});
//    triangle.setPoint(1, {50, 20});
//    triangle.setPoint(2, {-100, 0});
//
//    sf::ConvexShape trapeze;
//    trapeze.setFillColor(sf::Color(0xFF, 0, 0xFF));
//    trapeze.setPosition({400, 300});
//    trapeze.setPointCount(4);
//    trapeze.setPoint(0, {-90, 0});
//    trapeze.setPoint(1, {90, 0});
//    trapeze.setPoint(2, {120, 60});
//    trapeze.setPoint(3, {-120, 60});
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
//        window.draw(triangle);
//        window.draw(trapeze);
//        window.display();
//    }
//}

int main()
{
    sf::RenderWindow window(sf::VideoMode({1200, 1000}), "title");

    window.clear();

    sf::ConvexShape house;
    house.setFillColor(sf::Color(77,46,11));
    house.setPosition({200, 900});
    house.setPointCount(4);
    house.setPoint(0, {800, 0});
    house.setPoint(1, {800, -400});
    house.setPoint(2, {0, -400});

    sf::ConvexShape door;
    door.setFillColor(sf::Color(0x0, 0x0, 0x0));
    door.setPosition({250, 900});
    door.setPointCount(4);
    door.setPoint(0, {150, 0});
    door.setPoint(1, {150, -250});
    door.setPoint(2, {0, -250});

    sf::ConvexShape roof;
    roof.setFillColor(sf::Color(93,30,23));
    roof.setPosition({150, 500});
    roof.setPointCount(4);
    roof.setPoint(0, {900, 0});
    roof.setPoint(1, {650, -150});
    roof.setPoint(2, {250, -150});

    sf::ConvexShape pipe1;
    pipe1.setFillColor(sf::Color(59,56,56));
    pipe1.setPosition({720, 440});
    pipe1.setPointCount(4);
    pipe1.setPoint(0, {65, 0});
    pipe1.setPoint(1, {65, -115});
    pipe1.setPoint(2, {0, -115});

    sf::ConvexShape pipe2;
    pipe2.setFillColor(sf::Color(59,56,56));
    pipe2.setPosition({700, 340});
    pipe2.setPointCount(4);
    pipe2.setPoint(0, {100, 0});
    pipe2.setPoint(1, {100, -60});
    pipe2.setPoint(2, {0, -60});

    sf::CircleShape shape1(25);
    shape1.setPosition({740, 230});
    shape1.setFillColor(sf::Color(191,191,191));

    sf::CircleShape shape2(30);
    shape2.setPosition({750, 190});
    shape2.setFillColor(sf::Color(191,191,191));

    sf::CircleShape shape3(35);
    shape3.setPosition({770, 150});
    shape3.setFillColor(sf::Color(191,191,191));

    sf::CircleShape shape4(40);
    shape4.setPosition({780, 100});
    shape4.setFillColor(sf::Color(191,191,191));

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(house);
        window.draw(door);
        window.draw(roof);
        window.draw(pipe1);
        window.draw(pipe2);
        window.draw(shape1);
        window.draw(shape2);
        window.draw(shape3);
        window.draw(shape4);
        window.display();
    }
}