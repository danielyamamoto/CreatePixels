#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	pixel.init(); // Carga los pixeles en la memoria
}

//--------------------------------------------------------------
void ofApp::update(){
	pixel.getPixel();
	pixel.putPixel(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), ofRandom(255), ofRandom(255), ofRandom(255));
	// Lo puse en random para que fuera más notorio los pixeles en la pantalla
	// Si se desea solamente un pixel, es cuestión de solo poner una cordenada específica
}

//--------------------------------------------------------------
void ofApp::draw(){
	pixel.draw(); // Dibuja los pixeles en el canvas
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
