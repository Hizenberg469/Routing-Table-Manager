set( RT_SRC
	"routing-table.c")

set( RT_HEADER
	"routing-table.h")


add_library( ${RT_NAME} STATIC
			${RT_SRC}
			${RT_HEADER})

target_include_directories( ${RT_NAME} PUBLIC
							"./"
							)

target_link_libraries( ${RT_NAME} PUBLIC
						${DLL_NAME})