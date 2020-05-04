#include "./Rigidbody2D.h"

Rigidbody2D::Rigidbody2D():
	m_mass(1.0f),
	m_damping(0.0f),
	m_sigmaForce(new glm::vec2(0.0f,0.0f)),
	m_velocity(new glm::vec2(0.0f,0.0f)),
	m_acceleration(new glm::vec2(0.0f,0.0f))
{}

Rigidbody2D::Rigidbody2D(const Rigidbody2D& rb):
	m_mass(rb.m_mass),
	m_damping(rb.m_damping),
	m_sigmaForce(new glm::vec2(*rb.m_sigmaForce)),
	m_velocity(new glm::vec2(*rb.m_velocity)),
	m_acceleration(new glm::vec2(*rb.m_acceleration))
{}

Rigidbody2D::Rigidbody2D(float mass):
	m_mass(mass),
	m_damping(0.0f),
	m_sigmaForce(new glm::vec2(0.0f,0.0f)),
	m_velocity(new glm::vec2(0.0f,0.0f)),
	m_acceleration(new glm::vec2(0.0f,0.0f))
{}

Rigidbody2D::~Rigidbody2D(){
	delete m_sigmaForce;
	delete m_velocity;
	delete m_acceleration;
}

void Rigidbody2D::addForce(float fx, float fy){
	m_sigmaForce->x+=fx;
	m_sigmaForce->y+=fy;
}

void Rigidbody2D::addForce(glm::vec2 force){
	*(m_sigmaForce)+=force;
}

void Rigidbody2D::setForce(float fx,float fy){
	m_sigmaForce->x = fx;
	m_sigmaForce->y = fy;
}

void Rigidbody2D::zeroForce(){
	m_sigmaForce->x = 0.0f;
	m_sigmaForce->y = 0.0f;
}

void Rigidbody2D::setMass(float mass){
	m_mass = mass;
}

void Rigidbody2D::setDamping(float damping){
	m_damping = damping;
}

void Rigidbody2D::setAcceleration(float ax, float ay){
	m_acceleration->x = ax;
	m_acceleration->y = ay;
}

void Rigidbody2D::setVelocity(float vx, float vy){
	m_velocity->x = vx;
	m_velocity->y = vy;
}

void Rigidbody2D::setVelocity(glm::vec2 vel){
	m_velocity->x = vel.x;
	m_velocity->y = vel.y;
}

void Rigidbody2D::getVelocity(glm::vec2& vel){
	vel = *m_velocity;
}

bool Rigidbody2D::hasInfiniteMass(){
	return m_mass < 0;
}