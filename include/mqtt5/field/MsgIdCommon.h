// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::MsgId field.

#pragma once

#include <cstdint>
#include <type_traits>
#include "mqtt5/MsgId.h"

namespace mqtt5
{

namespace field
{

/// @brief Common types and functions for
///     @ref mqtt5::field::MsgId field.
struct MsgIdCommon
{
    /// @brief Values enumerator for
    ///     @ref mqtt5::field::MsgId field.
    using ValueType = mqtt5::MsgId;
    
    /// @brief Name of the @ref mqtt5::field::MsgId field.
    static const char* name()
    {
        return "MsgId";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(mqtt5::MsgId val)
    {
        static const char* Map[] = {
            nullptr,
            "CONNECT",
            "CONNACK",
            "PUBLISH",
            "PUBACK",
            "PUBREC",
            "PUBREL",
            "PUBCOMP",
            "SUBSCRIBE",
            "SUBACK",
            "UNSUBSCRIBE",
            "UNSUBACK",
            "PINGREQ",
            "PINGRESP",
            "DISCONNECT",
            "AUTH"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Values enumerator for
///     @ref mqtt5::field::MsgId field.
using MsgIdVal = MsgIdCommon::ValueType;

} // namespace field

} // namespace mqtt5


