#ifndef ENTITY_H_H_
#define ENTITY_H_H_

#include "cocos2d.h"

class Entity : public cocos2d::CCNode
{
public:
	void bindSprite(cocos2d::CCSprite *pSprite);
private:
	cocos2d::CCSprite *pSprite;
};
#endif
