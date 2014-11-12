#pragma once
#include "ofVec2f.h"


class Segment
{
public:
	Segment(void);
	~Segment(void);

	ofVec2f p;
	Segment* n;
};

