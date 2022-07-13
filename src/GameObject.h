#pragma once

#include <glad/glad.h>
#include <glm/glm.hpp>

#include "SpriteObject.h"

class GameObject {
public:
    glm::vec2       Position, Size, Velocity;
    SpriteObject    Sprite;
    glm::vec3       Color;
    float           Rotation;

    GameObject();
    GameObject(glm::vec2 pos, glm::vec2 size, SpriteObject sprite, glm::vec3 color = glm::vec3(1.0f), glm::vec2 velocity = glm::vec2(0.0f, 0.0f));

    virtual void Update(float deltaTime);
    virtual void Draw();
private:
};