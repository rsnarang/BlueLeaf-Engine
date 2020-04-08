#pragma once

#ifdef BL_PLATFORM_WINDOWS

extern BlueLeaf::Application* BlueLeaf::CreateApplication();

int main(int argc, char** argv)
{
	auto app = BlueLeaf::CreateApplication();
	app->Run();
	delete app;
}

#endif