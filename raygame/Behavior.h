#pragma once
#include "Agent.h";

class Behavior
{
public:
	Behavior() {}
	virtual ~Behavior() {}

	enum eBehaviourResult { FAILURE, SUCCESS };

	virtual Vector2 update(Agent* agent, float deltaTime) = 0;
};