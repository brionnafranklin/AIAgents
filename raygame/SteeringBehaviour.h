#pragma once
#include "SteeringForce.h"
#include "Behavior.h"

class SteeringBehaviour : public Behavior
{
public:
	SteeringBehaviour();
	SteeringBehaviour(SteeringForce* steeringForce);
	~SteeringBehaviour() override;
	SteeringForce* steeringForceObject;
	Vector2 force;
	void execute(Agent* agent);
	void update(Agent* agent, float deltatime) override;
};