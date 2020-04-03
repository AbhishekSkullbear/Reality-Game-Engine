#pragma once
#include "ECSConfig.h"
#include "BuoyancyComponent.h"
#include "TransformComponentV2.h"

namespace Reality
{
	class BuoyancySystem : public ECSSystem
	{
	public:
		BuoyancySystem();
		void Update(float deltaTime);
	};
}