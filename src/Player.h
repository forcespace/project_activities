//
// Created by Сергей Павлов on 24.10.2021.
//

#ifndef PROJECT_ACTIVITIES_PLAYER_H
#define PROJECT_ACTIVITIES_PLAYER_H
#include <SFML/Graphics.hpp>

class Player
{
public:
    float x, y, w, h, dx, dy, speed = 0;
    int dir = 0;
    sf::String File;
    sf::Image image;
    sf::Texture texture;
    sf::Sprite sprite;

    Player(sf::String F, int X, int Y, float W, float H);
    void update(float time);
};


#endif //PROJECT_ACTIVITIES_PLAYER_H