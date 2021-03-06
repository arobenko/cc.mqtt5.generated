// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::message::Suback message and its fields.

#pragma once

#include "mqtt5/field/PacketIdCommon.h"
#include "mqtt5/field/PropertiesListCommon.h"

namespace mqtt5
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqtt5::message::Suback message.
/// @see mqtt5::message::SubackFields
struct SubackFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::SubackFields::PacketId field.
    using PacketIdCommon = mqtt5::field::PacketIdCommon;
    
    /// @brief Common types and functions for members of
    ///     @ref mqtt5::message::SubackFields::PropertiesList field.
    using PropertiesListMembersCommon = mqtt5::field::PropertiesListMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::SubackFields::PropertiesList field.
    using PropertiesListCommon = mqtt5::field::PropertiesListCommon;
    
    /// @brief Scope for all the common definitions of the
    ///     @ref mqtt5::message::SubackFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref mqtt5::message::SubackFields::List field.
        static const char* name()
        {
            return "List";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref mqtt5::message::Suback message.
/// @see mqtt5::message::Suback
struct SubackCommon
{
    /// @brief Name of the @ref mqtt5::message::Suback message.
    static const char* name()
    {
        return "SUBACK";
    }
    
};

} // namespace message

} // namespace mqtt5


