#pragma once

#include "Core.h"

namespace BlueLeaf {

	class BLUELEAF_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}
