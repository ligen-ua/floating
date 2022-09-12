project(floating-tests LANGUAGES CXX)

include_directories("../floating")


if (UNIX)
    list(APPEND PLATFORM_LIST main_unix.cpp)
else()
    list(APPEND PLATFORM_LIST main_win.cpp)
endif()

add_executable(${PROJECT_NAME} 
    ${PLATFORM_LIST}
    tests.cpp
)

set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)

add_test (NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})