#pragma once

#include "ofMain.h"
#include "MSAPhysics2D.h"
#include "ofxShivaVGRenderer.h"
#include "VerletShape.h"

using namespace msa::physics;

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
		ofPtr<ofxShivaVGRenderer> _shivaRenderer;
		World2D physics;

		VerletShape _verletShape;
		ShapeFactor _shapeFactory;
};
