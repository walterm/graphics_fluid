#include "particleSystem.h"
ParticleSystem::ParticleSystem(int nParticles):m_numParticles(nParticles){
}

virtual void ParticleSystem::draw(){
	//TODO: Render the system by iterating over the list of fluid particles
	for (int i; i<m_numParticles; i++) {
		particles[i].draw();
	}
}
