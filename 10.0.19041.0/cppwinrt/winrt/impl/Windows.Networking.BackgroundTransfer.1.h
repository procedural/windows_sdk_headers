// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Networking_BackgroundTransfer_1_H
#define WINRT_Windows_Networking_BackgroundTransfer_1_H
#include "winrt/impl/Windows.Networking.BackgroundTransfer.0.h"
namespace winrt::Windows::Networking::BackgroundTransfer
{
    struct __declspec(empty_bases) IBackgroundDownloader :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundDownloader>,
        impl::require<Windows::Networking::BackgroundTransfer::IBackgroundDownloader, Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>
    {
        IBackgroundDownloader(std::nullptr_t = nullptr) noexcept {}
        IBackgroundDownloader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundDownloader2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundDownloader2>
    {
        IBackgroundDownloader2(std::nullptr_t = nullptr) noexcept {}
        IBackgroundDownloader2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundDownloader3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundDownloader3>
    {
        IBackgroundDownloader3(std::nullptr_t = nullptr) noexcept {}
        IBackgroundDownloader3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundDownloaderFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundDownloaderFactory>
    {
        IBackgroundDownloaderFactory(std::nullptr_t = nullptr) noexcept {}
        IBackgroundDownloaderFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundDownloaderStaticMethods :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundDownloaderStaticMethods>
    {
        IBackgroundDownloaderStaticMethods(std::nullptr_t = nullptr) noexcept {}
        IBackgroundDownloaderStaticMethods(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundDownloaderStaticMethods2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundDownloaderStaticMethods2>
    {
        IBackgroundDownloaderStaticMethods2(std::nullptr_t = nullptr) noexcept {}
        IBackgroundDownloaderStaticMethods2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundDownloaderUserConsent :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundDownloaderUserConsent>
    {
        IBackgroundDownloaderUserConsent(std::nullptr_t = nullptr) noexcept {}
        IBackgroundDownloaderUserConsent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTransferBase :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferBase>
    {
        IBackgroundTransferBase(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTransferBase(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTransferCompletionGroup :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferCompletionGroup>
    {
        IBackgroundTransferCompletionGroup(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTransferCompletionGroup(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTransferCompletionGroupTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferCompletionGroupTriggerDetails>
    {
        IBackgroundTransferCompletionGroupTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTransferCompletionGroupTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTransferContentPart :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferContentPart>
    {
        IBackgroundTransferContentPart(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTransferContentPart(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTransferContentPartFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferContentPartFactory>
    {
        IBackgroundTransferContentPartFactory(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTransferContentPartFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTransferErrorStaticMethods :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferErrorStaticMethods>
    {
        IBackgroundTransferErrorStaticMethods(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTransferErrorStaticMethods(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTransferGroup :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferGroup>
    {
        IBackgroundTransferGroup(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTransferGroup(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTransferGroupStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferGroupStatics>
    {
        IBackgroundTransferGroupStatics(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTransferGroupStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTransferOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferOperation>
    {
        IBackgroundTransferOperation(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTransferOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTransferOperationPriority :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferOperationPriority>
    {
        IBackgroundTransferOperationPriority(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTransferOperationPriority(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTransferRangesDownloadedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferRangesDownloadedEventArgs>
    {
        IBackgroundTransferRangesDownloadedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTransferRangesDownloadedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundUploader :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundUploader>,
        impl::require<Windows::Networking::BackgroundTransfer::IBackgroundUploader, Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>
    {
        IBackgroundUploader(std::nullptr_t = nullptr) noexcept {}
        IBackgroundUploader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundUploader2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundUploader2>
    {
        IBackgroundUploader2(std::nullptr_t = nullptr) noexcept {}
        IBackgroundUploader2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundUploader3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundUploader3>
    {
        IBackgroundUploader3(std::nullptr_t = nullptr) noexcept {}
        IBackgroundUploader3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundUploaderFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundUploaderFactory>
    {
        IBackgroundUploaderFactory(std::nullptr_t = nullptr) noexcept {}
        IBackgroundUploaderFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundUploaderStaticMethods :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundUploaderStaticMethods>
    {
        IBackgroundUploaderStaticMethods(std::nullptr_t = nullptr) noexcept {}
        IBackgroundUploaderStaticMethods(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundUploaderStaticMethods2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundUploaderStaticMethods2>
    {
        IBackgroundUploaderStaticMethods2(std::nullptr_t = nullptr) noexcept {}
        IBackgroundUploaderStaticMethods2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundUploaderUserConsent :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundUploaderUserConsent>
    {
        IBackgroundUploaderUserConsent(std::nullptr_t = nullptr) noexcept {}
        IBackgroundUploaderUserConsent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContentPrefetcher :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContentPrefetcher>
    {
        IContentPrefetcher(std::nullptr_t = nullptr) noexcept {}
        IContentPrefetcher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContentPrefetcherTime :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContentPrefetcherTime>
    {
        IContentPrefetcherTime(std::nullptr_t = nullptr) noexcept {}
        IContentPrefetcherTime(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDownloadOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDownloadOperation>,
        impl::require<Windows::Networking::BackgroundTransfer::IDownloadOperation, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>
    {
        IDownloadOperation(std::nullptr_t = nullptr) noexcept {}
        IDownloadOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDownloadOperation2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDownloadOperation2>
    {
        IDownloadOperation2(std::nullptr_t = nullptr) noexcept {}
        IDownloadOperation2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDownloadOperation3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDownloadOperation3>
    {
        IDownloadOperation3(std::nullptr_t = nullptr) noexcept {}
        IDownloadOperation3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDownloadOperation4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDownloadOperation4>
    {
        IDownloadOperation4(std::nullptr_t = nullptr) noexcept {}
        IDownloadOperation4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDownloadOperation5 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDownloadOperation5>
    {
        IDownloadOperation5(std::nullptr_t = nullptr) noexcept {}
        IDownloadOperation5(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IResponseInformation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IResponseInformation>
    {
        IResponseInformation(std::nullptr_t = nullptr) noexcept {}
        IResponseInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUnconstrainedTransferRequestResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUnconstrainedTransferRequestResult>
    {
        IUnconstrainedTransferRequestResult(std::nullptr_t = nullptr) noexcept {}
        IUnconstrainedTransferRequestResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUploadOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUploadOperation>,
        impl::require<Windows::Networking::BackgroundTransfer::IUploadOperation, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>
    {
        IUploadOperation(std::nullptr_t = nullptr) noexcept {}
        IUploadOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUploadOperation2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUploadOperation2>
    {
        IUploadOperation2(std::nullptr_t = nullptr) noexcept {}
        IUploadOperation2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUploadOperation3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUploadOperation3>
    {
        IUploadOperation3(std::nullptr_t = nullptr) noexcept {}
        IUploadOperation3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUploadOperation4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUploadOperation4>
    {
        IUploadOperation4(std::nullptr_t = nullptr) noexcept {}
        IUploadOperation4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
