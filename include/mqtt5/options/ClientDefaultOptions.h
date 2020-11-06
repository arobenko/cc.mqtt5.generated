// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains definition of protocol default options for a client.

#pragma once

#include "DefaultOptions.h"

namespace mqtt5
{

namespace options
{

/// @brief Default options of the protocol for a client.
/// @tparam TBase Options to use as a basis.
template <typename TBase = mqtt5::options::DefaultOptions>
struct ClientDefaultOptionsT : public TBase
{
    /// @brief Extra options for messages.
    struct message : public TBase::message
    {
        /// @brief Extra options for
        ///     @ref mqtt5::message::Connack message.
        using Connack =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Connack
            >;
        
        /// @brief Extra options for
        ///     @ref mqtt5::message::Connect message.
        using Connect =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl,
                typename TBase::message::Connect
            >;
        
        /// @brief Extra options for
        ///     @ref mqtt5::message::Pingreq message.
        using Pingreq =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl,
                typename TBase::message::Pingreq
            >;
        
        /// @brief Extra options for
        ///     @ref mqtt5::message::Pingresp message.
        using Pingresp =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Pingresp
            >;
        
        /// @brief Extra options for
        ///     @ref mqtt5::message::Suback message.
        using Suback =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Suback
            >;
        
        /// @brief Extra options for
        ///     @ref mqtt5::message::Subscribe message.
        using Subscribe =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl,
                typename TBase::message::Subscribe
            >;
        
        /// @brief Extra options for
        ///     @ref mqtt5::message::Unsuback message.
        using Unsuback =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Unsuback
            >;
        
        /// @brief Extra options for
        ///     @ref mqtt5::message::Unsubscribe message.
        using Unsubscribe =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl,
                typename TBase::message::Unsubscribe
            >;
        
    };
    
};

/// @brief Alias to @ref ClientDefaultOptionsT with default template parameter.
using ClientDefaultOptions = ClientDefaultOptionsT<>;

} // namespace options

} // namespace mqtt5


