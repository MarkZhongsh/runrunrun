#ifndef TOLLGATESCENE_H_H_
#define TOLLGATESCENE_H_H_

#include "cocos2d.h"
#include "Player.h"

class TollgateScene : public cocos2d::CCLayer
{
public:
	CREATE_FUNC(TollgateScene);
	bool init();
	static cocos2d::CCScene* scene();
	void addPlayer(cocos2d::CCTMXTiledMap *map);
private:
	Player *m_player;
};
#endif
