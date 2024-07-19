cmake_minimum_required (VERSION 3.15)

project(example_pro CXX)


add_executable(${PROJECT_NAME}  "main.cpp" )

target_link_libraries(${PROJECT_NAME} PUBLIC core_lib)








