#pragma once

#include "Core.h"

namespace kls
{
	class KLS_API Application
	{
	public:

		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}