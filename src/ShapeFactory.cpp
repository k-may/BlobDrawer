#include "ShapeFactory.h"


ShapeFactory::ShapeFactory(void)
{
}


ShapeFactory::~ShapeFactory(void)
{
}

void ShapeFactory::addPoint(ofVec2f point)
{
	if(_lineComplete)
		return;

	if(_lastPoint == ofVec2f(-1, -1)){
		_lastPoint = point;
	}else{

		if(_lastPoint.distance(point) > 10)
			_lastPoint = point;
		else
			addLine(point);

	}

}

void ShapeFactory::addLine(ofVec2f point)
{

	for(int i = 0 ;i < points.size() - 3; i ++){

		ofVec2f intersection;
		if(CheckIntersection(_lastPoint, point, points[i], points[i + 1], intersection)){

			_lineComplete = true;
			points = vector<ofVec2f>(points.begin() + i, points.end());

			break;
		}
	}

	points.push_back(point);
}

void ShapeFactory::draw(){

	ofPath p;
	p.setStrokeWidth(5);
	
	int count = 0;
	for(auto pt : points){
		if(count ++ == 0)
			p.moveTo(pt);
		else
			p.lineTo(pt);
	}
}

void ShapeFactory::reset()
{
	_lineComplete = false;
	_lastPoint = NULL_PT;
}
