
include(FetchContent)

# FetchContent_MakeAvailable was not added until CMake 3.14
if (${CMAKE_VERSION} VERSION_LESS 3.15)
    include(add_FetchContent_MakeAvailable.cmake)
endif ()

set(SOURCE_DIR "${SU_DIRECTORY}")

set(SILLY_UTIL_TAG main)  # 确保这里设置为你想使用的分支名或标签

set(ALL_IN_ONE_GIT_URL "https://gitee.com/master-turtle/all_in_one.git")

FetchContent_Declare(
        all_in_one
        GIT_REPOSITORY ${ALL_IN_ONE_GIT_URL}
        GIT_TAG ${SILLY_UTIL_TAG}  # 明确指定GIT_TAG参数
        SOURCE_DIR ${PROJECT_SOURCE_DIR}/all_in_one
)

FetchContent_MakeAvailable(all_in_one)