#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    straightSegmentPolyline.addVertex(100, 100);  // Add a new point: (100, 100)
    straightSegmentPolyline.addVertex(150, 150);  // Add a new point: (150, 150)
    straightSegmentPolyline.addVertex(200, 100);  // etc...
    straightSegmentPolyline.addVertex(250, 150);
    straightSegmentPolyline.addVertex(300, 100);

    curvedSegmentPolyline.curveTo(350, 100);  // These curves are Catmull-Rom splines
    curvedSegmentPolyline.curveTo(350, 100);  // Necessary Duplicate for Control Point
    curvedSegmentPolyline.curveTo(400, 150);
    curvedSegmentPolyline.curveTo(450, 100);
    curvedSegmentPolyline.curveTo(500, 150);
    curvedSegmentPolyline.curveTo(550, 100);
    curvedSegmentPolyline.curveTo(550, 100);  // Necessary Duplicate for Control Point

    closedShapePolyline.addVertex(600, 125);
    closedShapePolyline.addVertex(700, 100);
    closedShapePolyline.addVertex(800, 125);
    closedShapePolyline.addVertex(700, 150);
    closedShapePolyline.close();  // Connect first and last vertices

    straightSegmentPolyline.addVertex(200, 200);  // Add a new point: (200, 200)
    straightSegmentPolyline.addVertex(250, 250);  // Add a new point: (250, 250)
    straightSegmentPolyline.addVertex(300, 200);  // etc...
    straightSegmentPolyline.addVertex(350, 250);
    straightSegmentPolyline.addVertex(400, 200);

    curvedSegmentPolyline.curveTo(450, 200);  // These curves are Catmull-Rom splines
    curvedSegmentPolyline.curveTo(450, 200);  // Necessary Duplicate for Control Point
    curvedSegmentPolyline.curveTo(500, 250);
    curvedSegmentPolyline.curveTo(550, 200);
    curvedSegmentPolyline.curveTo(600, 250);
    curvedSegmentPolyline.curveTo(650, 200);
    curvedSegmentPolyline.curveTo(650, 200);  // Necessary Duplicate for Control Point

    closedShapePolyline.addVertex(700, 225);
    closedShapePolyline.addVertex(800, 200);
    closedShapePolyline.addVertex(900, 225);
    closedShapePolyline.addVertex(800, 250);
    closedShapePolyline.close();  // Connect first and last vertices

    straightSegmentPolyline.addVertex(300, 300);  // Add a new point: (300, 300)
    straightSegmentPolyline.addVertex(350, 350);  // Add a new point: (350, 350)
    straightSegmentPolyline.addVertex(400, 300);  // etc...
    straightSegmentPolyline.addVertex(450, 350);
    straightSegmentPolyline.addVertex(500, 300);

    curvedSegmentPolyline.curveTo(550, 300);  // These curves are Catmull-Rom splines
    curvedSegmentPolyline.curveTo(550, 300);  // Necessary Duplicate for Control Point
    curvedSegmentPolyline.curveTo(600, 350);
    curvedSegmentPolyline.curveTo(650, 300);
    curvedSegmentPolyline.curveTo(700, 350);
    curvedSegmentPolyline.curveTo(750, 300);
    curvedSegmentPolyline.curveTo(750, 300);  // Necessary Duplicate for Control Point

    closedShapePolyline.addVertex(800, 325);
    closedShapePolyline.addVertex(900, 300);
    closedShapePolyline.addVertex(1000, 325);
    closedShapePolyline.addVertex(900, 350);
    closedShapePolyline.close();  // Connect first and last vertices
}


//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    ofSetLineWidth(3.0);// Line widths apply to polylines
    ofSetColor(0, 204, 0);
    straightSegmentPolyline.draw(); // This is how we draw polylines
    curvedSegmentPolyline.draw();// Nice and easy, right?
    closedShapePolyline.draw();
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
