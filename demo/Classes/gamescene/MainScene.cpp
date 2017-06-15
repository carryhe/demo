#include "gamescene/MainScene.h"

MainScene::MainScene()
{
}


MainScene::~MainScene()
{
}
Scene* MainScene::createMainScene()
{
	auto scene = Scene::create();
	auto layer = MainScene::create();
	scene->addChild(layer);
	return scene;
}
bool MainScene::init()
{
	if (!Layer::init())
	{
		return false;
	}
	auto layer = LayerColor::create(Color4B::BLUE);
	this->addChild(layer);
	return true;
}