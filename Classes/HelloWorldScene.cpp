#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;

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
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

    // add a "close" icon to exit the progress. it's an autorelease object
    auto closeItem = MenuItemImage::create(
                                           "CloseNormal.png",
                                           "CloseSelected.png",
                                           CC_CALLBACK_1(HelloWorld::menuCloseCallback, this));
    
    closeItem->setPosition(Vec2(origin.x + visibleSize.width - closeItem->getContentSize().width/2 ,
                                origin.y + closeItem->getContentSize().height/2));

    // create menu, it's an autorelease object
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu, 1);

    /////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label
    
    auto label = Label::createWithTTF("START!!", "fonts/logotypejp_mp_m_1_1.ttf", 24);
    //auto label = Label::createWithTTF("HelloWorld", "fonts/Marker Felt.ttf", 24);
    
    // position the label on the center of the screen
    label->setPosition(Vec2(origin.x + visibleSize.width/2,
                            origin.y + visibleSize.height/2));

    // add the label as a child to this layer
    this->addChild(label, 1);



    // 鳥が歩くアニメーション
    
    auto sprite = Sprite::createWithSpriteFrameName("chara/chara01/back_stand.png");
    sprite->setPosition(Vec2(origin.x + visibleSize.width/2,
                            origin.y + visibleSize.height/2));
    this->addChild(sprite);
     
    auto cache = CCSpriteFrameCache::getInstance();
    cache->addSpriteFramesWithFile("anime.plist");
    auto _animation = Animation::create();
    for (int i=0; i<2; i++) {
             
        auto str = __String::createWithFormat("chara/chara01/back_walk%i.png",i);
        SpriteFrame *sprite = cache->getSpriteFrameByName(str->getCString());
        _animation->addSpriteFrame(sprite);
             
        }
         
         
    _animation->setDelayPerUnit(0.9f);
    _animation->setRestoreOriginalFrame(true);
         
    auto action = Animate::create(_animation);
    auto anime  = RepeatForever::create(action);
    sprite->runAction(anime);


/*

    // add "HelloWorld" splash screen"
    //auto sprite = Sprite::create("HelloWorld.png");
    auto sprite = Sprite::create("chara/chara01/back_walk0.png");



    // position the sprite on the center of the screen
    sprite->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

    // add the sprite as a child to this layer
    this->addChild(sprite, 0);
    */

    return true;
}


void HelloWorld::menuCloseCallback(Ref* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
