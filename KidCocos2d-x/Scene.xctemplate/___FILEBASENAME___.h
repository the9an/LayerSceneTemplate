//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#ifndef _____FILEBASENAME____H__
#define _____FILEBASENAME____H__

#include "cocos2d.h"

using namespace cocos2d;

class ___FILEBASENAME___ : public Scene {
public:
	/**
     *  The default constructor.
     */
	___FILEBASENAME___();
    
	~___FILEBASENAME___();
    
	/**
     *  Initializes the instance of AtlasLoader.
     *
     *  @note When you are porting Cocos2d-x to a new platform, you may need to take care of this method.
     *
     *  @return true if successed, otherwise it returns false.
     *
     */
	virtual bool init();
    
	CREATE_FUNC(___FILEBASENAME___);
    
	/**
     * When this scene appear ,will call this method,
     * not this scene is create, so if you have some thing
     * want do when scen appear not init, please add to here
     */
	//void onEnter() override;
    
private:
	
};