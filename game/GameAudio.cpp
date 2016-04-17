#include "GameAudio.h"

#define TURN_SWAP "swap"
#define ROCKET_1 "rocket1"

int r;

GameAudio::GameAudio(GameLogic* gl, AudioManager* am)
{
	this->gl = gl;
	this->am = am;
}


GameAudio::~GameAudio()
{
}


void GameAudio::init() {
	
}

void GameAudio::handleStates() {

}

void GameAudio::handleEvents() {

	for (int i = 0; i < gl->out_audio_events.size(); i++) {
		switch (gl->out_audio_events[i]) {
		case GameLogic::eAudioEvents::AE_TURN_SWAP:
			am->play2D(TURN_SWAP);
			break;
		case GameLogic::eAudioEvents::AE_EXPLOSION_BOMB:
			am->play2D(ROCKET_1);
			break;
		}
	}
}

void GameAudio::update(float msec) {
	handleEvents();

	gl->out_audio_events.clear();
}

void GameAudio::destroy() {

}

// get a random number - used when determing which random sound to play
int GameAudio::roll(int min, int max)
{
	double x = rand() / static_cast<double>(RAND_MAX + 1);

	int r = min + static_cast<int>(x * (max - min));

	return r;
}