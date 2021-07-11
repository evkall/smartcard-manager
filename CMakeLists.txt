cmake_minimum_required(VERSION 3.0.0)
project(smartcard-manager VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_PREFIX_PATH "
    C:/Users/evkal/dev/vcpkg/installed/x64-mingw-static/share;
    C:/Program Files (x86)/Windows Kits/10/Lib/10.0.19041.0/um/x64
")

find_package(CLI11 CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)
find_library(WINSCARD NAMES winscard REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE CLI11::CLI11)
target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt)
target_link_libraries(${PROJECT_NAME} PRIVATE WINSCARD)
