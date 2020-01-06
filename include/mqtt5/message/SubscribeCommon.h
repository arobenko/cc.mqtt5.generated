// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::message::Subscribe message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "mqtt5/field/PacketIdCommon.h"
#include "mqtt5/field/PropertiesListCommon.h"
#include "mqtt5/field/QosCommon.h"
#include "mqtt5/field/TopicCommon.h"

namespace mqtt5
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqtt5::message::Subscribe message.
/// @see mqtt5::message::SubscribeFields
struct SubscribeFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::SubscribeFields::PacketId field.
    using PacketIdCommon = mqtt5::field::PacketIdCommon;
    
    /// @brief Common types and functions for members of
    ///     @ref mqtt5::message::SubscribeFields::PropertiesList field.
    using PropertiesListMembersCommon = mqtt5::field::PropertiesListMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::SubscribeFields::PropertiesList field.
    using PropertiesListCommon = mqtt5::field::PropertiesListCommon;
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref mqtt5::message::SubscribeFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref mqtt5::message::SubscribeFields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::Topic field.
            using TopicCommon = mqtt5::field::TopicCommon;
            
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::Options field.
            struct OptionsMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::Qos field.
                using QosCommon = mqtt5::field::QosCommon;
                
                /// @brief Common functions for
                ///     @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::Bits field.
                struct BitsCommon
                {
                    /// @brief Name of the @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::Bits field.
                    static const char* name()
                    {
                        return "";
                    }
                    
                    /// @brief Retrieve name of the bit of
                    ///     @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::Bits field.
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "NL",
                            "RAP"
                        };
                    
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        if (MapSize <= idx) {
                            return nullptr;
                        }
                    
                        return Map[idx];
                    }
                    
                };
                
                /// @brief Common types and functions for
                ///     @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::RetainHandling field.
                struct RetainHandlingCommon
                {
                    /// @brief Values enumerator for
                    ///     @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::RetainHandling field.
                    enum class ValueType : std::uint8_t
                    {
                        Send = 0, ///< value @b Send
                        SendIfNotExists = 1, ///< value @b SendIfNotExists
                        DontSend = 2, ///< value @b DontSend
                        
                        // --- Extra values generated for convenience ---
                        FirstValue = 0, ///< First defined value.
                        LastValue = 2, ///< Last defined value.
                        ValuesLimit = 3, ///< Upper limit for defined values.
                        
                    };
                    
                    /// @brief Name of the @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::RetainHandling field.
                    static const char* name()
                    {
                        return "Retain Handling";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(ValueType val)
                    {
                        static const char* Map[] = {
                            "Send",
                            "SendIfNotExists",
                            "DontSend"
                        };
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        
                        if (MapSize <= static_cast<std::size_t>(val)) {
                            return nullptr;
                        }
                        
                        return Map[static_cast<std::size_t>(val)];
                    }
                    
                };
                
                /// @brief Values enumerator for
                ///     @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::RetainHandling field.
                using RetainHandlingVal = RetainHandlingCommon::ValueType;
                
                /// @brief Common types and functions for
                ///     @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::Reserved field.
                struct ReservedCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::Reserved field.
                    using ValueType = std::uint8_t;
                
                    /// @brief Name of the @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::Reserved field.
                    static const char* name()
                    {
                        return "Reserved";
                    }
                    
                };
                
            };
            
            /// @brief Scope for all the common definitions of the
            ///     @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::Options field.
            struct OptionsCommon
            {
                /// @brief Name of the @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::Options field.
                static const char* name()
                {
                    return "Options";
                }
                
            };
            
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref mqtt5::message::SubscribeFields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref mqtt5::message::SubscribeFields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref mqtt5::message::SubscribeFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref mqtt5::message::SubscribeFields::List field.
        static const char* name()
        {
            return "List";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref mqtt5::message::Subscribe message.
/// @see mqtt5::message::Subscribe
struct SubscribeCommon
{
    /// @brief Name of the @ref mqtt5::message::Subscribe message.
    static const char* name()
    {
        return "SUBSCRIBE";
    }
    
};

} // namespace message

} // namespace mqtt5


