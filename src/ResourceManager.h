#pragma once

#include <map>
#include <string>

#include <glad/glad.h>

#include "Texture.h"
#include "Shader.h"

class ResourceManager {
public:
    static std::map<std::string, Shader>    Shaders;
    static std::map<std::string, Texture>   Textures;

    static Shader   LoadShader(const char* file, std::string name);
    static Shader   GetShader(std::string name);

    static Texture  LoadTexture(const char* file, bool alpha, std::string name);
    static Texture  GetTexture(std::string name);

    static void     Clear();
private:
    ResourceManager() { }
    static Shader   loadShaderFromFile(const char* shaderFile);
    static Texture  loadTextureFromFile(const char* file, bool alpha);
};