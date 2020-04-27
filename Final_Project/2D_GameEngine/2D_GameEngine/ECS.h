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

template <typename T> inline ComponentID getComponentTypeID() noexcept 
{

	satic ComponentID typeID = getComponentTypeID();
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
public:
	void update()
	{
		for (auto& c : components) c->update();
		for (auto& c : components) c->draw();
	}
	void draw() {}
	bool isActive() { return active; }
	void destroy() { active = false; } // Allows us to destroy inactive entities so we can save system resources
	template <typename T> bool hasComponent() const
	{
		return componentBitSet[getComponentID<T>];
	}

	template <typename T, typename... TArgs>
	T& addComponent(TArgs&&...mArgs)
	{
		T* c(new T(std::forward<TArgs>(mArgs)...));
		c->entity = this;
		std::unique_ptr<Component> uPtr{ c };
		components.emplace_back(std::move(uPtr));

		componentArray[getComponentTypeID<T>()] = c;
		componentBitSet[getComponentTypeID<T>()] = true;

		c->init();
		return *c;
	}

	template<typename T> T& getComponent() const
	{
		auto ptr(componentArray[getComponentTypeID<t>()])
			return *static_cast<T*>(ptr);
	}
};

class Manager // Using manager to update indivitual entities
{
private:
	std::vector<std::unique_ptr<Entity>> entities;

public:
	void update() //updates entities
	{
		for (auto& e : entities) e->update();
	}
	void draw() //draws the entities
	{
		for (auto& e : entities)e->draw();
	}
	
	void refresh() // removes non-active entities
	{
		entities.erase(std::remove_if(std::begin(entities), std::end(entities),
			[](const std::unique_ptr<Entity>& mEntity)
			{
				return !mEntity->isActive();
			}),
			std::end(entities));
	}
	Entity& addEntity()
	{
		Entity* e = new Entity();
		std::unique_ptr<Entity> uPtr{ e };
		entities.emplace_back(std::move(uPtr));
		return *e;
	}
};