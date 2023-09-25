// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220110.5

#pragma once
#ifndef WINRT_Microsoft_UI_0_H
#define WINRT_Microsoft_UI_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Microsoft::UI
{
    struct IClosableNotifier;
    struct IColorHelper;
    struct IColorHelperStatics;
    struct IColors;
    struct IColorsStatics;
    struct ColorHelper;
    struct Colors;
    struct DisplayId;
    struct IconId;
    struct WindowId;
    struct ClosableNotifierHandler;
}
namespace winrt::impl
{
    template <> struct category<winrt::Microsoft::UI::IClosableNotifier>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::IColorHelper>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::IColorHelperStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::IColors>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::IColorsStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::ColorHelper>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::UI::Colors>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::UI::DisplayId>{ using type = struct_category<uint64_t>; };
    template <> struct category<winrt::Microsoft::UI::IconId>{ using type = struct_category<uint64_t>; };
    template <> struct category<winrt::Microsoft::UI::WindowId>{ using type = struct_category<uint64_t>; };
    template <> struct category<winrt::Microsoft::UI::ClosableNotifierHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::ColorHelper> = L"Microsoft.UI.ColorHelper";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Colors> = L"Microsoft.UI.Colors";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::DisplayId> = L"Microsoft.UI.DisplayId";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::IconId> = L"Microsoft.UI.IconId";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::WindowId> = L"Microsoft.UI.WindowId";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::IClosableNotifier> = L"Microsoft.UI.IClosableNotifier";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::IColorHelper> = L"Microsoft.UI.IColorHelper";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::IColorHelperStatics> = L"Microsoft.UI.IColorHelperStatics";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::IColors> = L"Microsoft.UI.IColors";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::IColorsStatics> = L"Microsoft.UI.IColorsStatics";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::ClosableNotifierHandler> = L"Microsoft.UI.ClosableNotifierHandler";
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::IClosableNotifier>{ 0x2989E93B,0xED0F,0x5E79,{ 0x90,0xF2,0xEA,0xC5,0x92,0xFC,0x6E,0x6A } }; // 2989E93B-ED0F-5E79-90F2-EAC592FC6E6A
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::IColorHelper>{ 0x3ADDDCCD,0x3949,0x585B,{ 0xA5,0x66,0xCC,0xB8,0x35,0x0D,0xD2,0x21 } }; // 3ADDDCCD-3949-585B-A566-CCB8350DD221
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::IColorHelperStatics>{ 0x1D1D85A1,0xEB63,0x538A,{ 0x84,0xF0,0x01,0x92,0x10,0xBC,0x40,0x6B } }; // 1D1D85A1-EB63-538A-84F0-019210BC406B
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::IColors>{ 0x8CF15863,0x8411,0x5AFD,{ 0x94,0x6C,0x32,0x8E,0x04,0xDA,0x2F,0x2F } }; // 8CF15863-8411-5AFD-946C-328E04DA2F2F
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::IColorsStatics>{ 0x8620A5B0,0x015A,0x57AC,{ 0xA3,0xF3,0x89,0x5D,0x0B,0x12,0x69,0xAE } }; // 8620A5B0-015A-57AC-A3F3-895D0B1269AE
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::ClosableNotifierHandler>{ 0x478CEC68,0xEA8E,0x52FC,{ 0x87,0xE2,0xC8,0x19,0xDE,0x00,0x0F,0x92 } }; // 478CEC68-EA8E-52FC-87E2-C819DE000F92
    template <> struct default_interface<winrt::Microsoft::UI::ColorHelper>{ using type = winrt::Microsoft::UI::IColorHelper; };
    template <> struct default_interface<winrt::Microsoft::UI::Colors>{ using type = winrt::Microsoft::UI::IColors; };
    template <> struct abi<winrt::Microsoft::UI::IClosableNotifier>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsClosed(bool*) noexcept = 0;
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_FrameworkClosed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FrameworkClosed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::IColorHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Microsoft::UI::IColorHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromArgb(uint8_t, uint8_t, uint8_t, uint8_t, struct struct_Windows_UI_Color*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::IColors>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Microsoft::UI::IColorsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AliceBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_AntiqueWhite(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Aqua(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Aquamarine(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Azure(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Beige(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Bisque(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Black(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_BlanchedAlmond(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Blue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_BlueViolet(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Brown(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_BurlyWood(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_CadetBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Chartreuse(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Chocolate(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Coral(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_CornflowerBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Cornsilk(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Crimson(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Cyan(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkCyan(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkGoldenrod(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkGray(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkKhaki(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkMagenta(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkOliveGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkOrange(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkOrchid(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkRed(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkSalmon(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkSeaGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkSlateBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkSlateGray(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkTurquoise(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkViolet(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DeepPink(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DeepSkyBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DimGray(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DodgerBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Firebrick(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_FloralWhite(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_ForestGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Fuchsia(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Gainsboro(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_GhostWhite(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Gold(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Goldenrod(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Gray(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Green(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_GreenYellow(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Honeydew(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_HotPink(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_IndianRed(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Indigo(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Ivory(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Khaki(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Lavender(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LavenderBlush(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LawnGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LemonChiffon(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightCoral(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightCyan(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightGoldenrodYellow(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightGray(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightPink(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightSalmon(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightSeaGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightSkyBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightSlateGray(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightSteelBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightYellow(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Lime(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LimeGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Linen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Magenta(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Maroon(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumAquamarine(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumOrchid(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumPurple(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumSeaGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumSlateBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumSpringGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumTurquoise(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumVioletRed(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MidnightBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MintCream(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MistyRose(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Moccasin(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_NavajoWhite(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Navy(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_OldLace(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Olive(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_OliveDrab(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Orange(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_OrangeRed(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Orchid(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_PaleGoldenrod(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_PaleGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_PaleTurquoise(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_PaleVioletRed(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_PapayaWhip(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_PeachPuff(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Peru(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Pink(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Plum(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_PowderBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Purple(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Red(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_RosyBrown(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_RoyalBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SaddleBrown(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Salmon(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SandyBrown(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SeaGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SeaShell(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Sienna(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Silver(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SkyBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SlateBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SlateGray(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Snow(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SpringGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SteelBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Tan(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Teal(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Thistle(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Tomato(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Transparent(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Turquoise(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Violet(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Wheat(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_White(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_WhiteSmoke(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Yellow(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_YellowGreen(struct struct_Windows_UI_Color*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::ClosableNotifierHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke() noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Microsoft_UI_IClosableNotifier
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsClosed() const;
        WINRT_IMPL_AUTO(winrt::event_token) Closed(winrt::Microsoft::UI::ClosableNotifierHandler const& handler) const;
        using Closed_revoker = impl::event_revoker<winrt::Microsoft::UI::IClosableNotifier, &impl::abi_t<winrt::Microsoft::UI::IClosableNotifier>::remove_Closed>;
        [[nodiscard]] Closed_revoker Closed(auto_revoke_t, winrt::Microsoft::UI::ClosableNotifierHandler const& handler) const;
        WINRT_IMPL_AUTO(void) Closed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) FrameworkClosed(winrt::Microsoft::UI::ClosableNotifierHandler const& handler) const;
        using FrameworkClosed_revoker = impl::event_revoker<winrt::Microsoft::UI::IClosableNotifier, &impl::abi_t<winrt::Microsoft::UI::IClosableNotifier>::remove_FrameworkClosed>;
        [[nodiscard]] FrameworkClosed_revoker FrameworkClosed(auto_revoke_t, winrt::Microsoft::UI::ClosableNotifierHandler const& handler) const;
        WINRT_IMPL_AUTO(void) FrameworkClosed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Microsoft::UI::IClosableNotifier>
    {
        template <typename D> using type = consume_Microsoft_UI_IClosableNotifier<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_IColorHelper
    {
    };
    template <> struct consume<winrt::Microsoft::UI::IColorHelper>
    {
        template <typename D> using type = consume_Microsoft_UI_IColorHelper<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_IColorHelperStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::Color) FromArgb(uint8_t a, uint8_t r, uint8_t g, uint8_t b) const;
    };
    template <> struct consume<winrt::Microsoft::UI::IColorHelperStatics>
    {
        template <typename D> using type = consume_Microsoft_UI_IColorHelperStatics<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_IColors
    {
    };
    template <> struct consume<winrt::Microsoft::UI::IColors>
    {
        template <typename D> using type = consume_Microsoft_UI_IColors<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_IColorsStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) AliceBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) AntiqueWhite() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Aqua() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Aquamarine() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Azure() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Beige() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Bisque() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Black() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) BlanchedAlmond() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Blue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) BlueViolet() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Brown() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) BurlyWood() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) CadetBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Chartreuse() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Chocolate() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Coral() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) CornflowerBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Cornsilk() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Crimson() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Cyan() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DarkBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DarkCyan() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DarkGoldenrod() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DarkGray() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DarkGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DarkKhaki() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DarkMagenta() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DarkOliveGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DarkOrange() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DarkOrchid() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DarkRed() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DarkSalmon() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DarkSeaGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DarkSlateBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DarkSlateGray() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DarkTurquoise() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DarkViolet() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DeepPink() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DeepSkyBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DimGray() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DodgerBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Firebrick() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) FloralWhite() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) ForestGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Fuchsia() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Gainsboro() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) GhostWhite() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Gold() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Goldenrod() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Gray() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Green() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) GreenYellow() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Honeydew() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) HotPink() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) IndianRed() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Indigo() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Ivory() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Khaki() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Lavender() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) LavenderBlush() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) LawnGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) LemonChiffon() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) LightBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) LightCoral() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) LightCyan() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) LightGoldenrodYellow() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) LightGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) LightGray() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) LightPink() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) LightSalmon() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) LightSeaGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) LightSkyBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) LightSlateGray() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) LightSteelBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) LightYellow() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Lime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) LimeGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Linen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Magenta() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Maroon() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) MediumAquamarine() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) MediumBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) MediumOrchid() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) MediumPurple() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) MediumSeaGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) MediumSlateBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) MediumSpringGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) MediumTurquoise() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) MediumVioletRed() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) MidnightBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) MintCream() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) MistyRose() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Moccasin() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) NavajoWhite() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Navy() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) OldLace() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Olive() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) OliveDrab() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Orange() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) OrangeRed() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Orchid() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) PaleGoldenrod() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) PaleGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) PaleTurquoise() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) PaleVioletRed() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) PapayaWhip() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) PeachPuff() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Peru() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Pink() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Plum() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) PowderBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Purple() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Red() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) RosyBrown() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) RoyalBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) SaddleBrown() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Salmon() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) SandyBrown() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) SeaGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) SeaShell() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Sienna() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Silver() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) SkyBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) SlateBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) SlateGray() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Snow() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) SpringGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) SteelBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Tan() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Teal() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Thistle() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Tomato() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Transparent() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Turquoise() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Violet() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Wheat() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) White() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) WhiteSmoke() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Yellow() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) YellowGreen() const;
    };
    template <> struct consume<winrt::Microsoft::UI::IColorsStatics>
    {
        template <typename D> using type = consume_Microsoft_UI_IColorsStatics<D>;
    };
    struct struct_Microsoft_UI_DisplayId
    {
        uint64_t Value;
    };
    template <> struct abi<Microsoft::UI::DisplayId>
    {
        using type = struct_Microsoft_UI_DisplayId;
    };
    struct struct_Microsoft_UI_IconId
    {
        uint64_t Value;
    };
    template <> struct abi<Microsoft::UI::IconId>
    {
        using type = struct_Microsoft_UI_IconId;
    };
    struct struct_Microsoft_UI_WindowId
    {
        uint64_t Value;
    };
    template <> struct abi<Microsoft::UI::WindowId>
    {
        using type = struct_Microsoft_UI_WindowId;
    };
}
#endif
