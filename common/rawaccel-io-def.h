#pragma once

#ifdef _KERNEL_MODE
#include <ntddk.h>
#else
#include <winioctl.h>
#endif

#define RA_DEV_TYPE 0x8888u

#define RA_READ CTL_CODE(RA_DEV_TYPE, 0x888, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)
#define RA_WRITE CTL_CODE(RA_DEV_TYPE, 0x889, METHOD_BUFFERED, FILE_ANY_ACCESS)
