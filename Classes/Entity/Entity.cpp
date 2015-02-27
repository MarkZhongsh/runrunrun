#include "Entity.h"

USING_NS_CC;

void Entity::bindSprite(CCSprite *pSprite)
{
	if(!pSprite)
		return ;
	if(this->pSprite)
		CC_SAFE_DELETE(this->pSprite);
	this->pSprite = pSprite;
	this->addChild(pSprite);
}
