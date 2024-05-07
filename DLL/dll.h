#ifndef DLL_H
#define DLL_H
	
/*
* Data Structure definations for
* generic cicular doubly linked
* list.
*/

typedef struct dll_node_ {

	void* data;
	struct dll_node_* next;
	struct dll_node_* prev;

}dll_node_t;

typedef struct dll_ {
	
	dll_node_t* head;
	dll_node_t* tail;

}dll_t;

/*
* DLL API'S
*/

dll_t* init_dll();

void append(dll_t* dll, void* data);

void del(dll_t* dll, dll_node_t* node);

void deinit_dll(dll_t* dll);

#define ITERATE_DLL( dll, data_ptr, struct_type ) { \
	dll_node_t* c_ptr = dll->head->next;    \
	while( c_ptr != dll->head ){		\
		struct_type* data_ptr = (struct_type* )c_ptr->data;	\
		c_ptr = c_ptr->next;

#define ITERATE_DLL_END() }}



#endif