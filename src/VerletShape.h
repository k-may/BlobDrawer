#pragma once
#include "Segment.h"
#include "MSAPhysics3D.h"
#include "MSAPhysics2D.h"
using namespace msa::physics;

class VerletShape
{
public:
	VerletShape(vector<Particle2D*> p) : _particles(p) {}
	~VerletShape(void);
	void draw();

	vector<Particle2D*> _particles;

};

