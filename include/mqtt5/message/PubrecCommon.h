// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::message::Pubrec message and its fields.

#pragma once

#include "mqtt5/field/PacketIdCommon.h"
#include "mqtt5/field/PropertiesListCommon.h"
#include "mqtt5/field/ReasonCodeCommon.h"

namespace mqtt5
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqtt5::message::Pubrec message.
/// @see mqtt5::message::PubrecFields
struct PubrecFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::PubrecFields::PacketId field.
    using PacketIdCommon = mqtt5::field::PacketIdCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::PubrecFields::ReasonCode field.
    using ReasonCodeCommon = mqtt5::field::ReasonCodeCommon;
    
    /// @brief Common types and functions for members of
    ///     @ref mqtt5::message::PubrecFields::PropertiesList field.
    using PropertiesListMembersCommon = mqtt5::field::PropertiesListMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::PubrecFields::PropertiesList field.
    using PropertiesListCommon = mqtt5::field::PropertiesListCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqtt5::message::Pubrec message.
/// @see mqtt5::message::Pubrec
struct PubrecCommon
{
    /// @brief Name of the @ref mqtt5::message::Pubrec message.
    static const char* name()
    {
        return "PUBREC";
    }
    
};

} // namespace message

} // namespace mqtt5


