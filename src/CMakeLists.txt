cmake_minimum_required (VERSION 3.15)

project(pro_main CXX)

add_subdirectory(tool_dir_name)

link_libraries(tool_lib_name)


add_executable(${PROJECT_NAME}  "main.cpp" )

#target_link_libraries(${PROJECT_NAME} PUBLIC sutils)






