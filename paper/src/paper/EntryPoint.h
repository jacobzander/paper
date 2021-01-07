#pragma once
#ifdef HZ_PLATFORM_WINDOWS

extern Paper::Application* Paper::CreateApplication();

int main(int argc, char** argv) {
	printf("Hazel Engine\n");
	auto app = Paper::CreateApplication();
	app->Run();
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS
