#include <ntddk.h>


extern "C" NTSTATUS DriverEntry(PDRIVER_OBJECT pdriver, PUNICODE_STRING pregister)
{
	DbgPrint("\n[gdi.sys] Image loaded by ZwSetSystemInformation call");

	return STATUS_SUCCESS;
}