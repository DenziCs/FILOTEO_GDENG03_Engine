#pragma once
#include"AComponent.h"
#include<reactphysics3d/reactphysics3d.h>

using namespace reactphysics3d;

class PhysicsComponent : public AComponent
{
public:
	PhysicsComponent(std::string name, AGameObject* owner);
	~PhysicsComponent();
	void perform(float delta_time) override;

	RigidBody* getRigidBody();

	void setMass(float object_mass);
	void setRigidBodyType(BodyType rigid_body_type);
	void enableGravity(bool is_affected_by_gravity);

private:
	float mMass = 1000.f;
	RigidBody* mRigidBody;
};