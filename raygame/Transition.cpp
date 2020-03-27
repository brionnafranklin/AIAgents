#include "Transition.h"

//bool IntroductionApp::startup() 
//{
//	m_2dRenderer = new aie::Renderer2D();
//	m_font = new aie::Font("./font/consolas.ttf", 32); 
//	m_playerBehaviour.setSpeed(400); 
//	m_player.addBehaviour(&m_playerBehaviour); 
//	m_player.setPosition(getWindowWidth() * 0.5f, getWindowHeight() * 0.5f); 
//	m_enemy.addBehaviour(&m_enemyBehaviour); 
//	m_enemy.setPosition(100, 100); 
//	// created new states auto 
//	attackState = new AttackState(&m_player, 150); 
//	auto idleState = new IdleState(); 
//	// create the condition, setting the player as the target 
//	auto withinRangeCondition = new WithinRangeCondition(&m_player, 200); 
//	// create the transition, this will transition to the attack state when the withinRange condition is met 
//	auto toAttackTransition = new Transition(attackState, withinRangeCondition); 
//	// add the transition to the idle state 
//	idleState->addTransition(toAttackTransition); 
//	// add all the states, conditions and transitions to the FSM (the enemy // behaviour) 
//	m_enemyBehaviour.addState(attackState); 
//	m_enemyBehaviour.addState(idleState); 
//	m_enemyBehaviour.addCondition(withinRangeCondition); 
//	m_enemyBehaviour.addTransition(toAttackTransition); 
//	// set the current state of the FSM 
//	m_enemyBehaviour.setCurrentState(idleState); 
//	return true; 
//}