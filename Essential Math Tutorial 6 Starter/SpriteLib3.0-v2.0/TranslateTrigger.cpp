#include "TranslateTrigger.h"
#include "ECS.h"

void TranslateTrigger::OnTrigger()
{
	Trigger::OnTrigger();
}

void TranslateTrigger::OnEnter()
{
	Trigger::OnEnter();
	for (int i = 0; i < m_targetEntities.size(); i++)
	{
		ECS::GetComponent<PhysicsBody>(m_targetEntities[i]).SetPosition(movement, true);
		//ECS::GetComponent<PhysicsBody>(m_targetEntities[i]).ScaleBody(100.f, 0.f);
		//scalingPuzzleBridge.ScaleBody(100.f, 100.f);
	}
}

void TranslateTrigger::OnExit()
{
	Trigger::OnExit();
}
