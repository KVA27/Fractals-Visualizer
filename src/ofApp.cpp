#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    colorRed=20;
    colorGreen=125;
    colorBlue=255;

    fractals.push_back(new DrawMode1());
    fractals.push_back(new DrawMode2());
    fractals.push_back(new DrawMode3());
    fractals.push_back(new DrawMode4());
}

//--------------------------------------------------------------
void ofApp::update(){
    
    ofSetBackgroundColor(0,0,0);
    if(increaseDepth)
    {
        timer++;

        if(timer%90 == 0) 
            depth++;

        if(timer >= 660) 
        {
            timer = 0;
            increaseDepth = false;
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofNoFill();
    if(fractals[0]->getActivate()){ 
        fractals[0]->draw(ofGetWidth()/2, ofGetHeight()/2, depth,colorRed,colorGreen,colorBlue);

    }if(fractals[1]->getActivate()){
        fractals[1]->draw(ofGetWidth()/2, ofGetHeight()-50, depth,colorRed,colorGreen,colorBlue);
        
    }if(fractals[2]->getActivate()){
        fractals[2]->draw(ofGetWidth()/3, ofGetHeight()/2, depth,colorRed,colorGreen,colorBlue);

    }if(fractals[3]->getActivate()){
        fractals[3]->draw(ofGetWidth()/2, ofGetHeight()/2, depth,colorRed,colorGreen,colorBlue);
    }
    if(increaseDepth){ 
        ofDrawBitmapString(" Depth is increasing: Current depth: " + to_string(depth), ofGetWidth()-400, ofGetHeight()-10); 
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch(key){
        case '1':
            fractals[0]->setActivate(!fractals[0]->getActivate()); 
            break;

        case '2':
            fractals[1]->setActivate(!fractals[1]->getActivate());
            break;

        case '3':
            fractals[2]->setActivate(!fractals[2]->getActivate());
            break;

        case '4':
            fractals[3]->setActivate(!fractals[3]->getActivate());
            break;

        case '-':
            if (depth > 0 && !increaseDepth) 
                depth--;
            break;

        case '=':
        if (depth < 7 && !increaseDepth) 
            depth++;
        break;

        case ' ': 
        if(!increaseDepth)
        {
            increaseDepth = true;
            depth = 0;
        }
        break;

        case 'c':
        if(increaseDepth)
        {
            increaseDepth = false;
        }
        break;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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