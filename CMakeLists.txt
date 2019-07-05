cmake_minimum_required(VERSION 3.13)
project(untitled2)

set(CMAKE_CXX_STANDARD 14)
set (CMAKE_PREFIX_PATH "C:\\QT\\5.12.1\\mingw73_64")
find_package(Qt5Core CONFIG REQUIRED)
find_package(Qt5Widgets CONFIG REQUIRED)
add_executable(untitled2 main.cpp Players.cpp Players.h Team.cpp Team.h Contract.cpp Contract.h Competition.cpp Competition.h Game.cpp Game.h PlayerTeam.cpp PlayerTeam.h Transfer.cpp Transfer.h PlayerGame.cpp PlayerGame.h Juego.cpp Juego.h)

target_link_libraries(untitled2 Qt5::Widgets Qt5::Core  )
set (CMAKE_PREFIX_PATH "C:\\SQLite")

include_directories(${SQLITE3_INCLUDE_DIRS})
target_link_libraries (untitled2 ${SQLITE3_LIBRARIES})