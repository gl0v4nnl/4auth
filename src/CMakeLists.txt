cmake_minimum_required(VERSION 2.8)
project(plug-key)

add_executable(main
	main.c
)

target_link_libraries(
	plug-simple helper
)