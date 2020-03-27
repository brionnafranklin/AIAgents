#pragma once
#include "Behavior.h"
class Condition : public Behavior
{
public:
	Condition() {} 
	virtual ~Condition() {} 

	virtual bool test(Agent* agent) const = 0; 

	virtual eBehaviourResult execute(Agent* agent, float deltaTime) 
	{ 
		if (test(agent)) 
			return eBehaviourResult::SUCCESS; 
		return eBehaviourResult::FAILURE; 
	}
};

