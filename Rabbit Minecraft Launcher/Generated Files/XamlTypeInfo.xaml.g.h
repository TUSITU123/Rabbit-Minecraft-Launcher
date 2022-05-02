﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#pragma once

#include <functional>
#include <map>
#include <vector>
#include <unknwn.h>

#include "winrt/Microsoft.UI.Xaml.h"
#include "winrt/Microsoft.UI.Xaml.Data.h"
#include "winrt/Microsoft.UI.Xaml.Markup.h"
#include "winrt/Microsoft.UI.Xaml.Interop.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#include "winrt/Microsoft.UI.Xaml.XamlTypeInfo.h"

namespace winrt::Rabbit_Minecraft_Launcher::implementation
{
    using IInspectable = ::winrt::Windows::Foundation::IInspectable;
    using IXamlMember = ::winrt::Microsoft::UI::Xaml::Markup::IXamlMember;
    using IXamlType = ::winrt::Microsoft::UI::Xaml::Markup::IXamlType;

    struct XamlTypeInfoProvider : public std::enable_shared_from_this<XamlTypeInfoProvider>
    {
        IXamlType GetXamlTypeByName(::winrt::hstring const& typeName);
        IXamlType GetXamlTypeByType(::winrt::Windows::UI::Xaml::Interop::TypeName const& t);
        IXamlMember GetMemberByLongName(::winrt::hstring const& longMemberName);
        void AddOtherProvider(::winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider otherProvider);

    private:
        std::map<std::wstring, ::winrt::weak_ref<IXamlType>> _xamlTypes;
        std::map<std::wstring, IXamlMember> _xamlMembers;
        IXamlType CreateXamlType(::winrt::hstring const& typeName);
        IXamlMember CreateXamlMember(::winrt::hstring const& longMemberName);

        std::vector<::winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider> _otherProviders;
        std::vector<::winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider> const& OtherProviders();

        IXamlType CheckOtherMetadataProvidersForName(::winrt::hstring const& typeName);
        IXamlType CheckOtherMetadataProvidersForType(::winrt::Windows::UI::Xaml::Interop::TypeName const& t);
    };

    struct XamlSystemBaseType : public ::winrt::implements<XamlSystemBaseType, ::winrt::Microsoft::UI::Xaml::Markup::IXamlType>
    {
        explicit XamlSystemBaseType(::winrt::hstring const& name);

        // IXamlType
        IXamlType BaseType() const;
        IXamlMember ContentProperty() const;
        ::winrt::hstring FullName() const;
        ::winrt::hstring Name() const;
        bool IsArray() const;
        bool IsCollection() const;
        bool IsConstructible() const;
        bool IsDictionary() const;
        bool IsMarkupExtension() const;
        bool IsEnum() const;
        bool IsSystemType() const;
        bool IsBindable() const;
        IXamlType ItemType() const;
        IXamlType KeyType() const;
        IXamlType BoxedType() const;

        ::winrt::Windows::UI::Xaml::Interop::TypeName UnderlyingType() const;
        IInspectable ActivateInstance() const;
        IInspectable CreateFromString(::winrt::hstring const& value) const;
        IXamlMember GetMember(::winrt::hstring const& name) const;
        void AddToVector(IInspectable const& instance, IInspectable const& value) const;
        void AddToMap(IInspectable const& instance, IInspectable const& key, IInspectable const& value) const;
        void RunInitializer() const;

    private:
        ::winrt::hstring _fullName;
    };

    struct __declspec(uuid("63A5FDC1-874E-4D22-9BC7-A0E3488AD5B2")) IXamlUserType : ::IUnknown
    {
        virtual bool IsReturnTypeStub() const = 0;
        virtual bool IsLocalType() const = 0;
    };

    struct XamlUserType : public ::winrt::implements<XamlUserType, IXamlUserType, ::winrt::Microsoft::UI::Xaml::Markup::IXamlType>
    {
        explicit XamlUserType(
            std::shared_ptr<XamlTypeInfoProvider> const& provider, 
            ::winrt::hstring const& fullName, 
            IXamlType baseType);

        ::winrt::hstring GetRuntimeClassName() const;

