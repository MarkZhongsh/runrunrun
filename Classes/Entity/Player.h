#ifndef	PLAYER_H_H_
#define PLAYER_H_H_

#include "cocos2d.h"
#include "Entity.h"

class Player : public Entity
{
public:
	CREATE_FUNC(Player);
	virtual bool init();
};
#endif
