  #include "HelloWorldScene.h"

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
  
    if ( !Layer::init() )
    {
        return false;
    }
    
    auto rootNode = CSLoader::createNode("MainScene.csb");

    addChild(rootNode);
	/*
		cocostudio 中的ui控件获取对应于cocos中的ui系统
	*/


	auto btn = dynamic_cast<Button*>(rootNode->getChildByName("Button_1"));
	btn->addTouchEventListener(CC_CALLBACK_2(HelloWorld::btnEvent,this));
	m_txt = dynamic_cast<Text *>(rootNode->getChildByName("Text_1"));
	m_img = dynamic_cast<ImageView *>(rootNode->getChildByName("Image_1"));
    return true;
}

void HelloWorld::btnEvent(Ref* pSender, Widget::TouchEventType type)
{
	if (type != Widget::TouchEventType::ENDED) return;
	m_txt->setText("my name is hexiagen. i am is a small bird");
	m_img->setScale(5);
}
