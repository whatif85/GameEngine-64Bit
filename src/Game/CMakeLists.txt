# Add your game sources
set(GAME_SOURCES
    "GameMain.cpp"
)

# CMakeLists.txt in the 'Game' directory
add_executable(GameExecutable "GameMain.cpp")

# Set the output directory for your game executable
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

# Link the Engine library (Engine) and the required SFML libraries
target_link_libraries(GameExecutable Engine)