// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220110.5

#pragma once
#ifndef WINRT_Microsoft_UI_Input_2_H
#define WINRT_Microsoft_UI_Input_2_H
#include "winrt/impl/Microsoft.UI.2.h"
#include "winrt/impl/Microsoft.UI.Content.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Microsoft.UI.Input.1.h"
WINRT_EXPORT namespace winrt::Microsoft::UI::Input
{
    struct CrossSlideThresholds
    {
        float SelectionStart;
        float SpeedBumpStart;
        float SpeedBumpEnd;
        float RearrangeStart;
    };
    inline bool operator==(CrossSlideThresholds const& left, CrossSlideThresholds const& right) noexcept
    {
        return left.SelectionStart == right.SelectionStart && left.SpeedBumpStart == right.SpeedBumpStart && left.SpeedBumpEnd == right.SpeedBumpEnd && left.RearrangeStart == right.RearrangeStart;
    }
    inline bool operator!=(CrossSlideThresholds const& left, CrossSlideThresholds const& right) noexcept
    {
        return !(left == right);
    }
    struct ManipulationDelta
    {
        winrt::Windows::Foundation::Point Translation;
        float Scale;
        float Rotation;
        float Expansion;
    };
    inline bool operator==(ManipulationDelta const& left, ManipulationDelta const& right) noexcept
    {
        return left.Translation == right.Translation && left.Scale == right.Scale && left.Rotation == right.Rotation && left.Expansion == right.Expansion;
    }
    inline bool operator!=(ManipulationDelta const& left, ManipulationDelta const& right) noexcept
    {
        return !(left == right);
    }
    struct ManipulationVelocities
    {
        winrt::Windows::Foundation::Point Linear;
        float Angular;
        float Expansion;
    };
    inline bool operator==(ManipulationVelocities const& left, ManipulationVelocities const& right) noexcept
    {
        return left.Linear == right.Linear && left.Angular == right.Angular && left.Expansion == right.Expansion;
    }
    inline bool operator!=(ManipulationVelocities const& left, ManipulationVelocities const& right) noexcept
    {
        return !(left == right);
    }
    struct PhysicalKeyStatus
    {
        uint32_t RepeatCount;
        uint32_t ScanCode;
        bool IsExtendedKey;
        bool IsMenuKeyDown;
        bool WasKeyDown;
        bool IsKeyReleased;
    };
    inline bool operator==(PhysicalKeyStatus const& left, PhysicalKeyStatus const& right) noexcept
    {
        return left.RepeatCount == right.RepeatCount && left.ScanCode == right.ScanCode && left.IsExtendedKey == right.IsExtendedKey && left.IsMenuKeyDown == right.IsMenuKeyDown && left.WasKeyDown == right.WasKeyDown && left.IsKeyReleased == right.IsKeyReleased;
    }
    inline bool operator!=(PhysicalKeyStatus const& left, PhysicalKeyStatus const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) CharacterReceivedEventArgs : winrt::Microsoft::UI::Input::ICharacterReceivedEventArgs
    {
        CharacterReceivedEventArgs(std::nullptr_t) noexcept {}
        CharacterReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::ICharacterReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContextMenuKeyEventArgs : winrt::Microsoft::UI::Input::IContextMenuKeyEventArgs
    {
        ContextMenuKeyEventArgs(std::nullptr_t) noexcept {}
        ContextMenuKeyEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IContextMenuKeyEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CrossSlidingEventArgs : winrt::Microsoft::UI::Input::ICrossSlidingEventArgs
    {
        CrossSlidingEventArgs(std::nullptr_t) noexcept {}
        CrossSlidingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::ICrossSlidingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DraggingEventArgs : winrt::Microsoft::UI::Input::IDraggingEventArgs
    {
        DraggingEventArgs(std::nullptr_t) noexcept {}
        DraggingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IDraggingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FocusChangedEventArgs : winrt::Microsoft::UI::Input::IFocusChangedEventArgs
    {
        FocusChangedEventArgs(std::nullptr_t) noexcept {}
        FocusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IFocusChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GestureRecognizer : winrt::Microsoft::UI::Input::IGestureRecognizer
    {
        GestureRecognizer(std::nullptr_t) noexcept {}
        GestureRecognizer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IGestureRecognizer(ptr, take_ownership_from_abi) {}
        GestureRecognizer();
    };
    struct __declspec(empty_bases) HoldingEventArgs : winrt::Microsoft::UI::Input::IHoldingEventArgs
    {
        HoldingEventArgs(std::nullptr_t) noexcept {}
        HoldingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IHoldingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InputActivationListener : winrt::Microsoft::UI::Input::IInputActivationListener,
        impl::base<InputActivationListener, winrt::Microsoft::UI::Input::InputObject>,
        impl::require<InputActivationListener, winrt::Microsoft::UI::Input::IInputObject>
    {
        InputActivationListener(std::nullptr_t) noexcept {}
        InputActivationListener(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IInputActivationListener(ptr, take_ownership_from_abi) {}
        static auto GetForWindowId(winrt::Microsoft::UI::WindowId const& windowId);
        static auto GetForIsland(winrt::Microsoft::UI::Content::ContentIsland const& island);
    };
    struct __declspec(empty_bases) InputActivationListenerActivationChangedEventArgs : winrt::Microsoft::UI::Input::IInputActivationListenerActivationChangedEventArgs
    {
        InputActivationListenerActivationChangedEventArgs(std::nullptr_t) noexcept {}
        InputActivationListenerActivationChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IInputActivationListenerActivationChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InputCursor : winrt::Microsoft::UI::Input::IInputCursor,
        impl::require<InputCursor, winrt::Windows::Foundation::IClosable>
    {
        InputCursor(std::nullptr_t) noexcept {}
        InputCursor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IInputCursor(ptr, take_ownership_from_abi) {}
        static auto CreateFromCoreCursor(winrt::Windows::UI::Core::CoreCursor const& cursor);
    };
    struct __declspec(empty_bases) InputCustomCursor : winrt::Microsoft::UI::Input::IInputCustomCursor,
        impl::base<InputCustomCursor, winrt::Microsoft::UI::Input::InputCursor>,
        impl::require<InputCustomCursor, winrt::Microsoft::UI::Input::IInputCursor, winrt::Windows::Foundation::IClosable>
    {
        InputCustomCursor(std::nullptr_t) noexcept {}
        InputCustomCursor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IInputCustomCursor(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InputDesktopNamedResourceCursor : winrt::Microsoft::UI::Input::IInputDesktopNamedResourceCursor,
        impl::base<InputDesktopNamedResourceCursor, winrt::Microsoft::UI::Input::InputCursor>,
        impl::require<InputDesktopNamedResourceCursor, winrt::Microsoft::UI::Input::IInputCursor, winrt::Windows::Foundation::IClosable>
    {
        InputDesktopNamedResourceCursor(std::nullptr_t) noexcept {}
        InputDesktopNamedResourceCursor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IInputDesktopNamedResourceCursor(ptr, take_ownership_from_abi) {}
        static auto Create(param::hstring const& resourceName);
        static auto CreateFromModule(param::hstring const& moduleName, param::hstring const& resourceName);
    };
    struct __declspec(empty_bases) InputDesktopResourceCursor : winrt::Microsoft::UI::Input::IInputDesktopResourceCursor,
        impl::base<InputDesktopResourceCursor, winrt::Microsoft::UI::Input::InputCursor>,
        impl::require<InputDesktopResourceCursor, winrt::Microsoft::UI::Input::IInputCursor, winrt::Windows::Foundation::IClosable>
    {
        InputDesktopResourceCursor(std::nullptr_t) noexcept {}
        InputDesktopResourceCursor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IInputDesktopResourceCursor(ptr, take_ownership_from_abi) {}
        static auto Create(uint32_t resourceId);
        static auto CreateFromModule(param::hstring const& moduleName, uint32_t resourceId);
    };
    struct __declspec(empty_bases) InputFocusChangedEventArgs : winrt::Microsoft::UI::Input::IInputFocusChangedEventArgs
    {
        InputFocusChangedEventArgs(std::nullptr_t) noexcept {}
        InputFocusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IInputFocusChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InputFocusController : winrt::Microsoft::UI::Input::IInputFocusController,
        impl::base<InputFocusController, winrt::Microsoft::UI::Input::InputObject>,
        impl::require<InputFocusController, winrt::Microsoft::UI::Input::IInputObject>
    {
        InputFocusController(std::nullptr_t) noexcept {}
        InputFocusController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IInputFocusController(ptr, take_ownership_from_abi) {}
        static auto GetForIsland(winrt::Microsoft::UI::Content::ContentIsland const& island);
    };
    struct __declspec(empty_bases) InputKeyboardSource : winrt::Microsoft::UI::Input::IInputKeyboardSource,
        impl::base<InputKeyboardSource, winrt::Microsoft::UI::Input::InputObject>,
        impl::require<InputKeyboardSource, winrt::Microsoft::UI::Input::IInputKeyboardSource2, winrt::Microsoft::UI::Input::IInputObject>
    {
        InputKeyboardSource(std::nullptr_t) noexcept {}
        InputKeyboardSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IInputKeyboardSource(ptr, take_ownership_from_abi) {}
        static auto GetKeyStateForCurrentThread(winrt::Windows::System::VirtualKey const& virtualKey);
        static auto GetForIsland(winrt::Microsoft::UI::Content::ContentIsland const& island);
    };
    struct __declspec(empty_bases) InputLightDismissAction : winrt::Microsoft::UI::Input::IInputLightDismissAction,
        impl::base<InputLightDismissAction, winrt::Microsoft::UI::Input::InputObject>,
        impl::require<InputLightDismissAction, winrt::Microsoft::UI::Input::IInputObject>
    {
        InputLightDismissAction(std::nullptr_t) noexcept {}
        InputLightDismissAction(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IInputLightDismissAction(ptr, take_ownership_from_abi) {}
        static auto GetForWindowId(winrt::Microsoft::UI::WindowId const& windowId);
    };
    struct __declspec(empty_bases) InputLightDismissEventArgs : winrt::Microsoft::UI::Input::IInputLightDismissEventArgs
    {
        InputLightDismissEventArgs(std::nullptr_t) noexcept {}
        InputLightDismissEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IInputLightDismissEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InputNonClientPointerSource : winrt::Microsoft::UI::Input::IInputNonClientPointerSource
    {
        InputNonClientPointerSource(std::nullptr_t) noexcept {}
        InputNonClientPointerSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IInputNonClientPointerSource(ptr, take_ownership_from_abi) {}
        static auto GetForWindowId(winrt::Microsoft::UI::WindowId const& windowId);
    };
    struct __declspec(empty_bases) InputObject : winrt::Microsoft::UI::Input::IInputObject
    {
        InputObject(std::nullptr_t) noexcept {}
        InputObject(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IInputObject(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InputPointerSource : winrt::Microsoft::UI::Input::IInputPointerSource,
        impl::base<InputPointerSource, winrt::Microsoft::UI::Input::InputObject>,
        impl::require<InputPointerSource, winrt::Microsoft::UI::Input::IInputObject>
    {
        InputPointerSource(std::nullptr_t) noexcept {}
        InputPointerSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IInputPointerSource(ptr, take_ownership_from_abi) {}
        static auto GetForIsland(winrt::Microsoft::UI::Content::ContentIsland const& island);
    };
    struct __declspec(empty_bases) InputPreTranslateKeyboardSource : winrt::Microsoft::UI::Input::IInputPreTranslateKeyboardSource,
        impl::base<InputPreTranslateKeyboardSource, winrt::Microsoft::UI::Input::InputObject>,
        impl::require<InputPreTranslateKeyboardSource, winrt::Microsoft::UI::Input::IInputObject>
    {
        InputPreTranslateKeyboardSource(std::nullptr_t) noexcept {}
        InputPreTranslateKeyboardSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IInputPreTranslateKeyboardSource(ptr, take_ownership_from_abi) {}
        static auto GetForIsland(winrt::Microsoft::UI::Content::ContentIsland const& island);
    };
    struct __declspec(empty_bases) InputSystemCursor : winrt::Microsoft::UI::Input::IInputSystemCursor,
        impl::base<InputSystemCursor, winrt::Microsoft::UI::Input::InputCursor>,
        impl::require<InputSystemCursor, winrt::Microsoft::UI::Input::IInputCursor, winrt::Windows::Foundation::IClosable>
    {
        InputSystemCursor(std::nullptr_t) noexcept {}
        InputSystemCursor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IInputSystemCursor(ptr, take_ownership_from_abi) {}
        static auto Create(winrt::Microsoft::UI::Input::InputSystemCursorShape const& type);
    };
    struct __declspec(empty_bases) KeyEventArgs : winrt::Microsoft::UI::Input::IKeyEventArgs
    {
        KeyEventArgs(std::nullptr_t) noexcept {}
        KeyEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IKeyEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ManipulationCompletedEventArgs : winrt::Microsoft::UI::Input::IManipulationCompletedEventArgs
    {
        ManipulationCompletedEventArgs(std::nullptr_t) noexcept {}
        ManipulationCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IManipulationCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ManipulationInertiaStartingEventArgs : winrt::Microsoft::UI::Input::IManipulationInertiaStartingEventArgs
    {
        ManipulationInertiaStartingEventArgs(std::nullptr_t) noexcept {}
        ManipulationInertiaStartingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IManipulationInertiaStartingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ManipulationStartedEventArgs : winrt::Microsoft::UI::Input::IManipulationStartedEventArgs
    {
        ManipulationStartedEventArgs(std::nullptr_t) noexcept {}
        ManipulationStartedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IManipulationStartedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ManipulationUpdatedEventArgs : winrt::Microsoft::UI::Input::IManipulationUpdatedEventArgs
    {
        ManipulationUpdatedEventArgs(std::nullptr_t) noexcept {}
        ManipulationUpdatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IManipulationUpdatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MouseWheelParameters : winrt::Microsoft::UI::Input::IMouseWheelParameters
    {
        MouseWheelParameters(std::nullptr_t) noexcept {}
        MouseWheelParameters(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IMouseWheelParameters(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NonClientCaptionTappedEventArgs : winrt::Microsoft::UI::Input::INonClientCaptionTappedEventArgs
    {
        NonClientCaptionTappedEventArgs(std::nullptr_t) noexcept {}
        NonClientCaptionTappedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::INonClientCaptionTappedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NonClientPointerEventArgs : winrt::Microsoft::UI::Input::INonClientPointerEventArgs
    {
        NonClientPointerEventArgs(std::nullptr_t) noexcept {}
        NonClientPointerEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::INonClientPointerEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NonClientRegionsChangedEventArgs : winrt::Microsoft::UI::Input::INonClientRegionsChangedEventArgs
    {
        NonClientRegionsChangedEventArgs(std::nullptr_t) noexcept {}
        NonClientRegionsChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::INonClientRegionsChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PointerEventArgs : winrt::Microsoft::UI::Input::IPointerEventArgs
    {
        PointerEventArgs(std::nullptr_t) noexcept {}
        PointerEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IPointerEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PointerPoint : winrt::Microsoft::UI::Input::IPointerPoint
    {
        PointerPoint(std::nullptr_t) noexcept {}
        PointerPoint(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IPointerPoint(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PointerPointProperties : winrt::Microsoft::UI::Input::IPointerPointProperties
    {
        PointerPointProperties(std::nullptr_t) noexcept {}
        PointerPointProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IPointerPointProperties(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PointerPredictor : winrt::Microsoft::UI::Input::IPointerPredictor,
        impl::require<PointerPredictor, winrt::Windows::Foundation::IClosable>
    {
        PointerPredictor(std::nullptr_t) noexcept {}
        PointerPredictor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IPointerPredictor(ptr, take_ownership_from_abi) {}
        static auto CreateForInputPointerSource(winrt::Microsoft::UI::Input::InputPointerSource const& inputPointerSource);
    };
    struct __declspec(empty_bases) RightTappedEventArgs : winrt::Microsoft::UI::Input::IRightTappedEventArgs
    {
        RightTappedEventArgs(std::nullptr_t) noexcept {}
        RightTappedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::IRightTappedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TappedEventArgs : winrt::Microsoft::UI::Input::ITappedEventArgs
    {
        TappedEventArgs(std::nullptr_t) noexcept {}
        TappedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Input::ITappedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
