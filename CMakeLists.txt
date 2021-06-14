cmake_minimum_required(VERSION 3.0.0)
project(smartcard-manager VERSION 0.1.0)

# set(VCPKG_TARGET_TRIPLET "x64-mingw-static")
set(CMAKE_PREFIX_PATH "C:/Users/evkal/dev/vcpkg/installed/x64-mingw-static/share")

find_package(CLI11 CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE CLI11::CLI11)
target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt)
