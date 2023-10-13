# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.0)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("GameEngine-64Bit")

# Locate external dependencies
set(SFML_DIR "${CMAKE_SOURCE_DIR}/Packages/SFML-2.5.1/lib/cmake/SFML")
set(SFML_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/Packages/SFML-2.5.1/include")
set(SFML_LIBRARY_DIR "${CMAKE_SOURCE_DIR}/Packages/SFML-2.5.1/lib")

find_package(SFML 2.5 COMPONENTS system window graphics audio REQUIRED)

# Include the header files from the engine and the SFML include directory
include_directories(
    ${CMAKE_SOURCE_DIR}/src/Engine
    ${SFML_INCLUDE_DIR}
)

# Include sub-projects (with their CMakeLists)
add_subdirectory ("src/Engine")
add_subdirectory ("src/Game")