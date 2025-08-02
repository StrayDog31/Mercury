#pragma once

#ifdef MC_PLATFORM_WINDOWS

extern Mercury::Application* Mercury::CreateApplication();

int main(int argc, char** argv) {

	auto game = Mercury::CreateApplication();
	game->Run();
	delete game;
	return 0;
}

#endif // MC_PLATFORM_WINDOWS
