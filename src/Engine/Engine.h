#pragma once

#include "SFML/Graphics.hpp"


class Engine
{
public:
	sf::RenderWindow* window{ nullptr };

private:
	bool bQuit;

	Engine(void) = default;
	~Engine(void) = default;

public:
	Engine(Engine& copy) = delete;
	Engine(Engine&& other) = delete;
	Engine& operator= (Engine& copy) = delete;

	static Engine& GetInstance(void);

	void Start(sf::RenderWindow* win);

private:
	void Update(void);
};