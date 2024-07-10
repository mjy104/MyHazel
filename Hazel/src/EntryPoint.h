#pragma once

#ifdef  HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc,char** argv)
{
	Hazel::Log::Init();
	Hazel::Log::GetCoreLogger()->warn("hello console");
	Hazel::Log::GetClientLogger()->info("hello client");

	auto app = Hazel::CreateApplication();
	app->run();
	delete app;
}

#endif //  HZ_PLATFORM_WINDOWS
