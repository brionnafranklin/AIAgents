#include "ABDecision.h"

void ABDecision::makeDecision(Agent* agent, float deltaTime)
{
	if (testCondition(agent))
		a->makeDecision(agent, deltaTime);
	else
		b->makeDecision(agent, deltaTime);
}
