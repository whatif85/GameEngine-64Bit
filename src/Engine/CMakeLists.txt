include_directories(
    ${CMAKE_SOURCE_DIR}/src/Engine
    ${SFML_INCLUDE_DIR}
)

# Set the output directory for archive files
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

add_library(Engine STATIC
    "Engine.h"
    "Engine.cpp"
)

target_link_libraries(Engine
    sfml-audio
    sfml-graphics
    sfml-window
    sfml-system
)