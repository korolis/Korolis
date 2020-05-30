#pragma once

#ifdef KLS_PLATFORM_WINDOWS

extern kls::Application* kls::CreateApplication();

int main(int argc, char** argv)
{
	kls::Application* app = kls::CreateApplication();
	app->Run();
	
	delete app;
}

#endif