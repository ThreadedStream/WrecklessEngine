#pragma once
#include "Bindable.h"
#include "IShader.h"	

namespace Bindable
{
	class VertexShader : public IBindable
	{
	public:
		VertexShader(const std::string& path);

		virtual void Bind() noxnd override;

		void* GetByteCode() const noexcept;

		static Ref<VertexShader> Resolve(const std::string& path);
		static std::string GenerateUID(const std::string& path);
		virtual std::string GetUID() const noexcept override;
	protected:
		std::string m_Path;
		Ref<Graphics::IVertexShader> m_pShader;
	};
}