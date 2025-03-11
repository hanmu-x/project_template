
#ifndef MODULE_A_CONFIG_H
#define MODULE_A_CONFIG_H

#include "project_marco.h"

/// <summary>
/// 配置模块A
/// </summary>
class module_a_config :public studio_singleton<module_a_config>
{
public:
	bool read_config(const std::string& path)
	{
		return true;
	}
};



#endif //MODULE_A_CONFIG_H
