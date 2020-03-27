#pragma once
#include "Condition.h"

class WithinRangeCondition : public Condition
{
public: 
	WithinRangeCondition(const Agent* target, float range) : m_target(target), m_range(range) {} 
	virtual ~WithinRangeCondition() {} 
	virtual bool test(Agent* agent) const
	{
		// get target position 
		float tx = 0, ty = 0; 
		m_target->getPosition(&tx, &ty); 
		// get my position 
		float x = 0, y = 0; 
		agent->getPosition(&x, &y); 
		// compare the two and get the distance between them 
		float xDiff = tx - x; 
		float yDiff = ty - y; 
		float distance = sqrtf(xDiff * xDiff + yDiff * yDiff); 
		return distance <= m_range; 
	}
private: 
	const Agent* m_target; 
	float m_range;
};

