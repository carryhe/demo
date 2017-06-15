#pragma once
#include"cocos2d.h"
#include"cocostudio\CocoStudio.h"
#include"ui\CocosGUI.h"
USING_NS_CC;
using namespace cocos2d;
using namespace ui;
using namespace cocostudio::timeline;
class lodingScene:public Layer
{
public:
	lodingScene();
	~lodingScene();
public:
	virtual bool init();
	static Scene * creatlodingScene();
	CREATE_FUNC(lodingScene);
	void buttonEvent(Ref * pSender,Widget::TouchEventType type);
private:
	Text* m_text;
	ImageView* m_img;
	Size visibleSize;
};

