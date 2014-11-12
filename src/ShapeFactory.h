#pragma once

#include "ofMain.h"

#define NULL_PT  ofVec2f(-1, -1);

class ShapeFactory
{
public:
	ShapeFactory() { reset(); }
	~ShapeFactory(void);

	void reset();
	void addPoint(ofVec2f point);

	void addLine(ofVec2f point);

	bool CheckIntersection(ofVec2f p1, ofVec2f q1, ofVec2f p2, ofVec2f q2, const ofVec2f& o);
	void draw();
	vector<ofVec2f> points;
	ofVec2f _lastPoint;

	bool _lineComplete;

};

