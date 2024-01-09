#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Config
{
public:
	Config(std::string filename);
	

private:
	// Windows config variables
	std::string title = "none";
	unsigned int window_width = 800;
	unsigned int window_height = 600;
	unsigned int framerate_limit = 60;
	bool verticaal_sync_enabled = false;

};

