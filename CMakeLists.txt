cmake_minimum_required(VERSION 3.3)
project(Wizard_game)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    areyoulucky.cpp
    areyoulucky.h
    game.cpp
    game.h
    main.cpp
    multiriddleman.cpp
    multiriddleman.h
    opponent.cpp
    opponent.h
    person.cpp
    person.h
    riddleman.cpp
    riddleman.h
    wizard.cpp
    wizard.h)

include_directories(.)

add_executable(Wizard_game ${SOURCE_FILES})