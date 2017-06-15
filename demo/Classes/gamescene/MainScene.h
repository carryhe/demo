#pragma once
#include"cocos2d.h"
#include"base/BaseScene.h"
USING_NS_CC;
using namespace cocos2d;

class MainScene:public Layer
{
public:
	MainScene();
	~MainScene();
	virtual bool init();
	static Scene * createMainScene();
	CREATE_FUNC(MainScene);
};

