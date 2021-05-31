cmake_minimum_required(VERSION 3.8)
project(01-HelloWorld)

include_directories(
    "/usr/include"
)

add_executable(
    ${PROJECT_NAME}
    main.cpp
)
