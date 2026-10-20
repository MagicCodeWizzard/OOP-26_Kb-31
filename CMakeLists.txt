cmake_minimum_required(VERSION 3.10)

project(OOP_26)

set(HEADERS
    "include"
    "include/inheritance"
)

set(SRC 
    "src/main.cpp"
    "src/Employee.cpp"
    "src/User.cpp"
    "src/Account.cpp"
    "src/inheritance/Point.cpp"
    "src/inheritance/Figure.cpp"
    "src/inheritance/Circle.cpp"
)

add_executable(${PROJECT_NAME} ${SRC})
target_include_directories(${PROJECT_NAME} PUBLIC ${HEADERS})
