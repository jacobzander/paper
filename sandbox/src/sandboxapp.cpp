#include <Paper.h>

class Sandbox : public Paper::Application
{
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

void main() {
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
}