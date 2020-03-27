/*******************************************************************************************
*
*   raylib [core] example - basic window
*
*   This example has been created using raylib 1.0 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2013-2016 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"
#include "Agent.h"
#include "Behavior.h"
#include "KeyboardBehavior.h"
#include "SeekBehavior.h"
#include "FleeBehavior.h"
#include "WonderBehavior.h"
#include "PursuitBehavior.h"
#include "EvadeBehavior.h"
#include "ScreenEdgeBehavior.h"

int main()
{
	// Initialization
	//--------------------------------------------------------------------------------------
	/*int screenWidth = 1600;
	int screenHeight = 900;

	InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

	SetTargetFPS(60);

	Agent* player = new Agent();
	player->setPosition({ 100.0f, 100.0f });
	KeyboardBehavior* keyboardBehavior = new KeyboardBehavior();
	player->addBehavior(keyboardBehavior);

	Agent* enemy = new Agent();
	enemy->setPosition({ 500.0f, 500.0f });*/

	/*SeekBehavior* seekBehavior = new SeekBehavior();
	seekBehavior->setTarget(player);
	enemy->addBehavior(seekBehavior);*/

	/*FleeBehavior* fleeBehavior = new FleeBehavior();
	fleeBehavior->setTarget(player);
	enemy->addBehavior(fleeBehavior);*/

	/*WonderBehavior* wonderBehavior = new WonderBehavior();
	enemy->addBehavior(wonderBehavior);*/

	int screenWidth = 1600;
	int screenHeight = 900;

	InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

	SetTargetFPS(60);

	Agent* player = new Agent();
	player->setPosition({ 1600.0f, 900.0f });
	player->setSpeed(500.0f);
	player->setColor(SKYBLUE);
	KeyboardBehavior* keyboardBehavior = new KeyboardBehavior();
	player->addBehavior(keyboardBehavior);
	ScreenEdgeBehavior* screenEdgeBehavior = new ScreenEdgeBehavior();
	player->addBehavior(screenEdgeBehavior);

	Agent* seeker = new Agent();
	seeker->setPosition({ 1500.0f, 1000.0f });
	seeker->setSpeed(250.0f);
	seeker->setColor(MAROON);
	SeekBehavior* seekBehavior = new SeekBehavior();
	seeker->addBehavior(seekBehavior);
	seekBehavior->setTarget(player);
	seeker->addBehavior(screenEdgeBehavior);

	Agent* pursuer = new Agent();
	pursuer->setPosition({ 1500.0f, 1000.0f });
	pursuer->setSpeed(250.0f);
	pursuer->setColor(ORANGE);
	PursuitBehavior* pursuitBehavior = new PursuitBehavior();
	pursuer->addBehavior(pursuitBehavior);
	pursuitBehavior->setTarget(player);
	pursuer->addBehavior(screenEdgeBehavior);

	Agent* fleer = new Agent();
	fleer->setPosition({ 1200.0f, 600.0f });
	fleer->setSpeed(250.0f);
	fleer->setColor(LIME);
	FleeBehavior* fleeBehavior = new FleeBehavior();
	fleer->addBehavior(fleeBehavior);
	fleeBehavior->setTarget(player);
	fleer->addBehavior(screenEdgeBehavior);

	Agent* evader = new Agent();
	evader->setPosition({ 1200.0f, 600.0f });
	evader->setSpeed(250.0f);
	evader->setColor(GREEN);
	EvadeBehavior* evadeBehavior = new EvadeBehavior();
	evader->addBehavior(evadeBehavior);
	evadeBehavior->setTarget(player);
	evader->addBehavior(screenEdgeBehavior);

	Agent* wanderer = new Agent();
	wanderer->setPosition({ 600.0f, 600.0f });
	wanderer->setSpeed(250.0f);
	wanderer->setColor(VIOLET);
	WonderBehavior* wonderBehavior = new WonderBehavior();
	wanderer->addBehavior(wonderBehavior);
	wanderer->addBehavior(screenEdgeBehavior);

	//--------------------------------------------------------------------------------------

	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		// Update
		//----------------------------------------------------------------------------------
		float deltaTime = GetFrameTime();
		player->update(deltaTime);
		seeker->update(deltaTime);
		pursuer->update(deltaTime);
		fleer->update(deltaTime);
		evader->update(deltaTime);
		wanderer->update(deltaTime);
		//----------------------------------------------------------------------------------

		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();

		ClearBackground(BLACK);

		player->draw();
		seeker->draw();
		pursuer->draw();
		fleer->draw();
		evader->draw();
		wanderer->draw();

		EndDrawing();
		//----------------------------------------------------------------------------------
	}

	// De-Initialization
	//--------------------------------------------------------------------------------------   
	CloseWindow();        // Close window and OpenGL context
	//--------------------------------------------------------------------------------------

	return 0;
}