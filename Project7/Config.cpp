#include "Config.h"

Config::Config(std::string filename)
{

	std::ifstream ifs;
	ifs.exceptions(std::ifstream::badbit | std::ifstream::failbit);

	try
	{
		ifs.open(filename);
		std::getline(ifs, title);
		ifs >> window_width;
		ifs >> window_height;
		ifs >> framerate_limit;
		ifs >> verticaal_sync_enabled;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << " fail open file\n";
	}

	ifs.close();

}

std::string Config::GetTitle()
{
	return title;
}

unsigned int Config::GetWindowWidth()
{
	return window_width;
}

unsigned int Config::GetWindowHeight()
{
	return window_height;
}

unsigned int Config::GetFramerateLimit()
{
	return framerate_limit;
}

bool Config::GetVerticaalSyncEnabled()
{
	return verticaal_sync_enabled;
}
