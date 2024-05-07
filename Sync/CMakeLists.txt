set(SYNC_SRC
		"sync.c")
set(SYNC_HEADER
		"sync.h")

add_library( ${SM_NAME} STATIC
			 ${SYNC_SRC}
			 ${SYNC_HEADER})

target_include_directories( ${SM_NAME} PUBLIC
							"./")

target_link_libraries( ${SM_NAME} PUBLIC
						${ML_NAME}
						${RT_NAME})