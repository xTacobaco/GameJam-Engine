#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

class GameLoop {
public:
    bool                    Keys[1024];
    unsigned int            Width, Height;
    
    GameLoop(unsigned int width, unsigned int height);
    ~GameLoop();
  
    void Init();
    void Update(float deltatime);
    void Render();
};