// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::message::Auth message and its fields.

#pragma once

#include "mqtt5/field/PropertiesListCommon.h"
#include "mqtt5/field/ReasonCodeCommon.h"

namespace mqtt5
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqtt5::message::Auth message.
/// @see mqtt5::message::AuthFields
struct AuthFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::AuthFields::ReasonCode field.
    using ReasonCodeCommon = mqtt5::field::ReasonCodeCommon;
    
    /// @brief Common types and functions for members of
    ///     @ref mqtt5::message::AuthFields::PropertiesList field.
    using PropertiesListMembersCommon = mqtt5::field::PropertiesListMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::AuthFields::PropertiesList field.
    using PropertiesListCommon = mqtt5::field::PropertiesListCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqtt5::message::Auth message.
/// @see mqtt5::message::Auth
struct AuthCommon
{
    /// @brief Name of the @ref mqtt5::message::Auth message.
    static const char* name()
    {
        return "AUTH";
    }
    
};

} // namespace message

} // namespace mqtt5


