#include "ofApp.h"

#define	GRAVITY					1


//--------------------------------------------------------------
void ofApp::setup(){

	_shivaRenderer = ofPtr<ofxShivaVGRenderer>(new ofxShivaVGRenderer);
	ofSetCurrentRenderer(_shivaRenderer);

	int width = ofGetWidth();
	int height = ofGetHeight();

	physics.setGravity(ofVec3f(0, GRAVITY, 0));
	physics.setWorldSize(ofVec3f(-width/2, -height, -width/2), ofVec3f(width/2, height, width/2));

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
