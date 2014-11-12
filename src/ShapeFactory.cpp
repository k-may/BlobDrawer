#include "ShapeFactory.h"


ShapeFactory::ShapeFactory(void)
{
}


ShapeFactory::~ShapeFactory(void)
{
}

void ShapeFactory::addPoint(ofVec2f point)
{

	if(points.size < 3){

		points.push_back(point);

		return;

	}

	for(int i = 0 ;i < points.size(); i ++){

		ofVec2f intersection;
		if(CheckIntersection(point, points[i], intersection)){

			//
			//points = vector<Segment*>(points.begin(), points.end() - i)


		}
	}
}

void ShapeFactory::addLine()
{

}
