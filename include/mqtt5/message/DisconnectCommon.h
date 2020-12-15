// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::message::Disconnect message and its fields.

#pragma once

#include "mqtt5/field/PropertiesListCommon.h"
#include "mqtt5/field/ReasonCodeCommon.h"

namespace mqtt5
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqtt5::message::Disconnect message.
/// @see mqtt5::message::DisconnectFields
struct DisconnectFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::DisconnectFields::ReasonCode field.
    using ReasonCodeCommon = mqtt5::field::ReasonCodeCommon;
    
    /// @brief Common types and functions for members of
    ///     @ref mqtt5::message::DisconnectFields::PropertiesList field.
    using PropertiesListMembersCommon = mqtt5::field::PropertiesListMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::DisconnectFields::PropertiesList field.
    using PropertiesListCommon = mqtt5::field::PropertiesListCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqtt5::message::Disconnect message.
/// @see mqtt5::message::Disconnect
struct DisconnectCommon
{
    /// @brief Name of the @ref mqtt5::message::Disconnect message.
    static const char* name()
    {
        return "DISCONNECT";
    }
    
};

} // namespace message

} // namespace mqtt5


