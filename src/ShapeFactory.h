#pragma once

#include "ofMain.h"

#define NULL_PT  ofVec2f(-1, -1);

class ShapeFactory
{
public:
	ShapeFactory(void);
	~ShapeFactory(void);

	void addPoint(ofVec2f point);

	void addLine();

	bool CheckIntersection(ofVec2f p1, ofVec2f p2, const  ofVec2f& o);

	vector<ofVec2f> points;

};

