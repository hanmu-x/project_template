
#include "studio_macros.h"
#include "config/module_a_config.h"

#include <filesystem>

int main()
{
    module_a_config config;
#ifndef NDEBUG
	std::string configPath = "../../../../config/config.json";
#else
	std::string configPath = "./config/config.json";
#endif
    if (module_a_config::sample().read_config(configPath))
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