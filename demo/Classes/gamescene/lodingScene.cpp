#include "gamescene/lodingScene.h"
#include"gamescene\MainScene.h"
lodingScene::lodingScene()
{
}

lodingScene::~lodingScene()
{
}
bool lodingScene::init()
{
	if (!Layer::init())
	{
		return false;
	}
	visibleSize = Director::getInstance()->getVisibleSize();
	auto rootNode = CSLoader::createNode("lodingScene.csb");
	addChild(rootNode);
	auto button = dynamic_cast<Button *>(rootNode->getChildByName("Button_1"));
	button->addTouchEventListener(CC_CALLBACK_2(lodingScene::buttonEvent,this));
	button->setPosition(Vec2(visibleSize.width/2,50));
	m_text = dynamic_cast<Text *>(rootNode->getChildByName("Text_1"));
	m_img = dynamic_cast<ImageView *>(rootNode->getChildByName("Image_1"));

	return true;
}
Scene * lodingScene::creatlodingScene()
{
	auto scene = Scene::create();
	auto layer = lodingScene::create();
	scene->addChild(layer);
	return scene;

}

void lodingScene::buttonEvent(Ref* pSender, Widget::TouchEventType type)
{
	if (type != Widget::TouchEventType::ENDED)return;
	m_text->setString("WellCome Hero");
	this->stopAllActions();
	auto scene = MainScene::createMainScene();
	Director::getInstance()->replaceScene(TransitionCrossFade::create(2,scene));
}