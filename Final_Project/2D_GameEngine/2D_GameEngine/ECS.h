#pragma once

#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include <bitset>
#include <array>

/*
Oh okay wow so im following this tutiorial and they having me set up a ECS type system and I have almost no understanding of it so this code
is very messy for me to understand but I think I get the basic concept of it.
*/

class Component;
class Entity;

using ComponentID = std::size_t;

inline ComponentID getComponentID()
{
	static ComponentID lastID = 0;
	return lastID++;
}

template <typename T> inline ComponentID getComponentID() noexcept 
{

	satic ComponentID typeID = getComponentID();
	return typeID();
}

constexpr std::size_t maxComponents = 32;
// Allows us to compare which entities have certain components.
using ComponentBitSet = std::bitset<maxComponents>;
using ComponentArray = std::array<Component*, maxComponents>;

class Component
{
public:
	Entity* entity;

	virtual void init() {}
	virtual void update() {}
	virtual void draw() {}

	virtual ~Component() {}
};

class Entity
{
private:
	bool active = true;
	std::vector<std::unique_ptr<Component>> components;

	ComponentArray componentArray;
	ComponentBitSet componentBitSet;

};