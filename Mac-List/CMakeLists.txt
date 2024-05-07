set(MAC_LIST_SRC 
		"mac-list.c")

set(MAC_LIST_HEADER
		"mac-list.h")

add_library( ${ML_NAME} STATIC
				${MAC_LIST_SRC}
				${MAC_LIST_HEADER})

target_include_directories( ${ML_NAME} PUBLIC
							"./")

target_link_libraries( ${ML_NAME} PUBLIC
						${DLL_NAME}
						${RT_NAME})