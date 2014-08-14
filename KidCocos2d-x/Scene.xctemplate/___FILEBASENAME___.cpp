//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//


#include "___FILEBASENAME___.h"
#include "TemplateLayer.h"


___FILEBASENAME___::___FILEBASENAME___(){}

___FILEBASENAME___::~___FILEBASENAME___(){}


bool ___FILEBASENAME___::init() {
	if(Scene::init()){
		return true;
	} else {
		return false;
	}
}

/*
bool ___FILEBASENAME___::init(){
	bool bRet = false;
	do{
		CC_BREAK_IF(!Scene::init());
		auto templateLayer = TemplateLayer::create();
		CC_BREAK_IF(!templateLayer);
		this->addChild(templateLayer);
		bRet = true;
	} while(0);
    
	return bRet;
}*/