        // IXamlType
        IXamlType BaseType() const;
        IXamlMember ContentProperty() const;
        ::winrt::hstring FullName() const;
        ::winrt::hstring Name() const;
        bool IsArray() const;
        bool IsCollection() const;
        bool IsConstructible() const;
        bool IsDictionary() const;
        bool IsMarkupExtension() const;
        bool IsEnum() const;
        bool IsSystemType() const;
        bool IsBindable() const;
        IXamlType ItemType() const;
        IXamlType KeyType() const;
        IXamlType BoxedType() const;
        ::winrt::Windows::UI::Xaml::Interop::TypeName UnderlyingType() const;
        IInspectable ActivateInstance() const;
        IInspectable CreateFromString(::winrt::hstring const& value) const;
        IXamlMember GetMember(::winrt::hstring const& name) const;
        void AddToVector(IInspectable const& instance, IInspectable const& value) const;
        void AddToMap(IInspectable const& instance, IInspectable const& key, IInspectable const& value) const;
        void RunInitializer() const;

        // Additional Setters
        void IsArray(bool value);
        void IsMarkupExtension(bool value);
        void IsEnum(bool value);
        void IsBindable(bool value);

        bool IsReturnTypeStub() const;
        void IsReturnTypeStub(bool value);

        bool IsLocalType() const;
        void IsLocalType(bool value);

        typedef IInspectable(*ActivatorFn)();
        typedef void(*AddToCollectionFn)(IInspectable const& instance, IInspectable const& item);
        typedef void(*AddToDictionaryFn)(IInspectable const& instance, IInspectable const& key, IInspectable const& item);
        typedef IInspectable (*CreateFromStringFn)(::winrt::hstring const& input);
        typedef IInspectable(*StringConverterFn)(XamlUserType const& userType, ::winrt::hstring const& input);

        ActivatorFn _activator{};
        AddToCollectionFn _collectionAdd{};
        AddToDictionaryFn _dictionaryAdd{};
        CreateFromStringFn _createFromStringMethod{};
        ::winrt::Windows::UI::Xaml::Interop::TypeKind _kindOfType{};
        StringConverterFn _fromStringConverter{};

        void ContentPropertyName(::winrt::hstring const& value);
        void ItemTypeName(::winrt::hstring const& value);
        void KeyTypeName(::winrt::hstring const& value);
        void SetBoxedType(IXamlType boxedType);
        void AddMemberName(::winrt::hstring const& shortName);
        void AddEnumValue(::winrt::hstring const& name, IInspectable value);
        uint32_t CreateEnumUIntFromString(::winrt::hstring const& input) const;

    private:
        std::shared_ptr<XamlTypeInfoProvider> _provider;
        IXamlType _baseType;
        IXamlType _boxedType;
        ::winrt::hstring _contentPropertyName;
        ::winrt::hstring _itemTypeName;
        ::winrt::hstring _keyTypeName;
        ::winrt::hstring _fullName;
        std::map<std::wstring, winrt::hstring> _memberNames;
        std::map<std::wstring, IInspectable> _enumValues;
        bool _isArray{ false };
        bool _isMarkupExtension{ false };
        bool _isEnum{ false };
        bool _isBindable{ false };
        bool _isReturnTypeStub{ false };
        bool _isLocalType{ false };
    };

    struct XamlMember : public ::winrt::implements<XamlMember, ::winrt::Microsoft::UI::Xaml::Markup::IXamlMember>
    {
        explicit XamlMember(
            std::shared_ptr<XamlTypeInfoProvider> const& provider, 
            ::winrt::hstring const& name, 
            ::winrt::hstring const& typeName);

        typedef IInspectable(*PropertyGetterFn)(IInspectable const& instance);
        typedef void(*PropertySetterFn)(IInspectable const& instance, IInspectable const& value);

        PropertyGetterFn _getter{};
        PropertySetterFn _setter{};

        // IXamlMember
        bool IsAttachable() const;
        bool IsDependencyProperty() const;
        bool IsReadOnly() const;
        ::winrt::hstring Name() const;
        IXamlType TargetType() const;
        IXamlType Type() const;
        IInspectable GetValue(IInspectable const& instance) const;
        void SetValue(IInspectable const& instance, IInspectable const& value);

        // Additional Setters
        void TargetTypeName(::winrt::hstring const& value);
        void IsAttachable(bool value);
        void IsDependencyProperty(bool value);
        void IsReadOnly(bool value);

    private:
        bool _isAttachable{ false };
        bool _isDependencyProperty{ false };
        bool _isReadOnly{ false };
        ::winrt::hstring _name;
        ::winrt::hstring _targetTypeName;
        ::winrt::hstring _typeName;
        std::shared_ptr<XamlTypeInfoProvider> _provider;
    };
}

