cmake_minimum_required (VERSION 3.0.0)
project (OTIS) 

# Search for directories simular to "trunk/ii0xxyy/task_0x/src/"
file(GLOB V_GLOB RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "trunk/ii0*/*/src/")
foreach(item ${V_GLOB})	
	message( "Find \"${item}\"" )
	add_subdirectory(${item})
endforeach()
