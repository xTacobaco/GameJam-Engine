#pragma once

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "Shader.h"
#include "Texture.h"

class SpriteObject {
public:
    SpriteObject() : VAO(0) {}
    SpriteObject(Shader& shader, Texture& texture);
    ~SpriteObject();
    void Render(glm::vec2 position, glm::vec2 size = glm::vec2(1.0f, 1.0f), float rotate = 0.0f, glm::vec3 color = glm::vec3(1.0f));
private:
    unsigned int VAO;

    Shader          shader;
    Texture         texture;
    unsigned int    frames = 1;
    unsigned int    anim_speed = 0;
};