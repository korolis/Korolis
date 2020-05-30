#include <Korolis.h>

class Sandbox : public kls::Application
{
public:

	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

kls::Application* kls::CreateApplication()
{
	return new Sandbox();
}