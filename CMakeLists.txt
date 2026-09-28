cmake_minimum_required(VERSION 3.10)

project(OOP_26)

set(HEADERS
    "include"
)

set(SRC 
    "src/main.cpp"
    "src/Employee.cpp"
)

add_executable(${PROJECT_NAME} ${SRC})
target_include_directories(${PROJECT_NAME} PUBLIC ${HEADERS})
