// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220110.5

#pragma once
#ifndef WINRT_Microsoft_Windows_PushNotifications_1_H
#define WINRT_Microsoft_Windows_PushNotifications_1_H
#include "winrt/impl/Microsoft.Windows.PushNotifications.0.h"
WINRT_EXPORT namespace winrt::Microsoft::Windows::PushNotifications
{
    struct __declspec(empty_bases) IPushNotificationChannel :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPushNotificationChannel>
    {
        IPushNotificationChannel(std::nullptr_t = nullptr) noexcept {}
        IPushNotificationChannel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPushNotificationCreateChannelResult :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPushNotificationCreateChannelResult>
    {
        IPushNotificationCreateChannelResult(std::nullptr_t = nullptr) noexcept {}
        IPushNotificationCreateChannelResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPushNotificationManager :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPushNotificationManager>
    {
        IPushNotificationManager(std::nullptr_t = nullptr) noexcept {}
        IPushNotificationManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPushNotificationManagerStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPushNotificationManagerStatics>
    {
        IPushNotificationManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IPushNotificationManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPushNotificationReceivedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPushNotificationReceivedEventArgs>
    {
        IPushNotificationReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPushNotificationReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
