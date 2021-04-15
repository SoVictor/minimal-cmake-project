project(MinimalCMakeProject)
cmake_minimum_required(VERSION 3.19.1)

set(HEADERS
    include/a.h
    include/b.h
)

set(SOURCES
    src/a.cpp
    src/b.cpp
    src/main.cpp
)

add_executable(demo ${SOURCES} ${HEADERS})
target_include_directories(demo PUBLIC include)
