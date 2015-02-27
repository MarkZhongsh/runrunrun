#include "TollgateScene.h"

USING_NS_CC;

bool TollgateScene::init()
{
	CCTMXTiledMap *map = CCTMXTiledMap::create("test.tmx");
	this->addChild(map);
	CCTMXLayer *groundLayer = map->layerNamed("ground");
	this->addPlayer(map);
	return true;
}


CCScene* TollgateScene::scene()
{
	CCScene* scene = CCScene::create();
	CCLayer* tol = TollgateScene::create();
	scene->addChild(tol);
	return scene;
}

void TollgateScene::addPlayer(CCTMXTiledMap *map)
{
	CCSize size = CCDirector::sharedDirector()->getVisibleSize();
	CCSprite *sprite = CCSprite::create("player.jpg");

	m_player = Player::create();
	m_player->bindSprite(sprite);

	m_player->setPosition(ccp(150,size.height/2));

	map->addChild(m_player,3);
}
