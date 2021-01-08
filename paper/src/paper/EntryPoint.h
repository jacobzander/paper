#pragma once
#ifdef PA_PLATFORM_WINDOWS

extern Paper::Application* Paper::CreateApplication();

int main(int argc, char** argv) 
{
	Paper::Log::Init();
	PA_CORE_WARN("Initalized Log!");

	PA_INFO("Hello!");
	auto app = Paper::CreateApplication();
	app->Run();
	delete app;
}

#endif // PA_PLATFORM_WINDOWS
