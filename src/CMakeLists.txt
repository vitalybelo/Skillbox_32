cmake_minimum_required(VERSION 3.24)

add_executable(
        Skillbox_32
        main.cpp
        use_lib.cpp
        solution_1.cpp
        solution_2.cpp
)

target_include_directories(Skillbox_32 PUBLIC ${INCLUDE_DIR})

target_link_libraries(Skillbox_32 PRIVATE nlohmann_json::nlohmann_json)