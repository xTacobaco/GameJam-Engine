#include "GameLoop.h"

#include "ResourceManager.h"

GameLoop::~GameLoop() {

}

void GameLoop::Init() {
	ResourceManager::LoadShader("res/shaders/Basic.shader", "basicShader");
}

void GameLoop::Update(float deltatime) {
	FrameCount++;
}

void GameLoop::Render() {
	glClearColor(0.4f, 0.6f, 0.9f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
}