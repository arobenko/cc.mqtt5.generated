/// @file
/// @brief Contains definition of protocol default options for a server.

#pragma once

#include "DefaultOptions.h"

namespace mqtt5
{

namespace options
{

/// @brief Default options of the protocol for a server.
struct ServerDefaultOptions
{
    /// @brief Extra options for messages.
    struct message : public DefaultOptions::message
    {
        /// @brief Extra options for @ref mqtt5::message::Connack message.
        using Connack =
            std::tuple<
                comms::option::NoReadImpl,
                comms::option::NoDispatchImpl
            >;
        
        /// @brief Extra options for @ref mqtt5::message::Connect message.
        using Connect =
            std::tuple<
                comms::option::NoWriteImpl,
                comms::option::NoRefreshImpl
            >;
        
        /// @brief Extra options for @ref mqtt5::message::Pingreq message.
        using Pingreq =
            std::tuple<
                comms::option::NoWriteImpl,
                comms::option::NoRefreshImpl
            >;
        
        /// @brief Extra options for @ref mqtt5::message::Pingresp message.
        using Pingresp =
            std::tuple<
                comms::option::NoReadImpl,
                comms::option::NoDispatchImpl
            >;
        
        /// @brief Extra options for @ref mqtt5::message::Suback message.
        using Suback =
            std::tuple<
                comms::option::NoReadImpl,
                comms::option::NoDispatchImpl
            >;
        
        /// @brief Extra options for @ref mqtt5::message::Subscribe message.
        using Subscribe =
            std::tuple<
                comms::option::NoWriteImpl,
                comms::option::NoRefreshImpl
            >;
        
        /// @brief Extra options for @ref mqtt5::message::Unsuback message.
        using Unsuback =
            std::tuple<
                comms::option::NoReadImpl,
                comms::option::NoDispatchImpl
            >;
        
        /// @brief Extra options for @ref mqtt5::message::Unsubscribe message.
        using Unsubscribe =
            std::tuple<
                comms::option::NoWriteImpl,
                comms::option::NoRefreshImpl
            >;
        
    };
    
};

} // namespace options

} // namespace mqtt5

