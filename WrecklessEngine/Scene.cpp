#include "Scene.h"
#include "Entity.h"
#include "Components.h"
#include "InputOutputStream.h"
#include "Manipulators.h"

namespace ECS
{
	Scene::Scene(const std::string& name)
		: m_Name(name)
	{
	}
	Scene::~Scene()
	{
		IO::cout << m_Name << " has been destroyed" << IO::endl;
	}
	std::string Scene::GetName() const noexcept
	{
		return m_Name;
	}
	Entity Scene::CreateEntity(const std::string& name)
	{
		Entity entity(m_Registry.create(), this);
		//entity.AddComponent<TransformComponent>();
		auto& tag = entity.AddComponent<TagComponent>("Dickson");
		return entity;
	}
	Entity Scene::GetEntityByIndex(entt::entity handle)
	{
		WRECK_ASSERT(EntityExists(handle), "Entity doesn't exists");
		return Entity(handle, this);
	}
	bool Scene::EntityExists(entt::entity handle) const
	{
		return m_Registry.valid(handle);
	}
	void Scene::OnUpdate()
	{
		auto view = m_Registry.view<ScriptComponent>();
		for (const auto& sc : view)
		{
			ScriptComponent& ent = view.get<ScriptComponent>(sc);
			ent.Update();
		}
	}
}