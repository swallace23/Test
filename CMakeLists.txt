cmake_minimum_required(VERSION 3.15)
project(Test LANGUAGES CXX)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

add_executable(Test src/main.cpp)
target_link_libraries(Test PRIVATE sfml-graphics)
target_compile_features(Test PRIVATE cxx_std_17)

install(TARGETS Test)
