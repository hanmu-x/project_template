
#include "project.h"
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

    std::filesystem::path data_1(DEFAULT_DATA_DIR);
    data_1 += "/geo_db/example6.db";

	tool_class tc;


	return 0;
}