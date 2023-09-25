// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220110.5

#pragma once
#ifndef WINRT_Microsoft_UI_Input_DragDrop_H
#define WINRT_Microsoft_UI_Input_DragDrop_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220110.5"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220110.5"
#include "winrt/Microsoft.UI.Input.h"
#include "winrt/impl/Microsoft.UI.Content.2.h"
#include "winrt/impl/Microsoft.UI.Input.2.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Microsoft.UI.Input.DragDrop.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_UI_Input_DragDrop_IDragDropManager<D>::AreConcurrentOperationsEnabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragDropManager)->get_AreConcurrentOperationsEnabled(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Input_DragDrop_IDragDropManager<D>::AreConcurrentOperationsEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragDropManager)->put_AreConcurrentOperationsEnabled(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Microsoft_UI_Input_DragDrop_IDragDropManager<D>::TargetRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::UI::Input::DragDrop::DragDropManager, winrt::Microsoft::UI::Input::DragDrop::DropOperationTargetRequestedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragDropManager)->add_TargetRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Microsoft_UI_Input_DragDrop_IDragDropManager<D>::TargetRequested_revoker consume_Microsoft_UI_Input_DragDrop_IDragDropManager<D>::TargetRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::UI::Input::DragDrop::DragDropManager, winrt::Microsoft::UI::Input::DragDrop::DropOperationTargetRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, TargetRequested_revoker>(this, TargetRequested(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Input_DragDrop_IDragDropManager<D>::TargetRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragDropManager)->remove_TargetRequested(impl::bind_in(token));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Microsoft::UI::Input::DragDrop::DragDropManager) consume_Microsoft_UI_Input_DragDrop_IDragDropManagerStatics<D>::GetForIsland(winrt::Microsoft::UI::Content::ContentIsland const& content) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragDropManagerStatics)->GetForIsland(*(void**)(&content), &result));
        return winrt::Microsoft::UI::Input::DragDrop::DragDropManager{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation) consume_Microsoft_UI_Input_DragDrop_IDragInfo<D>::AllowedOperations() const
    {
        winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragInfo)->get_AllowedOperations(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::DataTransfer::DataPackageView) consume_Microsoft_UI_Input_DragDrop_IDragInfo<D>::Data() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragInfo)->get_Data(&value));
        return winrt::Windows::ApplicationModel::DataTransfer::DataPackageView{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Microsoft::UI::Input::DragDrop::DragDropModifiers) consume_Microsoft_UI_Input_DragDrop_IDragInfo<D>::Modifiers() const
    {
        winrt::Microsoft::UI::Input::DragDrop::DragDropModifiers value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragInfo)->get_Modifiers(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Point) consume_Microsoft_UI_Input_DragDrop_IDragInfo<D>::Position() const
    {
        winrt::Windows::Foundation::Point value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragInfo)->get_Position(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation) consume_Microsoft_UI_Input_DragDrop_IDragOperation<D>::AllowedOperations() const
    {
        winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragOperation)->get_AllowedOperations(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Input_DragDrop_IDragOperation<D>::AllowedOperations(winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragOperation)->put_AllowedOperations(static_cast<uint32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::DataTransfer::DataPackage) consume_Microsoft_UI_Input_DragDrop_IDragOperation<D>::Data() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragOperation)->get_Data(&value));
        return winrt::Windows::ApplicationModel::DataTransfer::DataPackage{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Microsoft::UI::Input::DragDrop::DragUIContentMode) consume_Microsoft_UI_Input_DragDrop_IDragOperation<D>::DragUIContentMode() const
    {
        winrt::Microsoft::UI::Input::DragDrop::DragUIContentMode value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragOperation)->get_DragUIContentMode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Input_DragDrop_IDragOperation<D>::DragUIContentMode(winrt::Microsoft::UI::Input::DragDrop::DragUIContentMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragOperation)->put_DragUIContentMode(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Input_DragDrop_IDragOperation<D>::SetDragUIContentFromSoftwareBitmap(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragOperation)->SetDragUIContentFromSoftwareBitmap(*(void**)(&bitmap)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Input_DragDrop_IDragOperation<D>::SetDragUIContentFromSoftwareBitmap(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& bitmap, winrt::Windows::Foundation::Point const& anchorPoint) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragOperation)->SetDragUIContentFromSoftwareBitmap2(*(void**)(&bitmap), impl::bind_in(anchorPoint)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>) consume_Microsoft_UI_Input_DragDrop_IDragOperation<D>::StartAsync(winrt::Microsoft::UI::Input::DragDrop::DragDropManager const& initialTarget, winrt::Microsoft::UI::Input::PointerPoint const& initialPointerPoint) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragOperation)->StartAsync(*(void**)(&initialTarget), *(void**)(&initialPointerPoint), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Microsoft_UI_Input_DragDrop_IDragUIOverride<D>::Caption() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragUIOverride)->get_Caption(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Input_DragDrop_IDragUIOverride<D>::Caption(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragUIOverride)->put_Caption(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_UI_Input_DragDrop_IDragUIOverride<D>::IsCaptionVisible() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragUIOverride)->get_IsCaptionVisible(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Input_DragDrop_IDragUIOverride<D>::IsCaptionVisible(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragUIOverride)->put_IsCaptionVisible(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_UI_Input_DragDrop_IDragUIOverride<D>::IsContentVisible() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragUIOverride)->get_IsContentVisible(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Input_DragDrop_IDragUIOverride<D>::IsContentVisible(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragUIOverride)->put_IsContentVisible(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_UI_Input_DragDrop_IDragUIOverride<D>::IsGlyphVisible() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragUIOverride)->get_IsGlyphVisible(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Input_DragDrop_IDragUIOverride<D>::IsGlyphVisible(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragUIOverride)->put_IsGlyphVisible(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Input_DragDrop_IDragUIOverride<D>::Clear() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragUIOverride)->Clear());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Input_DragDrop_IDragUIOverride<D>::SetContentFromSoftwareBitmap(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragUIOverride)->SetContentFromSoftwareBitmap(*(void**)(&bitmap)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Input_DragDrop_IDragUIOverride<D>::SetContentFromSoftwareBitmap(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& bitmap, winrt::Windows::Foundation::Point const& anchorPoint) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDragUIOverride)->SetContentFromSoftwareBitmap2(*(void**)(&bitmap), impl::bind_in(anchorPoint)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>) consume_Microsoft_UI_Input_DragDrop_IDropOperationTarget<D>::DropAsync(winrt::Microsoft::UI::Input::DragDrop::DragInfo const& dragInfo) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDropOperationTarget)->DropAsync(*(void**)(&dragInfo), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>) consume_Microsoft_UI_Input_DragDrop_IDropOperationTarget<D>::EnterAsync(winrt::Microsoft::UI::Input::DragDrop::DragInfo const& dragInfo, winrt::Microsoft::UI::Input::DragDrop::DragUIOverride const& dragUIOverride) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDropOperationTarget)->EnterAsync(*(void**)(&dragInfo), *(void**)(&dragUIOverride), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) consume_Microsoft_UI_Input_DragDrop_IDropOperationTarget<D>::LeaveAsync(winrt::Microsoft::UI::Input::DragDrop::DragInfo const& dragInfo) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDropOperationTarget)->LeaveAsync(*(void**)(&dragInfo), &operation));
        return winrt::Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>) consume_Microsoft_UI_Input_DragDrop_IDropOperationTarget<D>::OverAsync(winrt::Microsoft::UI::Input::DragDrop::DragInfo const& dragInfo, winrt::Microsoft::UI::Input::DragDrop::DragUIOverride const& dragUIOverride) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDropOperationTarget)->OverAsync(*(void**)(&dragInfo), *(void**)(&dragUIOverride), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Input_DragDrop_IDropOperationTargetRequestedEventArgs<D>::SetTarget(winrt::Microsoft::UI::Input::DragDrop::IDropOperationTarget const& target) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Input::DragDrop::IDropOperationTargetRequestedEventArgs)->SetTarget(*(void**)(&target)));
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::UI::Input::DragDrop::IDragDropManager> : produce_base<D, winrt::Microsoft::UI::Input::DragDrop::IDragDropManager>
    {
        int32_t __stdcall get_AreConcurrentOperationsEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AreConcurrentOperationsEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AreConcurrentOperationsEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AreConcurrentOperationsEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_TargetRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().TargetRequested(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::UI::Input::DragDrop::DragDropManager, winrt::Microsoft::UI::Input::DragDrop::DropOperationTargetRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TargetRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::UI::Input::DragDrop::IDragDropManagerStatics> : produce_base<D, winrt::Microsoft::UI::Input::DragDrop::IDragDropManagerStatics>
    {
        int32_t __stdcall GetForIsland(void* content, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Microsoft::UI::Input::DragDrop::DragDropManager>(this->shim().GetForIsland(*reinterpret_cast<winrt::Microsoft::UI::Content::ContentIsland const*>(&content)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::UI::Input::DragDrop::IDragInfo> : produce_base<D, winrt::Microsoft::UI::Input::DragDrop::IDragInfo>
    {
        int32_t __stdcall get_AllowedOperations(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>(this->shim().AllowedOperations());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Data(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::DataTransfer::DataPackageView>(this->shim().Data());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Modifiers(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Microsoft::UI::Input::DragDrop::DragDropModifiers>(this->shim().Modifiers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Position(winrt::Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Point>(this->shim().Position());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::UI::Input::DragDrop::IDragOperation> : produce_base<D, winrt::Microsoft::UI::Input::DragDrop::IDragOperation>
    {
        int32_t __stdcall get_AllowedOperations(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>(this->shim().AllowedOperations());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllowedOperations(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowedOperations(*reinterpret_cast<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Data(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::DataTransfer::DataPackage>(this->shim().Data());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DragUIContentMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Microsoft::UI::Input::DragDrop::DragUIContentMode>(this->shim().DragUIContentMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DragUIContentMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DragUIContentMode(*reinterpret_cast<winrt::Microsoft::UI::Input::DragDrop::DragUIContentMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetDragUIContentFromSoftwareBitmap(void* bitmap) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDragUIContentFromSoftwareBitmap(*reinterpret_cast<winrt::Windows::Graphics::Imaging::SoftwareBitmap const*>(&bitmap));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetDragUIContentFromSoftwareBitmap2(void* bitmap, winrt::Windows::Foundation::Point anchorPoint) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDragUIContentFromSoftwareBitmap(*reinterpret_cast<winrt::Windows::Graphics::Imaging::SoftwareBitmap const*>(&bitmap), *reinterpret_cast<winrt::Windows::Foundation::Point const*>(&anchorPoint));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartAsync(void* initialTarget, void* initialPointerPoint, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>>(this->shim().StartAsync(*reinterpret_cast<winrt::Microsoft::UI::Input::DragDrop::DragDropManager const*>(&initialTarget), *reinterpret_cast<winrt::Microsoft::UI::Input::PointerPoint const*>(&initialPointerPoint)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::UI::Input::DragDrop::IDragUIOverride> : produce_base<D, winrt::Microsoft::UI::Input::DragDrop::IDragUIOverride>
    {
        int32_t __stdcall get_Caption(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Caption());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Caption(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Caption(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsCaptionVisible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCaptionVisible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsCaptionVisible(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCaptionVisible(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsContentVisible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsContentVisible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsContentVisible(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsContentVisible(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsGlyphVisible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsGlyphVisible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsGlyphVisible(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsGlyphVisible(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Clear() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetContentFromSoftwareBitmap(void* bitmap) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetContentFromSoftwareBitmap(*reinterpret_cast<winrt::Windows::Graphics::Imaging::SoftwareBitmap const*>(&bitmap));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetContentFromSoftwareBitmap2(void* bitmap, winrt::Windows::Foundation::Point anchorPoint) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetContentFromSoftwareBitmap(*reinterpret_cast<winrt::Windows::Graphics::Imaging::SoftwareBitmap const*>(&bitmap), *reinterpret_cast<winrt::Windows::Foundation::Point const*>(&anchorPoint));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Microsoft::UI::Input::DragDrop::IDropOperationTarget> : produce_base<D, winrt::Microsoft::UI::Input::DragDrop::IDropOperationTarget>
    {
        int32_t __stdcall DropAsync(void* dragInfo, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>>(this->shim().DropAsync(*reinterpret_cast<winrt::Microsoft::UI::Input::DragDrop::DragInfo const*>(&dragInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall EnterAsync(void* dragInfo, void* dragUIOverride, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>>(this->shim().EnterAsync(*reinterpret_cast<winrt::Microsoft::UI::Input::DragDrop::DragInfo const*>(&dragInfo), *reinterpret_cast<winrt::Microsoft::UI::Input::DragDrop::DragUIOverride const*>(&dragUIOverride)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LeaveAsync(void* dragInfo, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().LeaveAsync(*reinterpret_cast<winrt::Microsoft::UI::Input::DragDrop::DragInfo const*>(&dragInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall OverAsync(void* dragInfo, void* dragUIOverride, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>>(this->shim().OverAsync(*reinterpret_cast<winrt::Microsoft::UI::Input::DragDrop::DragInfo const*>(&dragInfo), *reinterpret_cast<winrt::Microsoft::UI::Input::DragDrop::DragUIOverride const*>(&dragUIOverride)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::UI::Input::DragDrop::IDropOperationTargetRequestedEventArgs> : produce_base<D, winrt::Microsoft::UI::Input::DragDrop::IDropOperationTargetRequestedEventArgs>
    {
        int32_t __stdcall SetTarget(void* target) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetTarget(*reinterpret_cast<winrt::Microsoft::UI::Input::DragDrop::IDropOperationTarget const*>(&target));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Microsoft::UI::Input::DragDrop
{
    constexpr auto operator|(DragDropModifiers const left, DragDropModifiers const right) noexcept
    {
        return static_cast<DragDropModifiers>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(DragDropModifiers& left, DragDropModifiers const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(DragDropModifiers const left, DragDropModifiers const right) noexcept
    {
        return static_cast<DragDropModifiers>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(DragDropModifiers& left, DragDropModifiers const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(DragDropModifiers const value) noexcept
    {
        return static_cast<DragDropModifiers>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(DragDropModifiers const left, DragDropModifiers const right) noexcept
    {
        return static_cast<DragDropModifiers>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(DragDropModifiers& left, DragDropModifiers const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline auto DragDropManager::GetForIsland(winrt::Microsoft::UI::Content::ContentIsland const& content)
    {
        return impl::call_factory<DragDropManager, IDragDropManagerStatics>([&](IDragDropManagerStatics const& f) { return f.GetForIsland(content); });
    }
    inline DragOperation::DragOperation() :
        DragOperation(impl::call_factory_cast<DragOperation(*)(winrt::Windows::Foundation::IActivationFactory const&), DragOperation>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<DragOperation>(); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Microsoft::UI::Input::DragDrop::IDragDropManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Input::DragDrop::IDragDropManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Input::DragDrop::IDragInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Input::DragDrop::IDragOperation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Input::DragDrop::IDragUIOverride> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Input::DragDrop::IDropOperationTarget> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Input::DragDrop::IDropOperationTargetRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Input::DragDrop::DragDropManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Input::DragDrop::DragInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Input::DragDrop::DragOperation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Input::DragDrop::DragUIOverride> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Input::DragDrop::DropOperationTargetRequestedEventArgs> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
