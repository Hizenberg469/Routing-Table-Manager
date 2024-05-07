set( DLL_SOURCE 
		"dll.c")

set( DLL_HEADER
		"dll.h")

set( TEST_EXE 
	 "main.c")

add_library( ${DLL_NAME} STATIC
				${DLL_SOURCE}
				${DLL_HEADER})

if( DLL_TESTING )
	add_executable( testDll 
					${TEST_EXE})

	target_include_directories( testDll PUBLIC
								"./")
endif()

target_include_directories( ${DLL_NAME} PUBLIC
							"./"  #for files on same path as this CMakeLists.txt file.
							) 

