#ifndef SYNC_H
#define SYNC_H

#include "routing-table.h"
#include "mac-list.h"


/*
* Synchronization protocol constants, structure,
* and API definitions.
*/

#define SOCKET_NAME "AdminNetworkSocket"

#define WAIT 0
#define RT 1
#define ML 2

typedef struct dll_ dll_t;

typedef enum {
	
	CREATE,
	UPDATE,
	DELETE,
	NONE // indicate that all current updates from server have been processed
}OPCODE;


/*
* Specifies whether we're dealing with L3 (IP routing table) or L2 (MAC address list)
*/

typedef enum {
	L3,
	L2
} LCODE;

typedef struct sync_msg_ {

	OPCODE op_code;
	LCODE l_code;
	union {
		routing_table_entry_t routing_table_entry;
		mac_list_entry_t mac_list_entry;
	}msg_body;
}sync_msg_t;

void process_sync_mesg(dll_t* dll, sync_msg_t* sync_msg);
extern int get_IP(const char* mac, char* ip);

#endif