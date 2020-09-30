// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_VoiceCommands_0_H
#define WINRT_Windows_ApplicationModel_VoiceCommands_0_H
namespace winrt::Windows::ApplicationModel::AppService
{
    struct AppServiceTriggerDetails;
}
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Globalization
{
    struct Language;
}
namespace winrt::Windows::Media::SpeechRecognition
{
    struct SpeechRecognitionResult;
}
namespace winrt::Windows::Storage
{
    struct IStorageFile;
    struct StorageFile;
}
namespace winrt::Windows::ApplicationModel::VoiceCommands
{
    enum class VoiceCommandCompletionReason : int32_t
    {
        Unknown = 0,
        CommunicationFailed = 1,
        ResourceLimitsExceeded = 2,
        Canceled = 3,
        TimeoutExceeded = 4,
        AppLaunched = 5,
        Completed = 6,
    };
    enum class VoiceCommandContentTileType : int32_t
    {
        TitleOnly = 0,
        TitleWithText = 1,
        TitleWith68x68Icon = 2,
        TitleWith68x68IconAndText = 3,
        TitleWith68x92Icon = 4,
        TitleWith68x92IconAndText = 5,
        TitleWith280x140Icon = 6,
        TitleWith280x140IconAndText = 7,
    };
    struct IVoiceCommand;
    struct IVoiceCommandCompletedEventArgs;
    struct IVoiceCommandConfirmationResult;
    struct IVoiceCommandContentTile;
    struct IVoiceCommandDefinition;
    struct IVoiceCommandDefinitionManagerStatics;
    struct IVoiceCommandDisambiguationResult;
    struct IVoiceCommandResponse;
    struct IVoiceCommandResponseStatics;
    struct IVoiceCommandServiceConnection;
    struct IVoiceCommandServiceConnectionStatics;
    struct IVoiceCommandUserMessage;
    struct VoiceCommand;
    struct VoiceCommandCompletedEventArgs;
    struct VoiceCommandConfirmationResult;
    struct VoiceCommandContentTile;
    struct VoiceCommandDefinition;
    struct VoiceCommandDefinitionManager;
    struct VoiceCommandDisambiguationResult;
    struct VoiceCommandResponse;
    struct VoiceCommandServiceConnection;
    struct VoiceCommandUserMessage;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::VoiceCommands::IVoiceCommand>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinitionManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponseStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnectionStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::VoiceCommand>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::VoiceCommandConfirmationResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinition>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinitionManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::VoiceCommandDisambiguationResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletionReason>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTileType>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::IVoiceCommand>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.IVoiceCommand" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandCompletedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandConfirmationResult" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandContentTile" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandDefinition" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinitionManagerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandDefinitionManagerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandDisambiguationResult" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandResponse" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponseStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandResponseStatics" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandServiceConnection" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnectionStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandServiceConnectionStatics" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandUserMessage" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::VoiceCommand>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.VoiceCommand" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.VoiceCommandCompletedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::VoiceCommandConfirmationResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.VoiceCommandConfirmationResult" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.VoiceCommandContentTile" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinition>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinition" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinitionManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinitionManager" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::VoiceCommandDisambiguationResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.VoiceCommandDisambiguationResult" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.VoiceCommandResponse" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.VoiceCommandServiceConnection" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.VoiceCommandUserMessage" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletionReason>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.VoiceCommandCompletionReason" };
    };
    template <> struct name<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTileType>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.VoiceCommands.VoiceCommandContentTileType" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::VoiceCommands::IVoiceCommand>
    {
        static constexpr guid value{ 0x936F5273,0xEC82,0x42A6,{ 0xA5,0x5C,0xD2,0xD7,0x9E,0xC6,0xF9,0x20 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs>
    {
        static constexpr guid value{ 0xC85E675D,0xFE42,0x432C,{ 0x99,0x07,0x09,0xDF,0x9F,0xCF,0x64,0xE8 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult>
    {
        static constexpr guid value{ 0xA022593E,0x8221,0x4526,{ 0xB0,0x83,0x84,0x09,0x72,0x26,0x22,0x47 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile>
    {
        static constexpr guid value{ 0x3EEFE9F0,0xB8C7,0x4C76,{ 0xA0,0xDE,0x16,0x07,0x89,0x5E,0xE3,0x27 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition>
    {
        static constexpr guid value{ 0x7972AAD0,0x0974,0x4979,{ 0x98,0x4B,0xCB,0x89,0x59,0xCD,0x61,0xAE } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinitionManagerStatics>
    {
        static constexpr guid value{ 0x8FE7A69E,0x067E,0x4F16,{ 0xA1,0x8C,0x5B,0x17,0xE9,0x49,0x99,0x40 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult>
    {
        static constexpr guid value{ 0xECC68CFE,0xC9AC,0x45DF,{ 0xA8,0xEA,0xFE,0xEA,0x08,0xEF,0x9C,0x5E } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse>
    {
        static constexpr guid value{ 0x0284B30E,0x8A3B,0x4CC4,{ 0xA6,0xA1,0xCA,0xD5,0xBE,0x27,0x16,0xB5 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponseStatics>
    {
        static constexpr guid value{ 0x2932F813,0x0D3B,0x49F2,{ 0x96,0xDD,0x62,0x50,0x19,0xBD,0x3B,0x5D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection>
    {
        static constexpr guid value{ 0xD894BB9F,0x21DA,0x44A4,{ 0x98,0xA2,0xFB,0x13,0x19,0x20,0xA9,0xCC } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnectionStatics>
    {
        static constexpr guid value{ 0x370EBFFB,0x2D34,0x42DF,{ 0x87,0x70,0x07,0x4D,0x0F,0x33,0x46,0x97 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage>
    {
        static constexpr guid value{ 0x674EB3C0,0x44F6,0x4F07,{ 0xB9,0x79,0x4C,0x72,0x3F,0xC0,0x85,0x97 } };
    };
    template <> struct default_interface<Windows::ApplicationModel::VoiceCommands::VoiceCommand>
    {
        using type = Windows::ApplicationModel::VoiceCommands::IVoiceCommand;
    };
    template <> struct default_interface<Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletedEventArgs>
    {
        using type = Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::VoiceCommands::VoiceCommandConfirmationResult>
    {
        using type = Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult;
    };
    template <> struct default_interface<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile>
    {
        using type = Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile;
    };
    template <> struct default_interface<Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinition>
    {
        using type = Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition;
    };
    template <> struct default_interface<Windows::ApplicationModel::VoiceCommands::VoiceCommandDisambiguationResult>
    {
        using type = Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult;
    };
    template <> struct default_interface<Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse>
    {
        using type = Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse;
    };
    template <> struct default_interface<Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection>
    {
        using type = Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection;
    };
    template <> struct default_interface<Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage>
    {
        using type = Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage;
    };
    template <> struct abi<Windows::ApplicationModel::VoiceCommands::IVoiceCommand>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CommandName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall get_SpeechRecognitionResult(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Confirmed(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_TextLine1(void**) noexcept = 0;
            virtual int32_t __stdcall put_TextLine1(void*) noexcept = 0;
            virtual int32_t __stdcall get_TextLine2(void**) noexcept = 0;
            virtual int32_t __stdcall put_TextLine2(void*) noexcept = 0;
            virtual int32_t __stdcall get_TextLine3(void**) noexcept = 0;
            virtual int32_t __stdcall put_TextLine3(void*) noexcept = 0;
            virtual int32_t __stdcall get_Image(void**) noexcept = 0;
            virtual int32_t __stdcall put_Image(void*) noexcept = 0;
            virtual int32_t __stdcall get_AppContext(void**) noexcept = 0;
            virtual int32_t __stdcall put_AppContext(void*) noexcept = 0;
            virtual int32_t __stdcall get_AppLaunchArgument(void**) noexcept = 0;
            virtual int32_t __stdcall put_AppLaunchArgument(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContentTileType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ContentTileType(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall SetPhraseListAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinitionManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall InstallCommandDefinitionsFromStorageFileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_InstalledCommandDefinitions(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectedItem(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
            virtual int32_t __stdcall put_Message(void*) noexcept = 0;
            virtual int32_t __stdcall get_RepeatMessage(void**) noexcept = 0;
            virtual int32_t __stdcall put_RepeatMessage(void*) noexcept = 0;
            virtual int32_t __stdcall get_AppLaunchArgument(void**) noexcept = 0;
            virtual int32_t __stdcall put_AppLaunchArgument(void*) noexcept = 0;
            virtual int32_t __stdcall get_VoiceCommandContentTiles(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponseStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxSupportedVoiceCommandContentTiles(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall CreateResponse(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateResponseWithTiles(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateResponseForPrompt(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateResponseForPromptWithTiles(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetVoiceCommandAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestConfirmationAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestDisambiguationAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReportProgressAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReportSuccessAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailureAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAppLaunchAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
            virtual int32_t __stdcall add_VoiceCommandCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VoiceCommandCompleted(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnectionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromAppServiceTriggerDetails(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayMessage(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayMessage(void*) noexcept = 0;
            virtual int32_t __stdcall get_SpokenMessage(void**) noexcept = 0;
            virtual int32_t __stdcall put_SpokenMessage(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommand
    {
        [[nodiscard]] auto CommandName() const;
        [[nodiscard]] auto Properties() const;
        [[nodiscard]] auto SpeechRecognitionResult() const;
    };
    template <> struct consume<Windows::ApplicationModel::VoiceCommands::IVoiceCommand>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommand<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandCompletedEventArgs
    {
        [[nodiscard]] auto Reason() const;
    };
    template <> struct consume<Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandConfirmationResult
    {
        [[nodiscard]] auto Confirmed() const;
    };
    template <> struct consume<Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandConfirmationResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandContentTile
    {
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto TextLine1() const;
        auto TextLine1(param::hstring const& value) const;
        [[nodiscard]] auto TextLine2() const;
        auto TextLine2(param::hstring const& value) const;
        [[nodiscard]] auto TextLine3() const;
        auto TextLine3(param::hstring const& value) const;
        [[nodiscard]] auto Image() const;
        auto Image(Windows::Storage::IStorageFile const& value) const;
        [[nodiscard]] auto AppContext() const;
        auto AppContext(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] auto AppLaunchArgument() const;
        auto AppLaunchArgument(param::hstring const& value) const;
        [[nodiscard]] auto ContentTileType() const;
        auto ContentTileType(Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTileType const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandContentTile<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandDefinition
    {
        [[nodiscard]] auto Language() const;
        [[nodiscard]] auto Name() const;
        auto SetPhraseListAsync(param::hstring const& phraseListName, param::async_iterable<hstring> const& phraseList) const;
    };
    template <> struct consume<Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandDefinition<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandDefinitionManagerStatics
    {
        auto InstallCommandDefinitionsFromStorageFileAsync(Windows::Storage::StorageFile const& file) const;
        [[nodiscard]] auto InstalledCommandDefinitions() const;
    };
    template <> struct consume<Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinitionManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandDefinitionManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandDisambiguationResult
    {
        [[nodiscard]] auto SelectedItem() const;
    };
    template <> struct consume<Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandDisambiguationResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponse
    {
        [[nodiscard]] auto Message() const;
        auto Message(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& value) const;
        [[nodiscard]] auto RepeatMessage() const;
        auto RepeatMessage(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& value) const;
        [[nodiscard]] auto AppLaunchArgument() const;
        auto AppLaunchArgument(param::hstring const& value) const;
        [[nodiscard]] auto VoiceCommandContentTiles() const;
    };
    template <> struct consume<Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponse<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponseStatics
    {
        [[nodiscard]] auto MaxSupportedVoiceCommandContentTiles() const;
        auto CreateResponse(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& userMessage) const;
        auto CreateResponse(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, param::iterable<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> const& contentTiles) const;
        auto CreateResponseForPrompt(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& repeatMessage) const;
        auto CreateResponseForPrompt(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& repeatMessage, param::iterable<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> const& contentTiles) const;
    };
    template <> struct consume<Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponseStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponseStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnection
    {
        auto GetVoiceCommandAsync() const;
        auto RequestConfirmationAsync(Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse const& response) const;
        auto RequestDisambiguationAsync(Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse const& response) const;
        auto ReportProgressAsync(Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse const& response) const;
        auto ReportSuccessAsync(Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse const& response) const;
        auto ReportFailureAsync(Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse const& response) const;
        auto RequestAppLaunchAsync(Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse const& response) const;
        [[nodiscard]] auto Language() const;
        auto VoiceCommandCompleted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection, Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletedEventArgs> const& handler) const;
        using VoiceCommandCompleted_revoker = impl::event_revoker<Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection, &impl::abi_t<Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection>::remove_VoiceCommandCompleted>;
        VoiceCommandCompleted_revoker VoiceCommandCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection, Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletedEventArgs> const& handler) const;
        auto VoiceCommandCompleted(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnection<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnectionStatics
    {
        auto FromAppServiceTriggerDetails(Windows::ApplicationModel::AppService::AppServiceTriggerDetails const& triggerDetails) const;
    };
    template <> struct consume<Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnectionStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnectionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandUserMessage
    {
        [[nodiscard]] auto DisplayMessage() const;
        auto DisplayMessage(param::hstring const& value) const;
        [[nodiscard]] auto SpokenMessage() const;
        auto SpokenMessage(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandUserMessage<D>;
    };
}
#endif
