cmake_minimum_required(VERSION 3.15)

project(example_project)

include(CheckIncludeFileCXX)

# 判断当前目录是否为 cmake的根目录,如果不是,则是被其他项目引用的,不需要编译测试,工具模块
if ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_CURRENT_SOURCE_DIR}")
    set(AIO_PROJECT TRUE)
    set(AIO_LIB FALSE)
else ()
    set(AIO_PROJECT FALSE)
    set(AIO_LIB TRUE)
endif ()

if (AIO_PROJECT)

    # 设置默认程序根目录,程序中所有路径均参照此路径,方便调试和发布
    if (IS_DEBUG)
        add_definitions("-DDEFAULT_ROOT_DIR=\"${CMAKE_CURRENT_SOURCE_DIR}\"")
    else ()
        # add_definitions("-DDEFAULT_ROOT_DIR=\"\"")
        add_definitions("-DDEFAULT_ROOT_DIR=\"${CMAKE_CURRENT_SOURCE_DIR}\"")
    endif ()

    add_definitions("-DDEFAULT_DATA_DIR=\"${CMAKE_CURRENT_SOURCE_DIR}/data\"")
    set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake;${CMAKE_MODULE_PATH}")
    include(env_check)

endif ()


# 头文件
include(all_in_one)
include_directories("all_in_one/core")

# 添加core目录下的头文件到项目
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/core)


# 添加目录
add_subdirectory(core)  # core代码
add_subdirectory(src)   # 主函数










