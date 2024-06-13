
/* Generated file by ./cmd/codegen, don't edit it directly. */

#include <stdlib.h>
#include "pjrt_c_api.h"
#include "common.h"

// new_PJRT_Api_Version allocates a C.PJRT_Api_Version structure, sets its .struct_size, and returns it.
// The plugin should set the major_version and minor_version of
// PJRT_Api.pjrt_api_version to be the `PJRT_API_MAJOR` and `PJRT_API_MINOR` in
// this header that the implementation was compiled with.
PJRT_Api_Version* new_PJRT_Api_Version() {
	PJRT_Api_Version* p = malloc(sizeof(PJRT_Api_Version));
	p->struct_size = PJRT_Api_Version_STRUCT_SIZE;
	return p;
}

// new_PJRT_Error_Destroy_Args allocates a C.PJRT_Error_Destroy_Args structure, sets its .struct_size, and returns it.
PJRT_Error_Destroy_Args* new_PJRT_Error_Destroy_Args() {
	PJRT_Error_Destroy_Args* p = malloc(sizeof(PJRT_Error_Destroy_Args));
	p->struct_size = PJRT_Error_Destroy_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Error_Message_Args allocates a C.PJRT_Error_Message_Args structure, sets its .struct_size, and returns it.
PJRT_Error_Message_Args* new_PJRT_Error_Message_Args() {
	PJRT_Error_Message_Args* p = malloc(sizeof(PJRT_Error_Message_Args));
	p->struct_size = PJRT_Error_Message_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Error_GetCode_Args allocates a C.PJRT_Error_GetCode_Args structure, sets its .struct_size, and returns it.
PJRT_Error_GetCode_Args* new_PJRT_Error_GetCode_Args() {
	PJRT_Error_GetCode_Args* p = malloc(sizeof(PJRT_Error_GetCode_Args));
	p->struct_size = PJRT_Error_GetCode_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_NamedValue allocates a C.PJRT_NamedValue structure, sets its .struct_size, and returns it.
// Named value for key-value pairs.
PJRT_NamedValue* new_PJRT_NamedValue() {
	PJRT_NamedValue* p = malloc(sizeof(PJRT_NamedValue));
	p->struct_size = PJRT_NamedValue_STRUCT_SIZE;
	return p;
}

// new_PJRT_Plugin_Initialize_Args allocates a C.PJRT_Plugin_Initialize_Args structure, sets its .struct_size, and returns it.
PJRT_Plugin_Initialize_Args* new_PJRT_Plugin_Initialize_Args() {
	PJRT_Plugin_Initialize_Args* p = malloc(sizeof(PJRT_Plugin_Initialize_Args));
	p->struct_size = PJRT_Plugin_Initialize_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Plugin_Attributes_Args allocates a C.PJRT_Plugin_Attributes_Args structure, sets its .struct_size, and returns it.
PJRT_Plugin_Attributes_Args* new_PJRT_Plugin_Attributes_Args() {
	PJRT_Plugin_Attributes_Args* p = malloc(sizeof(PJRT_Plugin_Attributes_Args));
	p->struct_size = PJRT_Plugin_Attributes_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Event_Destroy_Args allocates a C.PJRT_Event_Destroy_Args structure, sets its .struct_size, and returns it.
PJRT_Event_Destroy_Args* new_PJRT_Event_Destroy_Args() {
	PJRT_Event_Destroy_Args* p = malloc(sizeof(PJRT_Event_Destroy_Args));
	p->struct_size = PJRT_Event_Destroy_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Event_IsReady_Args allocates a C.PJRT_Event_IsReady_Args structure, sets its .struct_size, and returns it.
PJRT_Event_IsReady_Args* new_PJRT_Event_IsReady_Args() {
	PJRT_Event_IsReady_Args* p = malloc(sizeof(PJRT_Event_IsReady_Args));
	p->struct_size = PJRT_Event_IsReady_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Event_Error_Args allocates a C.PJRT_Event_Error_Args structure, sets its .struct_size, and returns it.
PJRT_Event_Error_Args* new_PJRT_Event_Error_Args() {
	PJRT_Event_Error_Args* p = malloc(sizeof(PJRT_Event_Error_Args));
	p->struct_size = PJRT_Event_Error_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Event_Await_Args allocates a C.PJRT_Event_Await_Args structure, sets its .struct_size, and returns it.
PJRT_Event_Await_Args* new_PJRT_Event_Await_Args() {
	PJRT_Event_Await_Args* p = malloc(sizeof(PJRT_Event_Await_Args));
	p->struct_size = PJRT_Event_Await_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Event_OnReady_Args allocates a C.PJRT_Event_OnReady_Args structure, sets its .struct_size, and returns it.
PJRT_Event_OnReady_Args* new_PJRT_Event_OnReady_Args() {
	PJRT_Event_OnReady_Args* p = malloc(sizeof(PJRT_Event_OnReady_Args));
	p->struct_size = PJRT_Event_OnReady_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_KeyValueGetCallback_Args allocates a C.PJRT_KeyValueGetCallback_Args structure, sets its .struct_size, and returns it.
PJRT_KeyValueGetCallback_Args* new_PJRT_KeyValueGetCallback_Args() {
	PJRT_KeyValueGetCallback_Args* p = malloc(sizeof(PJRT_KeyValueGetCallback_Args));
	p->struct_size = PJRT_KeyValueGetCallback_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_KeyValuePutCallback_Args allocates a C.PJRT_KeyValuePutCallback_Args structure, sets its .struct_size, and returns it.
PJRT_KeyValuePutCallback_Args* new_PJRT_KeyValuePutCallback_Args() {
	PJRT_KeyValuePutCallback_Args* p = malloc(sizeof(PJRT_KeyValuePutCallback_Args));
	p->struct_size = PJRT_KeyValuePutCallback_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Client_Create_Args allocates a C.PJRT_Client_Create_Args structure, sets its .struct_size, and returns it.
PJRT_Client_Create_Args* new_PJRT_Client_Create_Args() {
	PJRT_Client_Create_Args* p = malloc(sizeof(PJRT_Client_Create_Args));
	p->struct_size = PJRT_Client_Create_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Client_Destroy_Args allocates a C.PJRT_Client_Destroy_Args structure, sets its .struct_size, and returns it.
PJRT_Client_Destroy_Args* new_PJRT_Client_Destroy_Args() {
	PJRT_Client_Destroy_Args* p = malloc(sizeof(PJRT_Client_Destroy_Args));
	p->struct_size = PJRT_Client_Destroy_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Client_PlatformName_Args allocates a C.PJRT_Client_PlatformName_Args structure, sets its .struct_size, and returns it.
PJRT_Client_PlatformName_Args* new_PJRT_Client_PlatformName_Args() {
	PJRT_Client_PlatformName_Args* p = malloc(sizeof(PJRT_Client_PlatformName_Args));
	p->struct_size = PJRT_Client_PlatformName_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Client_ProcessIndex_Args allocates a C.PJRT_Client_ProcessIndex_Args structure, sets its .struct_size, and returns it.
PJRT_Client_ProcessIndex_Args* new_PJRT_Client_ProcessIndex_Args() {
	PJRT_Client_ProcessIndex_Args* p = malloc(sizeof(PJRT_Client_ProcessIndex_Args));
	p->struct_size = PJRT_Client_ProcessIndex_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Client_PlatformVersion_Args allocates a C.PJRT_Client_PlatformVersion_Args structure, sets its .struct_size, and returns it.
PJRT_Client_PlatformVersion_Args* new_PJRT_Client_PlatformVersion_Args() {
	PJRT_Client_PlatformVersion_Args* p = malloc(sizeof(PJRT_Client_PlatformVersion_Args));
	p->struct_size = PJRT_Client_PlatformVersion_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Client_TopologyDescription_Args allocates a C.PJRT_Client_TopologyDescription_Args structure, sets its .struct_size, and returns it.
PJRT_Client_TopologyDescription_Args* new_PJRT_Client_TopologyDescription_Args() {
	PJRT_Client_TopologyDescription_Args* p = malloc(sizeof(PJRT_Client_TopologyDescription_Args));
	p->struct_size = PJRT_Client_TopologyDescription_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Client_Devices_Args allocates a C.PJRT_Client_Devices_Args structure, sets its .struct_size, and returns it.
PJRT_Client_Devices_Args* new_PJRT_Client_Devices_Args() {
	PJRT_Client_Devices_Args* p = malloc(sizeof(PJRT_Client_Devices_Args));
	p->struct_size = PJRT_Client_Devices_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Client_AddressableDevices_Args allocates a C.PJRT_Client_AddressableDevices_Args structure, sets its .struct_size, and returns it.
PJRT_Client_AddressableDevices_Args* new_PJRT_Client_AddressableDevices_Args() {
	PJRT_Client_AddressableDevices_Args* p = malloc(sizeof(PJRT_Client_AddressableDevices_Args));
	p->struct_size = PJRT_Client_AddressableDevices_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Client_LookupDevice_Args allocates a C.PJRT_Client_LookupDevice_Args structure, sets its .struct_size, and returns it.
PJRT_Client_LookupDevice_Args* new_PJRT_Client_LookupDevice_Args() {
	PJRT_Client_LookupDevice_Args* p = malloc(sizeof(PJRT_Client_LookupDevice_Args));
	p->struct_size = PJRT_Client_LookupDevice_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Client_LookupAddressableDevice_Args allocates a C.PJRT_Client_LookupAddressableDevice_Args structure, sets its .struct_size, and returns it.
PJRT_Client_LookupAddressableDevice_Args* new_PJRT_Client_LookupAddressableDevice_Args() {
	PJRT_Client_LookupAddressableDevice_Args* p = malloc(sizeof(PJRT_Client_LookupAddressableDevice_Args));
	p->struct_size = PJRT_Client_LookupAddressableDevice_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Client_AddressableMemories_Args allocates a C.PJRT_Client_AddressableMemories_Args structure, sets its .struct_size, and returns it.
PJRT_Client_AddressableMemories_Args* new_PJRT_Client_AddressableMemories_Args() {
	PJRT_Client_AddressableMemories_Args* p = malloc(sizeof(PJRT_Client_AddressableMemories_Args));
	p->struct_size = PJRT_Client_AddressableMemories_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Program allocates a C.PJRT_Program structure, sets its .struct_size, and returns it.
PJRT_Program* new_PJRT_Program() {
	PJRT_Program* p = malloc(sizeof(PJRT_Program));
	p->struct_size = PJRT_Program_STRUCT_SIZE;
	return p;
}

// new_PJRT_Client_Compile_Args allocates a C.PJRT_Client_Compile_Args structure, sets its .struct_size, and returns it.
PJRT_Client_Compile_Args* new_PJRT_Client_Compile_Args() {
	PJRT_Client_Compile_Args* p = malloc(sizeof(PJRT_Client_Compile_Args));
	p->struct_size = PJRT_Client_Compile_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Client_DefaultDeviceAssignment_Args allocates a C.PJRT_Client_DefaultDeviceAssignment_Args structure, sets its .struct_size, and returns it.
PJRT_Client_DefaultDeviceAssignment_Args* new_PJRT_Client_DefaultDeviceAssignment_Args() {
	PJRT_Client_DefaultDeviceAssignment_Args* p = malloc(sizeof(PJRT_Client_DefaultDeviceAssignment_Args));
	p->struct_size = PJRT_Client_DefaultDeviceAssignment_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_MemoryLayout_Tiled allocates a C.PJRT_Buffer_MemoryLayout_Tiled structure, sets its .struct_size, and returns it.
PJRT_Buffer_MemoryLayout_Tiled* new_PJRT_Buffer_MemoryLayout_Tiled() {
	PJRT_Buffer_MemoryLayout_Tiled* p = malloc(sizeof(PJRT_Buffer_MemoryLayout_Tiled));
	p->struct_size = PJRT_Buffer_MemoryLayout_Tiled_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_MemoryLayout_Strides allocates a C.PJRT_Buffer_MemoryLayout_Strides structure, sets its .struct_size, and returns it.
PJRT_Buffer_MemoryLayout_Strides* new_PJRT_Buffer_MemoryLayout_Strides() {
	PJRT_Buffer_MemoryLayout_Strides* p = malloc(sizeof(PJRT_Buffer_MemoryLayout_Strides));
	p->struct_size = PJRT_Buffer_MemoryLayout_Strides_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_MemoryLayout allocates a C.PJRT_Buffer_MemoryLayout structure, sets its .struct_size, and returns it.
// Describe the memory layout. It can be (1) a list of minor-to-major order and
// optional tilings (each tile is a list of dimensions), or (2) a list of
// strides.
PJRT_Buffer_MemoryLayout* new_PJRT_Buffer_MemoryLayout() {
	PJRT_Buffer_MemoryLayout* p = malloc(sizeof(PJRT_Buffer_MemoryLayout));
	p->struct_size = PJRT_Buffer_MemoryLayout_STRUCT_SIZE;
	return p;
}

// new_PJRT_Client_BufferFromHostBuffer_Args allocates a C.PJRT_Client_BufferFromHostBuffer_Args structure, sets its .struct_size, and returns it.
PJRT_Client_BufferFromHostBuffer_Args* new_PJRT_Client_BufferFromHostBuffer_Args() {
	PJRT_Client_BufferFromHostBuffer_Args* p = malloc(sizeof(PJRT_Client_BufferFromHostBuffer_Args));
	p->struct_size = PJRT_Client_BufferFromHostBuffer_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Client_CreateViewOfDeviceBuffer_Args allocates a C.PJRT_Client_CreateViewOfDeviceBuffer_Args structure, sets its .struct_size, and returns it.
PJRT_Client_CreateViewOfDeviceBuffer_Args* new_PJRT_Client_CreateViewOfDeviceBuffer_Args() {
	PJRT_Client_CreateViewOfDeviceBuffer_Args* p = malloc(sizeof(PJRT_Client_CreateViewOfDeviceBuffer_Args));
	p->struct_size = PJRT_Client_CreateViewOfDeviceBuffer_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_DeviceDescription_Id_Args allocates a C.PJRT_DeviceDescription_Id_Args structure, sets its .struct_size, and returns it.
PJRT_DeviceDescription_Id_Args* new_PJRT_DeviceDescription_Id_Args() {
	PJRT_DeviceDescription_Id_Args* p = malloc(sizeof(PJRT_DeviceDescription_Id_Args));
	p->struct_size = PJRT_DeviceDescription_Id_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_DeviceDescription_ProcessIndex_Args allocates a C.PJRT_DeviceDescription_ProcessIndex_Args structure, sets its .struct_size, and returns it.
PJRT_DeviceDescription_ProcessIndex_Args* new_PJRT_DeviceDescription_ProcessIndex_Args() {
	PJRT_DeviceDescription_ProcessIndex_Args* p = malloc(sizeof(PJRT_DeviceDescription_ProcessIndex_Args));
	p->struct_size = PJRT_DeviceDescription_ProcessIndex_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_DeviceDescription_Attributes_Args allocates a C.PJRT_DeviceDescription_Attributes_Args structure, sets its .struct_size, and returns it.
PJRT_DeviceDescription_Attributes_Args* new_PJRT_DeviceDescription_Attributes_Args() {
	PJRT_DeviceDescription_Attributes_Args* p = malloc(sizeof(PJRT_DeviceDescription_Attributes_Args));
	p->struct_size = PJRT_DeviceDescription_Attributes_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_DeviceDescription_Kind_Args allocates a C.PJRT_DeviceDescription_Kind_Args structure, sets its .struct_size, and returns it.
PJRT_DeviceDescription_Kind_Args* new_PJRT_DeviceDescription_Kind_Args() {
	PJRT_DeviceDescription_Kind_Args* p = malloc(sizeof(PJRT_DeviceDescription_Kind_Args));
	p->struct_size = PJRT_DeviceDescription_Kind_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_DeviceDescription_DebugString_Args allocates a C.PJRT_DeviceDescription_DebugString_Args structure, sets its .struct_size, and returns it.
PJRT_DeviceDescription_DebugString_Args* new_PJRT_DeviceDescription_DebugString_Args() {
	PJRT_DeviceDescription_DebugString_Args* p = malloc(sizeof(PJRT_DeviceDescription_DebugString_Args));
	p->struct_size = PJRT_DeviceDescription_DebugString_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_DeviceDescription_ToString_Args allocates a C.PJRT_DeviceDescription_ToString_Args structure, sets its .struct_size, and returns it.
PJRT_DeviceDescription_ToString_Args* new_PJRT_DeviceDescription_ToString_Args() {
	PJRT_DeviceDescription_ToString_Args* p = malloc(sizeof(PJRT_DeviceDescription_ToString_Args));
	p->struct_size = PJRT_DeviceDescription_ToString_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Device_GetDescription_Args allocates a C.PJRT_Device_GetDescription_Args structure, sets its .struct_size, and returns it.
PJRT_Device_GetDescription_Args* new_PJRT_Device_GetDescription_Args() {
	PJRT_Device_GetDescription_Args* p = malloc(sizeof(PJRT_Device_GetDescription_Args));
	p->struct_size = PJRT_Device_GetDescription_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Device_IsAddressable_Args allocates a C.PJRT_Device_IsAddressable_Args structure, sets its .struct_size, and returns it.
PJRT_Device_IsAddressable_Args* new_PJRT_Device_IsAddressable_Args() {
	PJRT_Device_IsAddressable_Args* p = malloc(sizeof(PJRT_Device_IsAddressable_Args));
	p->struct_size = PJRT_Device_IsAddressable_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Device_LocalHardwareId_Args allocates a C.PJRT_Device_LocalHardwareId_Args structure, sets its .struct_size, and returns it.
PJRT_Device_LocalHardwareId_Args* new_PJRT_Device_LocalHardwareId_Args() {
	PJRT_Device_LocalHardwareId_Args* p = malloc(sizeof(PJRT_Device_LocalHardwareId_Args));
	p->struct_size = PJRT_Device_LocalHardwareId_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Device_AddressableMemories_Args allocates a C.PJRT_Device_AddressableMemories_Args structure, sets its .struct_size, and returns it.
PJRT_Device_AddressableMemories_Args* new_PJRT_Device_AddressableMemories_Args() {
	PJRT_Device_AddressableMemories_Args* p = malloc(sizeof(PJRT_Device_AddressableMemories_Args));
	p->struct_size = PJRT_Device_AddressableMemories_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Device_DefaultMemory_Args allocates a C.PJRT_Device_DefaultMemory_Args structure, sets its .struct_size, and returns it.
PJRT_Device_DefaultMemory_Args* new_PJRT_Device_DefaultMemory_Args() {
	PJRT_Device_DefaultMemory_Args* p = malloc(sizeof(PJRT_Device_DefaultMemory_Args));
	p->struct_size = PJRT_Device_DefaultMemory_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Device_MemoryStats_Args allocates a C.PJRT_Device_MemoryStats_Args structure, sets its .struct_size, and returns it.
PJRT_Device_MemoryStats_Args* new_PJRT_Device_MemoryStats_Args() {
	PJRT_Device_MemoryStats_Args* p = malloc(sizeof(PJRT_Device_MemoryStats_Args));
	p->struct_size = PJRT_Device_MemoryStats_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Memory_Id_Args allocates a C.PJRT_Memory_Id_Args structure, sets its .struct_size, and returns it.
PJRT_Memory_Id_Args* new_PJRT_Memory_Id_Args() {
	PJRT_Memory_Id_Args* p = malloc(sizeof(PJRT_Memory_Id_Args));
	p->struct_size = PJRT_Memory_Id_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Memory_Kind_Args allocates a C.PJRT_Memory_Kind_Args structure, sets its .struct_size, and returns it.
PJRT_Memory_Kind_Args* new_PJRT_Memory_Kind_Args() {
	PJRT_Memory_Kind_Args* p = malloc(sizeof(PJRT_Memory_Kind_Args));
	p->struct_size = PJRT_Memory_Kind_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Memory_Kind_Id_Args allocates a C.PJRT_Memory_Kind_Id_Args structure, sets its .struct_size, and returns it.
PJRT_Memory_Kind_Id_Args* new_PJRT_Memory_Kind_Id_Args() {
	PJRT_Memory_Kind_Id_Args* p = malloc(sizeof(PJRT_Memory_Kind_Id_Args));
	p->struct_size = PJRT_Memory_Kind_Id_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Memory_DebugString_Args allocates a C.PJRT_Memory_DebugString_Args structure, sets its .struct_size, and returns it.
PJRT_Memory_DebugString_Args* new_PJRT_Memory_DebugString_Args() {
	PJRT_Memory_DebugString_Args* p = malloc(sizeof(PJRT_Memory_DebugString_Args));
	p->struct_size = PJRT_Memory_DebugString_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Memory_ToString_Args allocates a C.PJRT_Memory_ToString_Args structure, sets its .struct_size, and returns it.
PJRT_Memory_ToString_Args* new_PJRT_Memory_ToString_Args() {
	PJRT_Memory_ToString_Args* p = malloc(sizeof(PJRT_Memory_ToString_Args));
	p->struct_size = PJRT_Memory_ToString_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Memory_AddressableByDevices_Args allocates a C.PJRT_Memory_AddressableByDevices_Args structure, sets its .struct_size, and returns it.
PJRT_Memory_AddressableByDevices_Args* new_PJRT_Memory_AddressableByDevices_Args() {
	PJRT_Memory_AddressableByDevices_Args* p = malloc(sizeof(PJRT_Memory_AddressableByDevices_Args));
	p->struct_size = PJRT_Memory_AddressableByDevices_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_ExecuteContext_Create_Args allocates a C.PJRT_ExecuteContext_Create_Args structure, sets its .struct_size, and returns it.
PJRT_ExecuteContext_Create_Args* new_PJRT_ExecuteContext_Create_Args() {
	PJRT_ExecuteContext_Create_Args* p = malloc(sizeof(PJRT_ExecuteContext_Create_Args));
	p->struct_size = PJRT_ExecuteContext_Create_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_ExecuteContext_Destroy_Args allocates a C.PJRT_ExecuteContext_Destroy_Args structure, sets its .struct_size, and returns it.
PJRT_ExecuteContext_Destroy_Args* new_PJRT_ExecuteContext_Destroy_Args() {
	PJRT_ExecuteContext_Destroy_Args* p = malloc(sizeof(PJRT_ExecuteContext_Destroy_Args));
	p->struct_size = PJRT_ExecuteContext_Destroy_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Executable_Destroy_Args allocates a C.PJRT_Executable_Destroy_Args structure, sets its .struct_size, and returns it.
PJRT_Executable_Destroy_Args* new_PJRT_Executable_Destroy_Args() {
	PJRT_Executable_Destroy_Args* p = malloc(sizeof(PJRT_Executable_Destroy_Args));
	p->struct_size = PJRT_Executable_Destroy_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_LoadedExecutable_Destroy_Args allocates a C.PJRT_LoadedExecutable_Destroy_Args structure, sets its .struct_size, and returns it.
PJRT_LoadedExecutable_Destroy_Args* new_PJRT_LoadedExecutable_Destroy_Args() {
	PJRT_LoadedExecutable_Destroy_Args* p = malloc(sizeof(PJRT_LoadedExecutable_Destroy_Args));
	p->struct_size = PJRT_LoadedExecutable_Destroy_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_LoadedExecutable_GetExecutable_Args allocates a C.PJRT_LoadedExecutable_GetExecutable_Args structure, sets its .struct_size, and returns it.
PJRT_LoadedExecutable_GetExecutable_Args* new_PJRT_LoadedExecutable_GetExecutable_Args() {
	PJRT_LoadedExecutable_GetExecutable_Args* p = malloc(sizeof(PJRT_LoadedExecutable_GetExecutable_Args));
	p->struct_size = PJRT_LoadedExecutable_GetExecutable_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Executable_Name_Args allocates a C.PJRT_Executable_Name_Args structure, sets its .struct_size, and returns it.
PJRT_Executable_Name_Args* new_PJRT_Executable_Name_Args() {
	PJRT_Executable_Name_Args* p = malloc(sizeof(PJRT_Executable_Name_Args));
	p->struct_size = PJRT_Executable_Name_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Executable_NumReplicas_Args allocates a C.PJRT_Executable_NumReplicas_Args structure, sets its .struct_size, and returns it.
// TODO(b/269178731): Revisit whether num_replicas is needed.
PJRT_Executable_NumReplicas_Args* new_PJRT_Executable_NumReplicas_Args() {
	PJRT_Executable_NumReplicas_Args* p = malloc(sizeof(PJRT_Executable_NumReplicas_Args));
	p->struct_size = PJRT_Executable_NumReplicas_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Executable_NumPartitions_Args allocates a C.PJRT_Executable_NumPartitions_Args structure, sets its .struct_size, and returns it.
PJRT_Executable_NumPartitions_Args* new_PJRT_Executable_NumPartitions_Args() {
	PJRT_Executable_NumPartitions_Args* p = malloc(sizeof(PJRT_Executable_NumPartitions_Args));
	p->struct_size = PJRT_Executable_NumPartitions_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_LoadedExecutable_AddressableDevices_Args allocates a C.PJRT_LoadedExecutable_AddressableDevices_Args structure, sets its .struct_size, and returns it.
PJRT_LoadedExecutable_AddressableDevices_Args* new_PJRT_LoadedExecutable_AddressableDevices_Args() {
	PJRT_LoadedExecutable_AddressableDevices_Args* p = malloc(sizeof(PJRT_LoadedExecutable_AddressableDevices_Args));
	p->struct_size = PJRT_LoadedExecutable_AddressableDevices_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Executable_OptimizedProgram_Args allocates a C.PJRT_Executable_OptimizedProgram_Args structure, sets its .struct_size, and returns it.
PJRT_Executable_OptimizedProgram_Args* new_PJRT_Executable_OptimizedProgram_Args() {
	PJRT_Executable_OptimizedProgram_Args* p = malloc(sizeof(PJRT_Executable_OptimizedProgram_Args));
	p->struct_size = PJRT_Executable_OptimizedProgram_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_LoadedExecutable_Delete_Args allocates a C.PJRT_LoadedExecutable_Delete_Args structure, sets its .struct_size, and returns it.
PJRT_LoadedExecutable_Delete_Args* new_PJRT_LoadedExecutable_Delete_Args() {
	PJRT_LoadedExecutable_Delete_Args* p = malloc(sizeof(PJRT_LoadedExecutable_Delete_Args));
	p->struct_size = PJRT_LoadedExecutable_Delete_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_LoadedExecutable_IsDeleted_Args allocates a C.PJRT_LoadedExecutable_IsDeleted_Args structure, sets its .struct_size, and returns it.
PJRT_LoadedExecutable_IsDeleted_Args* new_PJRT_LoadedExecutable_IsDeleted_Args() {
	PJRT_LoadedExecutable_IsDeleted_Args* p = malloc(sizeof(PJRT_LoadedExecutable_IsDeleted_Args));
	p->struct_size = PJRT_LoadedExecutable_IsDeleted_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_SendCallbackInfo allocates a C.PJRT_SendCallbackInfo structure, sets its .struct_size, and returns it.
PJRT_SendCallbackInfo* new_PJRT_SendCallbackInfo() {
	PJRT_SendCallbackInfo* p = malloc(sizeof(PJRT_SendCallbackInfo));
	return p;
}

// new_PJRT_RecvCallbackInfo allocates a C.PJRT_RecvCallbackInfo structure, sets its .struct_size, and returns it.
PJRT_RecvCallbackInfo* new_PJRT_RecvCallbackInfo() {
	PJRT_RecvCallbackInfo* p = malloc(sizeof(PJRT_RecvCallbackInfo));
	return p;
}

// new_PJRT_ExecuteOptions allocates a C.PJRT_ExecuteOptions structure, sets its .struct_size, and returns it.
PJRT_ExecuteOptions* new_PJRT_ExecuteOptions() {
	PJRT_ExecuteOptions* p = malloc(sizeof(PJRT_ExecuteOptions));
	p->struct_size = PJRT_ExecuteOptions_STRUCT_SIZE;
	return p;
}

// new_PJRT_LoadedExecutable_Execute_Args allocates a C.PJRT_LoadedExecutable_Execute_Args structure, sets its .struct_size, and returns it.
PJRT_LoadedExecutable_Execute_Args* new_PJRT_LoadedExecutable_Execute_Args() {
	PJRT_LoadedExecutable_Execute_Args* p = malloc(sizeof(PJRT_LoadedExecutable_Execute_Args));
	p->struct_size = PJRT_LoadedExecutable_Execute_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Executable_NumOutputs_Args allocates a C.PJRT_Executable_NumOutputs_Args structure, sets its .struct_size, and returns it.
PJRT_Executable_NumOutputs_Args* new_PJRT_Executable_NumOutputs_Args() {
	PJRT_Executable_NumOutputs_Args* p = malloc(sizeof(PJRT_Executable_NumOutputs_Args));
	p->struct_size = PJRT_Executable_NumOutputs_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Executable_SizeOfGeneratedCodeInBytes_Args allocates a C.PJRT_Executable_SizeOfGeneratedCodeInBytes_Args structure, sets its .struct_size, and returns it.
PJRT_Executable_SizeOfGeneratedCodeInBytes_Args* new_PJRT_Executable_SizeOfGeneratedCodeInBytes_Args() {
	PJRT_Executable_SizeOfGeneratedCodeInBytes_Args* p = malloc(sizeof(PJRT_Executable_SizeOfGeneratedCodeInBytes_Args));
	p->struct_size = PJRT_Executable_SizeOfGeneratedCodeInBytes_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Executable_GetCostAnalysis_Args allocates a C.PJRT_Executable_GetCostAnalysis_Args structure, sets its .struct_size, and returns it.
PJRT_Executable_GetCostAnalysis_Args* new_PJRT_Executable_GetCostAnalysis_Args() {
	PJRT_Executable_GetCostAnalysis_Args* p = malloc(sizeof(PJRT_Executable_GetCostAnalysis_Args));
	p->struct_size = PJRT_Executable_GetCostAnalysis_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Executable_GetCompiledMemoryStats_Args allocates a C.PJRT_Executable_GetCompiledMemoryStats_Args structure, sets its .struct_size, and returns it.
PJRT_Executable_GetCompiledMemoryStats_Args* new_PJRT_Executable_GetCompiledMemoryStats_Args() {
	PJRT_Executable_GetCompiledMemoryStats_Args* p = malloc(sizeof(PJRT_Executable_GetCompiledMemoryStats_Args));
	p->struct_size = PJRT_Executable_GetCompiledMemoryStats_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Executable_OutputElementTypes_Args allocates a C.PJRT_Executable_OutputElementTypes_Args structure, sets its .struct_size, and returns it.
PJRT_Executable_OutputElementTypes_Args* new_PJRT_Executable_OutputElementTypes_Args() {
	PJRT_Executable_OutputElementTypes_Args* p = malloc(sizeof(PJRT_Executable_OutputElementTypes_Args));
	p->struct_size = PJRT_Executable_OutputElementTypes_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Executable_OutputDimensions_Args allocates a C.PJRT_Executable_OutputDimensions_Args structure, sets its .struct_size, and returns it.
PJRT_Executable_OutputDimensions_Args* new_PJRT_Executable_OutputDimensions_Args() {
	PJRT_Executable_OutputDimensions_Args* p = malloc(sizeof(PJRT_Executable_OutputDimensions_Args));
	p->struct_size = PJRT_Executable_OutputDimensions_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Executable_OutputMemoryKinds_Args allocates a C.PJRT_Executable_OutputMemoryKinds_Args structure, sets its .struct_size, and returns it.
PJRT_Executable_OutputMemoryKinds_Args* new_PJRT_Executable_OutputMemoryKinds_Args() {
	PJRT_Executable_OutputMemoryKinds_Args* p = malloc(sizeof(PJRT_Executable_OutputMemoryKinds_Args));
	p->struct_size = PJRT_Executable_OutputMemoryKinds_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Executable_Serialize_Args allocates a C.PJRT_Executable_Serialize_Args structure, sets its .struct_size, and returns it.
PJRT_Executable_Serialize_Args* new_PJRT_Executable_Serialize_Args() {
	PJRT_Executable_Serialize_Args* p = malloc(sizeof(PJRT_Executable_Serialize_Args));
	p->struct_size = PJRT_Executable_Serialize_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Executable_DeserializeAndLoad_Args allocates a C.PJRT_Executable_DeserializeAndLoad_Args structure, sets its .struct_size, and returns it.
PJRT_Executable_DeserializeAndLoad_Args* new_PJRT_Executable_DeserializeAndLoad_Args() {
	PJRT_Executable_DeserializeAndLoad_Args* p = malloc(sizeof(PJRT_Executable_DeserializeAndLoad_Args));
	p->struct_size = PJRT_Executable_DeserializeAndLoad_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_LoadedExecutable_Fingerprint_Args allocates a C.PJRT_LoadedExecutable_Fingerprint_Args structure, sets its .struct_size, and returns it.
PJRT_LoadedExecutable_Fingerprint_Args* new_PJRT_LoadedExecutable_Fingerprint_Args() {
	PJRT_LoadedExecutable_Fingerprint_Args* p = malloc(sizeof(PJRT_LoadedExecutable_Fingerprint_Args));
	p->struct_size = PJRT_LoadedExecutable_Fingerprint_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_Destroy_Args allocates a C.PJRT_Buffer_Destroy_Args structure, sets its .struct_size, and returns it.
PJRT_Buffer_Destroy_Args* new_PJRT_Buffer_Destroy_Args() {
	PJRT_Buffer_Destroy_Args* p = malloc(sizeof(PJRT_Buffer_Destroy_Args));
	p->struct_size = PJRT_Buffer_Destroy_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_ElementType_Args allocates a C.PJRT_Buffer_ElementType_Args structure, sets its .struct_size, and returns it.
PJRT_Buffer_ElementType_Args* new_PJRT_Buffer_ElementType_Args() {
	PJRT_Buffer_ElementType_Args* p = malloc(sizeof(PJRT_Buffer_ElementType_Args));
	p->struct_size = PJRT_Buffer_ElementType_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_Dimensions_Args allocates a C.PJRT_Buffer_Dimensions_Args structure, sets its .struct_size, and returns it.
PJRT_Buffer_Dimensions_Args* new_PJRT_Buffer_Dimensions_Args() {
	PJRT_Buffer_Dimensions_Args* p = malloc(sizeof(PJRT_Buffer_Dimensions_Args));
	p->struct_size = PJRT_Buffer_Dimensions_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_UnpaddedDimensions_Args allocates a C.PJRT_Buffer_UnpaddedDimensions_Args structure, sets its .struct_size, and returns it.
PJRT_Buffer_UnpaddedDimensions_Args* new_PJRT_Buffer_UnpaddedDimensions_Args() {
	PJRT_Buffer_UnpaddedDimensions_Args* p = malloc(sizeof(PJRT_Buffer_UnpaddedDimensions_Args));
	p->struct_size = PJRT_Buffer_UnpaddedDimensions_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_DynamicDimensionIndices_Args allocates a C.PJRT_Buffer_DynamicDimensionIndices_Args structure, sets its .struct_size, and returns it.
PJRT_Buffer_DynamicDimensionIndices_Args* new_PJRT_Buffer_DynamicDimensionIndices_Args() {
	PJRT_Buffer_DynamicDimensionIndices_Args* p = malloc(sizeof(PJRT_Buffer_DynamicDimensionIndices_Args));
	p->struct_size = PJRT_Buffer_DynamicDimensionIndices_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_GetMemoryLayout_Args allocates a C.PJRT_Buffer_GetMemoryLayout_Args structure, sets its .struct_size, and returns it.
PJRT_Buffer_GetMemoryLayout_Args* new_PJRT_Buffer_GetMemoryLayout_Args() {
	PJRT_Buffer_GetMemoryLayout_Args* p = malloc(sizeof(PJRT_Buffer_GetMemoryLayout_Args));
	p->struct_size = PJRT_Buffer_GetMemoryLayout_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_ToHostBuffer_Args allocates a C.PJRT_Buffer_ToHostBuffer_Args structure, sets its .struct_size, and returns it.
PJRT_Buffer_ToHostBuffer_Args* new_PJRT_Buffer_ToHostBuffer_Args() {
	PJRT_Buffer_ToHostBuffer_Args* p = malloc(sizeof(PJRT_Buffer_ToHostBuffer_Args));
	p->struct_size = PJRT_Buffer_ToHostBuffer_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_OnDeviceSizeInBytes_Args allocates a C.PJRT_Buffer_OnDeviceSizeInBytes_Args structure, sets its .struct_size, and returns it.
PJRT_Buffer_OnDeviceSizeInBytes_Args* new_PJRT_Buffer_OnDeviceSizeInBytes_Args() {
	PJRT_Buffer_OnDeviceSizeInBytes_Args* p = malloc(sizeof(PJRT_Buffer_OnDeviceSizeInBytes_Args));
	p->struct_size = PJRT_Buffer_OnDeviceSizeInBytes_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_Delete_Args allocates a C.PJRT_Buffer_Delete_Args structure, sets its .struct_size, and returns it.
PJRT_Buffer_Delete_Args* new_PJRT_Buffer_Delete_Args() {
	PJRT_Buffer_Delete_Args* p = malloc(sizeof(PJRT_Buffer_Delete_Args));
	p->struct_size = PJRT_Buffer_Delete_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_IsDeleted_Args allocates a C.PJRT_Buffer_IsDeleted_Args structure, sets its .struct_size, and returns it.
PJRT_Buffer_IsDeleted_Args* new_PJRT_Buffer_IsDeleted_Args() {
	PJRT_Buffer_IsDeleted_Args* p = malloc(sizeof(PJRT_Buffer_IsDeleted_Args));
	p->struct_size = PJRT_Buffer_IsDeleted_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_CopyToDevice_Args allocates a C.PJRT_Buffer_CopyToDevice_Args structure, sets its .struct_size, and returns it.
PJRT_Buffer_CopyToDevice_Args* new_PJRT_Buffer_CopyToDevice_Args() {
	PJRT_Buffer_CopyToDevice_Args* p = malloc(sizeof(PJRT_Buffer_CopyToDevice_Args));
	p->struct_size = PJRT_Buffer_CopyToDevice_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_CopyToMemory_Args allocates a C.PJRT_Buffer_CopyToMemory_Args structure, sets its .struct_size, and returns it.
PJRT_Buffer_CopyToMemory_Args* new_PJRT_Buffer_CopyToMemory_Args() {
	PJRT_Buffer_CopyToMemory_Args* p = malloc(sizeof(PJRT_Buffer_CopyToMemory_Args));
	p->struct_size = PJRT_Buffer_CopyToMemory_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_IsOnCpu_Args allocates a C.PJRT_Buffer_IsOnCpu_Args structure, sets its .struct_size, and returns it.
PJRT_Buffer_IsOnCpu_Args* new_PJRT_Buffer_IsOnCpu_Args() {
	PJRT_Buffer_IsOnCpu_Args* p = malloc(sizeof(PJRT_Buffer_IsOnCpu_Args));
	p->struct_size = PJRT_Buffer_IsOnCpu_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_Device_Args allocates a C.PJRT_Buffer_Device_Args structure, sets its .struct_size, and returns it.
PJRT_Buffer_Device_Args* new_PJRT_Buffer_Device_Args() {
	PJRT_Buffer_Device_Args* p = malloc(sizeof(PJRT_Buffer_Device_Args));
	p->struct_size = PJRT_Buffer_Device_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_Memory_Args allocates a C.PJRT_Buffer_Memory_Args structure, sets its .struct_size, and returns it.
PJRT_Buffer_Memory_Args* new_PJRT_Buffer_Memory_Args() {
	PJRT_Buffer_Memory_Args* p = malloc(sizeof(PJRT_Buffer_Memory_Args));
	p->struct_size = PJRT_Buffer_Memory_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_ReadyEvent_Args allocates a C.PJRT_Buffer_ReadyEvent_Args structure, sets its .struct_size, and returns it.
PJRT_Buffer_ReadyEvent_Args* new_PJRT_Buffer_ReadyEvent_Args() {
	PJRT_Buffer_ReadyEvent_Args* p = malloc(sizeof(PJRT_Buffer_ReadyEvent_Args));
	p->struct_size = PJRT_Buffer_ReadyEvent_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_UnsafePointer_Args allocates a C.PJRT_Buffer_UnsafePointer_Args structure, sets its .struct_size, and returns it.
PJRT_Buffer_UnsafePointer_Args* new_PJRT_Buffer_UnsafePointer_Args() {
	PJRT_Buffer_UnsafePointer_Args* p = malloc(sizeof(PJRT_Buffer_UnsafePointer_Args));
	p->struct_size = PJRT_Buffer_UnsafePointer_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_IncreaseExternalReferenceCount_Args allocates a C.PJRT_Buffer_IncreaseExternalReferenceCount_Args structure, sets its .struct_size, and returns it.
PJRT_Buffer_IncreaseExternalReferenceCount_Args* new_PJRT_Buffer_IncreaseExternalReferenceCount_Args() {
	PJRT_Buffer_IncreaseExternalReferenceCount_Args* p = malloc(sizeof(PJRT_Buffer_IncreaseExternalReferenceCount_Args));
	p->struct_size = PJRT_Buffer_IncreaseExternalReferenceCount_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_DecreaseExternalReferenceCount_Args allocates a C.PJRT_Buffer_DecreaseExternalReferenceCount_Args structure, sets its .struct_size, and returns it.
PJRT_Buffer_DecreaseExternalReferenceCount_Args* new_PJRT_Buffer_DecreaseExternalReferenceCount_Args() {
	PJRT_Buffer_DecreaseExternalReferenceCount_Args* p = malloc(sizeof(PJRT_Buffer_DecreaseExternalReferenceCount_Args));
	p->struct_size = PJRT_Buffer_DecreaseExternalReferenceCount_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Buffer_OpaqueDeviceMemoryDataPointer_Args allocates a C.PJRT_Buffer_OpaqueDeviceMemoryDataPointer_Args structure, sets its .struct_size, and returns it.
PJRT_Buffer_OpaqueDeviceMemoryDataPointer_Args* new_PJRT_Buffer_OpaqueDeviceMemoryDataPointer_Args() {
	PJRT_Buffer_OpaqueDeviceMemoryDataPointer_Args* p = malloc(sizeof(PJRT_Buffer_OpaqueDeviceMemoryDataPointer_Args));
	p->struct_size = PJRT_Buffer_OpaqueDeviceMemoryDataPointer_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_CopyToDeviceStream_Destroy_Args allocates a C.PJRT_CopyToDeviceStream_Destroy_Args structure, sets its .struct_size, and returns it.
PJRT_CopyToDeviceStream_Destroy_Args* new_PJRT_CopyToDeviceStream_Destroy_Args() {
	PJRT_CopyToDeviceStream_Destroy_Args* p = malloc(sizeof(PJRT_CopyToDeviceStream_Destroy_Args));
	p->struct_size = PJRT_CopyToDeviceStream_Destroy_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_CopyToDeviceStream_AddChunk_Args allocates a C.PJRT_CopyToDeviceStream_AddChunk_Args structure, sets its .struct_size, and returns it.
PJRT_CopyToDeviceStream_AddChunk_Args* new_PJRT_CopyToDeviceStream_AddChunk_Args() {
	PJRT_CopyToDeviceStream_AddChunk_Args* p = malloc(sizeof(PJRT_CopyToDeviceStream_AddChunk_Args));
	p->struct_size = PJRT_CopyToDeviceStream_AddChunk_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_CopyToDeviceStream_TotalBytes_Args allocates a C.PJRT_CopyToDeviceStream_TotalBytes_Args structure, sets its .struct_size, and returns it.
PJRT_CopyToDeviceStream_TotalBytes_Args* new_PJRT_CopyToDeviceStream_TotalBytes_Args() {
	PJRT_CopyToDeviceStream_TotalBytes_Args* p = malloc(sizeof(PJRT_CopyToDeviceStream_TotalBytes_Args));
	p->struct_size = PJRT_CopyToDeviceStream_TotalBytes_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_CopyToDeviceStream_GranuleSize_Args allocates a C.PJRT_CopyToDeviceStream_GranuleSize_Args structure, sets its .struct_size, and returns it.
PJRT_CopyToDeviceStream_GranuleSize_Args* new_PJRT_CopyToDeviceStream_GranuleSize_Args() {
	PJRT_CopyToDeviceStream_GranuleSize_Args* p = malloc(sizeof(PJRT_CopyToDeviceStream_GranuleSize_Args));
	p->struct_size = PJRT_CopyToDeviceStream_GranuleSize_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_CopyToDeviceStream_CurrentBytes_Args allocates a C.PJRT_CopyToDeviceStream_CurrentBytes_Args structure, sets its .struct_size, and returns it.
PJRT_CopyToDeviceStream_CurrentBytes_Args* new_PJRT_CopyToDeviceStream_CurrentBytes_Args() {
	PJRT_CopyToDeviceStream_CurrentBytes_Args* p = malloc(sizeof(PJRT_CopyToDeviceStream_CurrentBytes_Args));
	p->struct_size = PJRT_CopyToDeviceStream_CurrentBytes_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_TopologyDescription_Create_Args allocates a C.PJRT_TopologyDescription_Create_Args structure, sets its .struct_size, and returns it.
PJRT_TopologyDescription_Create_Args* new_PJRT_TopologyDescription_Create_Args() {
	PJRT_TopologyDescription_Create_Args* p = malloc(sizeof(PJRT_TopologyDescription_Create_Args));
	p->struct_size = PJRT_TopologyDescription_Create_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_TopologyDescription_Destroy_Args allocates a C.PJRT_TopologyDescription_Destroy_Args structure, sets its .struct_size, and returns it.
PJRT_TopologyDescription_Destroy_Args* new_PJRT_TopologyDescription_Destroy_Args() {
	PJRT_TopologyDescription_Destroy_Args* p = malloc(sizeof(PJRT_TopologyDescription_Destroy_Args));
	p->struct_size = PJRT_TopologyDescription_Destroy_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_TopologyDescription_PlatformVersion_Args allocates a C.PJRT_TopologyDescription_PlatformVersion_Args structure, sets its .struct_size, and returns it.
PJRT_TopologyDescription_PlatformVersion_Args* new_PJRT_TopologyDescription_PlatformVersion_Args() {
	PJRT_TopologyDescription_PlatformVersion_Args* p = malloc(sizeof(PJRT_TopologyDescription_PlatformVersion_Args));
	p->struct_size = PJRT_TopologyDescription_PlatformVersion_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_TopologyDescription_PlatformName_Args allocates a C.PJRT_TopologyDescription_PlatformName_Args structure, sets its .struct_size, and returns it.
PJRT_TopologyDescription_PlatformName_Args* new_PJRT_TopologyDescription_PlatformName_Args() {
	PJRT_TopologyDescription_PlatformName_Args* p = malloc(sizeof(PJRT_TopologyDescription_PlatformName_Args));
	p->struct_size = PJRT_TopologyDescription_PlatformName_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_TopologyDescription_GetDeviceDescriptions_Args allocates a C.PJRT_TopologyDescription_GetDeviceDescriptions_Args structure, sets its .struct_size, and returns it.
PJRT_TopologyDescription_GetDeviceDescriptions_Args* new_PJRT_TopologyDescription_GetDeviceDescriptions_Args() {
	PJRT_TopologyDescription_GetDeviceDescriptions_Args* p = malloc(sizeof(PJRT_TopologyDescription_GetDeviceDescriptions_Args));
	p->struct_size = PJRT_TopologyDescription_GetDeviceDescriptions_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_TopologyDescription_Serialize_Args allocates a C.PJRT_TopologyDescription_Serialize_Args structure, sets its .struct_size, and returns it.
PJRT_TopologyDescription_Serialize_Args* new_PJRT_TopologyDescription_Serialize_Args() {
	PJRT_TopologyDescription_Serialize_Args* p = malloc(sizeof(PJRT_TopologyDescription_Serialize_Args));
	p->struct_size = PJRT_TopologyDescription_Serialize_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_TopologyDescription_Attributes_Args allocates a C.PJRT_TopologyDescription_Attributes_Args structure, sets its .struct_size, and returns it.
PJRT_TopologyDescription_Attributes_Args* new_PJRT_TopologyDescription_Attributes_Args() {
	PJRT_TopologyDescription_Attributes_Args* p = malloc(sizeof(PJRT_TopologyDescription_Attributes_Args));
	p->struct_size = PJRT_TopologyDescription_Attributes_Args_STRUCT_SIZE;
	return p;
}

// new_PJRT_Compile_Args allocates a C.PJRT_Compile_Args structure, sets its .struct_size, and returns it.
PJRT_Compile_Args* new_PJRT_Compile_Args() {
	PJRT_Compile_Args* p = malloc(sizeof(PJRT_Compile_Args));
	p->struct_size = PJRT_Compile_Args_STRUCT_SIZE;
	return p;
}

