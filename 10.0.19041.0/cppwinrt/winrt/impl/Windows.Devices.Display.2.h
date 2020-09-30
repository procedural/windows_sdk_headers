// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Display_2_H
#define WINRT_Windows_Devices_Display_2_H
#include "winrt/impl/Windows.Devices.Display.1.h"
namespace winrt::Windows::Devices::Display
{
    struct __declspec(empty_bases) DisplayMonitor : Windows::Devices::Display::IDisplayMonitor,
        impl::require<DisplayMonitor, Windows::Devices::Display::IDisplayMonitor2>
    {
        DisplayMonitor(std::nullptr_t) noexcept {}
        DisplayMonitor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::IDisplayMonitor(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto FromInterfaceIdAsync(param::hstring const& deviceInterfaceId);
    };
}
#endif
