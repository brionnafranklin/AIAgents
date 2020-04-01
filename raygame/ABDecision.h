#pragma once
#include "Condition.h"
#include "Decision.h"
class ABDecision : public Decision
{
public:
	virtual void makeDecision(Agent* agent, float deltaTime);
protected:
	virtual bool testCondition(Agent* agent) { return false; }
private:
	Decision* a;
	Decision* b;
};