# LoadDriver
code that loads a driver using undocumented SYSTEM_GDI_DRIVER_INFORMATION structure 

# Function

ZwSetSystemInformation with first parameter SystemLoadGdiDriverInSystemSpace (0x54) from SYSTEM_INFORMATION_CLASS enumeration
is able to load drivers. SYSTEM_GDI_DRIVER_INFORMATION structure only needs to fill one parameter, DriverName which is an unicode string, represents the path of the driver in the system

# Mode

This method only works in kernel space
