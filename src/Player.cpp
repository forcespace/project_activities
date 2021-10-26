//
// Created by Сергей Павлов on 24.10.2021.
//

#include "Player.h"

Player::Player(sf::String F, int X, int Y, float W, float H)
{
    File = F;
    w = W;
    h = H;
    image.loadFromFile("upload/images/" + File);
    image.createMaskFromColor(sf::Color(41, 33, 59));
    texture.loadFromImage(image);
    sprite.setTexture(texture);
    x = X;
    y = Y;
    sprite.setTextureRect(sf::IntRect(w, h, w, h));
}

void Player::update(float time)
{
    switch (dir)
    {
        case 0:
            dx = speed;
            dy = 0;
            break;
        case 1:
            dx = -speed;
            dy = 0;
            break;
        case 2:
            dx = 0;
            dy = speed;
            break;
        case 3:
            dx = 0;
            dy = -speed;
            break;
    }

    x += dx * time;
    y += dy * time;

    speed = 0;
    sprite.setPosition(x, y);
}