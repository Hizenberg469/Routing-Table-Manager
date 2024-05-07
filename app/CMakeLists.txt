set(CLIENT 
	"client.c")
set(SERVER
	"server.c")
set(SHM_TABLE
	"shm_ip.c")


add_executable( client 
				${CLIENT}
				${SHM_TABLE})
add_executable( server
				${SERVER}
				${SHM_TABLE})

target_link_libraries( client PUBLIC
							${DLL_NAME}
							${ML_NAME}
							${RT_NAME}
							${SM_NAME})

target_link_libraries( server PUBLIC
							${DLL_NAME}
							${ML_NAME}
							${RT_NAME}
							${SM_NAME})
