# CMakeList.txt: проект CMake для ProjectCM; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
set(ALL_FILES
    src/main.cpp
    src/classShape.cpp
    src/classTriangle.cpp
    src/classRectangle.cpp
    src/classColoredRectangle.cpp
    src/classColoredTriangle.cpp
    src/classColorShape.cpp
    include/classShape.h
    include/classTriangle.h
    include/classRectangle.h
    include/classColoredRectangle.h
    include/classColoredTriangle.h
    include/classColorShape.h
)
foreach(file ${ALL_FILES})
    if(NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${file})
        message(FATAL_ERROR "Source/Header file not found for ProjectCM: ${file}")
    endif()
endforeach()

# Добавьте источник в исполняемый файл этого проекта.
add_executable (ProjectCM src/main.cpp)

target_sources(ProjectCM PRIVATE
    src/classShape.cpp
    src/classTriangle.cpp
    src/classRectangle.cpp
    src/classColoredTriangle.cpp
    src/classColoredRectangle.cpp
    src/classColorShape.cpp
)
target_include_directories(ProjectCM PRIVATE include/)


if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ProjectCM PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
