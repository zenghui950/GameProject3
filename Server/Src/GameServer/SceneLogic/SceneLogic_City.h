﻿#ifndef _SCENELOGIC_CITY_H_
#define _SCENELOGIC_CITY_H_
#include "SceneLogic_Base.h"

class SceneLogic_City : public SceneLogicBase
{
public:
	SceneLogic_City(CScene *pScene);
	
	~SceneLogic_City();
public:
	virtual BOOL OnObjectCreate(CSceneObject *pPlayer);

	virtual BOOL OnObjectDie(CSceneObject *pPlayer);

	virtual BOOL OnPlayerEnter(CSceneObject *pPlayer);

	virtual BOOL OnPlayerLeave(CSceneObject *pPlayer);

	virtual BOOL Update(UINT32 dwTick);

};

#endif //_SCENELOGIC_CITY_H_


