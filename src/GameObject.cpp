#include "GameObject.h"

GameObject::GameObject()
    : Position(0.0f, 0.0f), Size(1.0f, 1.0f), Velocity(0.0f), Color(1.0f), Rotation(0.0f), Sprite() { }

GameObject::GameObject(glm::vec2 pos, glm::vec2 size, SpriteObject sprite, glm::vec3 color, glm::vec2 velocity)
    : Position(pos), Size(size), Velocity(velocity), Color(color), Rotation(0.0f), Sprite(sprite) { }

void GameObject::Update(float deltaTime) {
    this->Position += this->Velocity * deltaTime;
}

void GameObject::Draw() {
    this->Sprite.Render(this->Position, this->Size, this->Rotation, this->Color);
}