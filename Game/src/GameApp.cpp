#include <Mercury.h>

class Game : public Mercury::Application {

public:
	Game() {}
	~Game() {}
};

Mercury::Application* Mercury::CreateApplication() {

	return new Game();
}