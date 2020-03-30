#pragma once
#include "Condition.h"

class WithinRangeCondition : public Condition
{
public: 
	WithinRangeCondition(Agent* target, float range) : m_target(target), m_range(range) {} 
	virtual ~WithinRangeCondition() {} 
	virtual bool test(Agent* agent) const
	{
		// get target position 
		Vector2 targetPos = m_target->getPosition();
		// get my position 
		Vector2 pos = agent->getPosition();
		// compare the two and get the distance between them 
		float distance = (targetPos - pos).magnitude();
		return distance <= m_range; 
	}
private: 
	Agent* m_target; 
	float m_range;
};

