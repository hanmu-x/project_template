
#include "studio_macros.h"
#include "config/config.hpp"

#include <filesystem>

int main()
{
	Config config;
#ifndef NDEBUG
	std::string configPath = "../../../../config/config.json";
#else
	std::string configPath = "./config/config.json";
#endif
    if (config.read_config(configPath))
    {
        std::cout << "Read config file succession " << std::endl;
    }
    else
    {
        std::cout << "ERROR : Failed to read config file " << std::endl;
        return 1;
    }


	return 0;
}