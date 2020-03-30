#include "FiniteStateMachine.h"
#include "Transition.h"
#include "State.h"
#include "Condition.h"

Vector2 FiniteStateMachine::update(Agent* agent, float deltaTime)
{ 
	//Stop if we have no current state
	if (m_currentState == nullptr) {
		return Vector2{ 0.0f, 0.0f };
	}
	//Check if a transition has been triggered
	Transition* transition = m_currentState->getTriggeredTransition(agent);
	//If there is a transition, change states
	if (transition != nullptr) {
		m_currentState->exit(agent);
		m_currentState = transition->getTargetState();
		m_currentState->init(agent);
	}
	//Update the current state
	m_currentState->update(agent, deltaTime);
	return Vector2{ 0.0f, 0.0f };
}