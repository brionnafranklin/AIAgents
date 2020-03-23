#include "Agent.h"

void Agent::Draw(aie::Renderer2D* renderer)
{
	renderer->drawBox(m_Position.x, m_Position.y, 10, 10);
}

Agent::Agent()
{
}

Agent::~Agent()
{
}

void Agent::update(float deltaTime)
{
}

void Agent::addBehavior(Behavior* behavior)
{
}
