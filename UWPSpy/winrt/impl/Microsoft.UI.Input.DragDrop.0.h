// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220110.5

#pragma once
#ifndef WINRT_Microsoft_UI_Input_DragDrop_0_H
#define WINRT_Microsoft_UI_Input_DragDrop_0_H
WINRT_EXPORT namespace winrt::Microsoft::UI::Content
{
    struct ContentIsland;
}
WINRT_EXPORT namespace winrt::Microsoft::UI::Input
{
    struct PointerPoint;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer
{
    struct DataPackage;
    enum class DataPackageOperation : uint32_t;
    struct DataPackageView;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    struct Point;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    struct SoftwareBitmap;
}
WINRT_EXPORT namespace winrt::Microsoft::UI::Input::DragDrop
{
    enum class DragDropModifiers : uint32_t
    {
        None = 0,
        Shift = 0x1,
        Control = 0x2,
        Alt = 0x4,
        LeftButton = 0x8,
        MiddleButton = 0x10,
        RightButton = 0x20,
    };
    enum class DragUIContentMode : int32_t
    {
        Auto = 0,
        Deferred = 1,
    };
    struct IDragDropManager;
    struct IDragDropManagerStatics;
    struct IDragInfo;
    struct IDragOperation;
    struct IDragUIOverride;
    struct IDropOperationTarget;
    struct IDropOperationTargetRequestedEventArgs;
    struct DragDropManager;
    struct DragInfo;
    struct DragOperation;
    struct DragUIOverride;
    struct DropOperationTargetRequestedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<winrt::Microsoft::UI::Input::DragDrop::IDragDropManager>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Input::DragDrop::IDragDropManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Input::DragDrop::IDragInfo>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Input::DragDrop::IDragOperation>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Input::DragDrop::IDragUIOverride>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Input::DragDrop::IDropOperationTarget>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Input::DragDrop::IDropOperationTargetRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Input::DragDrop::DragDropManager>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::UI::Input::DragDrop::DragInfo>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::UI::Input::DragDrop::DragOperation>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::UI::Input::DragDrop::DragUIOverride>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::UI::Input::DragDrop::DropOperationTargetRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::UI::Input::DragDrop::DragDropModifiers>{ using type = enum_category; };
    template <> struct category<winrt::Microsoft::UI::Input::DragDrop::DragUIContentMode>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Input::DragDrop::DragDropManager> = L"Microsoft.UI.Input.DragDrop.DragDropManager";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Input::DragDrop::DragInfo> = L"Microsoft.UI.Input.DragDrop.DragInfo";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Input::DragDrop::DragOperation> = L"Microsoft.UI.Input.DragDrop.DragOperation";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Input::DragDrop::DragUIOverride> = L"Microsoft.UI.Input.DragDrop.DragUIOverride";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Input::DragDrop::DropOperationTargetRequestedEventArgs> = L"Microsoft.UI.Input.DragDrop.DropOperationTargetRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Input::DragDrop::DragDropModifiers> = L"Microsoft.UI.Input.DragDrop.DragDropModifiers";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Input::DragDrop::DragUIContentMode> = L"Microsoft.UI.Input.DragDrop.DragUIContentMode";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Input::DragDrop::IDragDropManager> = L"Microsoft.UI.Input.DragDrop.IDragDropManager";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Input::DragDrop::IDragDropManagerStatics> = L"Microsoft.UI.Input.DragDrop.IDragDropManagerStatics";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Input::DragDrop::IDragInfo> = L"Microsoft.UI.Input.DragDrop.IDragInfo";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Input::DragDrop::IDragOperation> = L"Microsoft.UI.Input.DragDrop.IDragOperation";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Input::DragDrop::IDragUIOverride> = L"Microsoft.UI.Input.DragDrop.IDragUIOverride";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Input::DragDrop::IDropOperationTarget> = L"Microsoft.UI.Input.DragDrop.IDropOperationTarget";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Input::DragDrop::IDropOperationTargetRequestedEventArgs> = L"Microsoft.UI.Input.DragDrop.IDropOperationTargetRequestedEventArgs";
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Input::DragDrop::IDragDropManager>{ 0x4FEA9EFC,0xB073,0x5FBE,{ 0x9C,0x95,0xA4,0x11,0x3E,0xF6,0x39,0x3F } }; // 4FEA9EFC-B073-5FBE-9C95-A4113EF6393F
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Input::DragDrop::IDragDropManagerStatics>{ 0x5587C863,0x57D7,0x5D0F,{ 0x8E,0xA9,0xE5,0xDC,0xF0,0x6A,0x0F,0x83 } }; // 5587C863-57D7-5D0F-8EA9-E5DCF06A0F83
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Input::DragDrop::IDragInfo>{ 0x7507D891,0x62A8,0x5A79,{ 0xA8,0x80,0xAC,0x73,0x53,0xD0,0x01,0xEC } }; // 7507D891-62A8-5A79-A880-AC7353D001EC
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Input::DragDrop::IDragOperation>{ 0xEF122288,0x7984,0x53D3,{ 0x84,0x88,0x13,0x3D,0xCD,0x3D,0xE7,0x93 } }; // EF122288-7984-53D3-8488-133DCD3DE793
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Input::DragDrop::IDragUIOverride>{ 0x8432FBAC,0xA17F,0x5A95,{ 0x8F,0x56,0xFB,0x43,0x22,0x80,0xB5,0x4D } }; // 8432FBAC-A17F-5A95-8F56-FB432280B54D
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Input::DragDrop::IDropOperationTarget>{ 0x1C2707D9,0x0065,0x53C7,{ 0xBB,0xFB,0x50,0x85,0x03,0x78,0xCA,0xF3 } }; // 1C2707D9-0065-53C7-BBFB-50850378CAF3
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Input::DragDrop::IDropOperationTargetRequestedEventArgs>{ 0xF61C5B62,0x720E,0x59FF,{ 0xAD,0x0B,0xE7,0x7F,0xC5,0xB8,0xA4,0xA3 } }; // F61C5B62-720E-59FF-AD0B-E77FC5B8A4A3
    template <> struct default_interface<winrt::Microsoft::UI::Input::DragDrop::DragDropManager>{ using type = winrt::Microsoft::UI::Input::DragDrop::IDragDropManager; };
    template <> struct default_interface<winrt::Microsoft::UI::Input::DragDrop::DragInfo>{ using type = winrt::Microsoft::UI::Input::DragDrop::IDragInfo; };
    template <> struct default_interface<winrt::Microsoft::UI::Input::DragDrop::DragOperation>{ using type = winrt::Microsoft::UI::Input::DragDrop::IDragOperation; };
    template <> struct default_interface<winrt::Microsoft::UI::Input::DragDrop::DragUIOverride>{ using type = winrt::Microsoft::UI::Input::DragDrop::IDragUIOverride; };
    template <> struct default_interface<winrt::Microsoft::UI::Input::DragDrop::DropOperationTargetRequestedEventArgs>{ using type = winrt::Microsoft::UI::Input::DragDrop::IDropOperationTargetRequestedEventArgs; };
    template <> struct abi<winrt::Microsoft::UI::Input::DragDrop::IDragDropManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AreConcurrentOperationsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AreConcurrentOperationsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall add_TargetRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TargetRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Input::DragDrop::IDragDropManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForIsland(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Input::DragDrop::IDragInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowedOperations(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall get_Modifiers(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Position(winrt::Windows::Foundation::Point*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Input::DragDrop::IDragOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowedOperations(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AllowedOperations(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall get_DragUIContentMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DragUIContentMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall SetDragUIContentFromSoftwareBitmap(void*) noexcept = 0;
            virtual int32_t __stdcall SetDragUIContentFromSoftwareBitmap2(void*, winrt::Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall StartAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Input::DragDrop::IDragUIOverride>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Caption(void**) noexcept = 0;
            virtual int32_t __stdcall put_Caption(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsCaptionVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCaptionVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsContentVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsContentVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsGlyphVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsGlyphVisible(bool) noexcept = 0;
            virtual int32_t __stdcall Clear() noexcept = 0;
            virtual int32_t __stdcall SetContentFromSoftwareBitmap(void*) noexcept = 0;
            virtual int32_t __stdcall SetContentFromSoftwareBitmap2(void*, winrt::Windows::Foundation::Point) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Input::DragDrop::IDropOperationTarget>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall DropAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall EnterAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LeaveAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall OverAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Input::DragDrop::IDropOperationTargetRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetTarget(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Microsoft_UI_Input_DragDrop_IDragDropManager
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AreConcurrentOperationsEnabled() const;
        WINRT_IMPL_AUTO(void) AreConcurrentOperationsEnabled(bool value) const;
        WINRT_IMPL_AUTO(winrt::event_token) TargetRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::UI::Input::DragDrop::DragDropManager, winrt::Microsoft::UI::Input::DragDrop::DropOperationTargetRequestedEventArgs> const& handler) const;
        using TargetRequested_revoker = impl::event_revoker<winrt::Microsoft::UI::Input::DragDrop::IDragDropManager, &impl::abi_t<winrt::Microsoft::UI::Input::DragDrop::IDragDropManager>::remove_TargetRequested>;
        [[nodiscard]] TargetRequested_revoker TargetRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::UI::Input::DragDrop::DragDropManager, winrt::Microsoft::UI::Input::DragDrop::DropOperationTargetRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) TargetRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Microsoft::UI::Input::DragDrop::IDragDropManager>
    {
        template <typename D> using type = consume_Microsoft_UI_Input_DragDrop_IDragDropManager<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Input_DragDrop_IDragDropManagerStatics
    {
        WINRT_IMPL_AUTO(winrt::Microsoft::UI::Input::DragDrop::DragDropManager) GetForIsland(winrt::Microsoft::UI::Content::ContentIsland const& content) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Input::DragDrop::IDragDropManagerStatics>
    {
        template <typename D> using type = consume_Microsoft_UI_Input_DragDrop_IDragDropManagerStatics<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Input_DragDrop_IDragInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation) AllowedOperations() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::DataTransfer::DataPackageView) Data() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Microsoft::UI::Input::DragDrop::DragDropModifiers) Modifiers() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Point) Position() const;
    };
    template <> struct consume<winrt::Microsoft::UI::Input::DragDrop::IDragInfo>
    {
        template <typename D> using type = consume_Microsoft_UI_Input_DragDrop_IDragInfo<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Input_DragDrop_IDragOperation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation) AllowedOperations() const;
        WINRT_IMPL_AUTO(void) AllowedOperations(winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::DataTransfer::DataPackage) Data() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Microsoft::UI::Input::DragDrop::DragUIContentMode) DragUIContentMode() const;
        WINRT_IMPL_AUTO(void) DragUIContentMode(winrt::Microsoft::UI::Input::DragDrop::DragUIContentMode const& value) const;
        WINRT_IMPL_AUTO(void) SetDragUIContentFromSoftwareBitmap(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const;
        WINRT_IMPL_AUTO(void) SetDragUIContentFromSoftwareBitmap(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& bitmap, winrt::Windows::Foundation::Point const& anchorPoint) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>) StartAsync(winrt::Microsoft::UI::Input::DragDrop::DragDropManager const& initialTarget, winrt::Microsoft::UI::Input::PointerPoint const& initialPointerPoint) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Input::DragDrop::IDragOperation>
    {
        template <typename D> using type = consume_Microsoft_UI_Input_DragDrop_IDragOperation<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Input_DragDrop_IDragUIOverride
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Caption() const;
        WINRT_IMPL_AUTO(void) Caption(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCaptionVisible() const;
        WINRT_IMPL_AUTO(void) IsCaptionVisible(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsContentVisible() const;
        WINRT_IMPL_AUTO(void) IsContentVisible(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsGlyphVisible() const;
        WINRT_IMPL_AUTO(void) IsGlyphVisible(bool value) const;
        WINRT_IMPL_AUTO(void) Clear() const;
        WINRT_IMPL_AUTO(void) SetContentFromSoftwareBitmap(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const;
        WINRT_IMPL_AUTO(void) SetContentFromSoftwareBitmap(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& bitmap, winrt::Windows::Foundation::Point const& anchorPoint) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Input::DragDrop::IDragUIOverride>
    {
        template <typename D> using type = consume_Microsoft_UI_Input_DragDrop_IDragUIOverride<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Input_DragDrop_IDropOperationTarget
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>) DropAsync(winrt::Microsoft::UI::Input::DragDrop::DragInfo const& dragInfo) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>) EnterAsync(winrt::Microsoft::UI::Input::DragDrop::DragInfo const& dragInfo, winrt::Microsoft::UI::Input::DragDrop::DragUIOverride const& dragUIOverride) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) LeaveAsync(winrt::Microsoft::UI::Input::DragDrop::DragInfo const& dragInfo) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>) OverAsync(winrt::Microsoft::UI::Input::DragDrop::DragInfo const& dragInfo, winrt::Microsoft::UI::Input::DragDrop::DragUIOverride const& dragUIOverride) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Input::DragDrop::IDropOperationTarget>
    {
        template <typename D> using type = consume_Microsoft_UI_Input_DragDrop_IDropOperationTarget<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Input_DragDrop_IDropOperationTargetRequestedEventArgs
    {
        WINRT_IMPL_AUTO(void) SetTarget(winrt::Microsoft::UI::Input::DragDrop::IDropOperationTarget const& target) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Input::DragDrop::IDropOperationTargetRequestedEventArgs>
    {
        template <typename D> using type = consume_Microsoft_UI_Input_DragDrop_IDropOperationTargetRequestedEventArgs<D>;
    };
}
#endif
