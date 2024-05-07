# CMakeList.txt : CMake project for Routing_Table_Manager, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project(RTM VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_C_STANDARD          17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS        OFF)

set(DLL_NAME Dll)
set(ML_NAME Mac_List)
set(RT_NAME Rounting_Table)
set(SM_NAME Sync_Message)


option( DLL_TESTING "if to check the integrity of doubly linked list library." OFF)

add_subdirectory(DLL)
add_subdirectory(Mac-List)
add_subdirectory(Routing-Table)
add_subdirectory(Sync)
add_subdirectory(app)



# TODO: Add tests and install targets if needed.
