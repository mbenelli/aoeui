cmake_minimum_required (VERSION 3.5)

project (aoeui)

#set(CMAKE_C_FLAGS "-Wall")
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/help)

add_executable (aoeui
	main.c
	mem.c
	die.c
	display.c
	text.c
	file.c
	locus.c
	buffer.c
	undo.c
	utf8.c
	window.c
	util.c
	clip.c
	mode.c
	search.c
	child.c
	bookmark.c
	help.c
	find.c
	tags.c
	tab.c
	fold.c
	macro.c
	keyword.c
)
target_link_libraries(aoeui util)

add_executable (display-test
	display-test.c
	display.c
	mem.c
	utf8.c
)
