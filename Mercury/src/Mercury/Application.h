#pragma once

#include "Core.h"

namespace Mercury {


	class MERCURY_API Application
	{

	public:
		Application();
		~Application();

		void Run();
	};

	Application* CreateApplication();
}

