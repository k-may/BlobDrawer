#include "VerletShape.h"
#include "Segment.h"


VerletShape::~VerletShape(void)
{
	ofLog() << "verlet destroyed!";
}


void VerletShape::draw(){

	ofPath p;
	p.setStrokeWidth(10);

	for(int i = 0 ;i < _particles.size(); i ++){

		ofVec2f pt1 = _particles[i]->getPosition();
		ofVec2f pt2 = _particles[i + 1]->getPosition();
		ofVec2f pt3 = _particles[i + 2]->getPosition();

		ofVec2f p1 = pt1.getInterpolated(pt2, 0.5f);
		ofVec2f p2 = pt2.getInterpolated(pt3, 0.5f);

		ofVec2f c1 = p1.getInterpolated(pt2, 0.66f);
		ofVec2f c2 = p2.getInterpolated(pt2, 0.66f);

		p.moveTo(p1);
		p.bezierTo(c1, c2, p2);

	}

	p.draw();
}