#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    // Get information about the disk
    ULARGE_INTEGER freeBytesAvailable;
    ULARGE_INTEGER totalNumberOfBytes;
    ULARGE_INTEGER totalNumberOfFreeBytes;
    if (GetDiskFreeSpaceEx(NULL, &freeBytesAvailable, &totalNumberOfBytes, &totalNumberOfFreeBytes))
    {
        cout << "Disk information:" << endl;
        cout << "Free space: " << freeBytesAvailable.QuadPart << " bytes" << endl;
        cout << "Total space: " << totalNumberOfBytes.QuadPart << " bytes" << endl;
    }
    else
    {
        cout << "Failed to get disk information" << endl;
    }

    // Get information about the memory
    MEMORYSTATUSEX memoryStatus;
    memoryStatus.dwLength = sizeof(memoryStatus);
    if (GlobalMemoryStatusEx(&memoryStatus))
    {
        cout << "Memory information:" << endl;
        cout << "Total physical memory: " << memoryStatus.ullTotalPhys << " bytes" << endl;
        cout << "Available physical memory: " << memoryStatus.ullAvailPhys << " bytes" << endl;
        cout << "Total virtual memory: " << memoryStatus.ullTotalVirtual << " bytes" << endl;
        cout << "Available virtual memory: " << memoryStatus.ullAvailVirtual << " bytes" << endl;
    }
    else
    {
        cout << "Failed to get memory information" << endl;
    }

    return 0;
}
