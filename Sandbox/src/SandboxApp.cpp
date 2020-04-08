#include <BlueLeaf.h>

class Sandbox : public BlueLeaf::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

BlueLeaf::Application* BlueLeaf::CreateApplication()
{
	return new Sandbox();
}