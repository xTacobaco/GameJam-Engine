#include "GameLoop.h"

GameLoop::GameLoop(unsigned int width, unsigned int height) : Keys(), Width(width), Height(height) {

}

GameLoop::~GameLoop() {

}

void GameLoop::Init() {

}

void GameLoop::Update(float deltatime) {

}

void GameLoop::Render() {
	glClearColor(0.4f, 0.6f, 0.9f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
}