/// @file
/// @brief Contains definition of protocol default options.

#pragma once

#include "comms/options.h"

namespace mqtt5
{

namespace options
{

/// @brief Default (empty) options of the protocol.
struct DefaultOptions
{
    /// @brief Extra options for fields.
    struct field
    {
        /// @brief Extra options for @ref
        ///     mqtt5::field::BinData field.
        using BinData = comms::option::app::EmptyOption;
        
        /// @brief Extra options for @ref
        ///     mqtt5::field::PropertiesList field.
        using PropertiesList = comms::option::app::EmptyOption;
        
        /// @brief Extra options for @ref
        ///     mqtt5::field::ProtocolName field.
        using ProtocolName = comms::option::app::EmptyOption;
        
        /// @brief Extra options for @ref
        ///     mqtt5::field::String field.
        using String = comms::option::app::EmptyOption;
        
    }; // struct field
    
    /// @brief Extra options for messages.
    struct message
    {
        /// @brief Extra options for
        ///     @ref mqtt5::message::Connack message.
        using Connack = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqtt5::message::Connect message.
        using Connect = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqtt5::message::Pingreq message.
        using Pingreq = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqtt5::message::Pingresp message.
        using Pingresp = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref mqtt5::message::Publish message.
        struct PublishFields
        {
            /// @brief Extra options for @ref
            ///     mqtt5::message::PublishFields::Payload
            ///     field.
            using Payload = comms::option::app::EmptyOption;
            
        }; // struct PublishFields
        
        
        /// @brief Extra options for fields of
        ///     @ref mqtt5::message::Suback message.
        struct SubackFields
        {
            /// @brief Extra options for @ref
            ///     mqtt5::message::SubackFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct SubackFields
        
        /// @brief Extra options for
        ///     @ref mqtt5::message::Suback message.
        using Suback = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref mqtt5::message::Subscribe message.
        struct SubscribeFields
        {
            /// @brief Extra options for @ref
            ///     mqtt5::message::SubscribeFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct SubscribeFields
        
        /// @brief Extra options for
        ///     @ref mqtt5::message::Subscribe message.
        using Subscribe = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref mqtt5::message::Unsuback message.
        struct UnsubackFields
        {
            /// @brief Extra options for @ref
            ///     mqtt5::message::UnsubackFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct UnsubackFields
        
        /// @brief Extra options for
        ///     @ref mqtt5::message::Unsuback message.
        using Unsuback = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref mqtt5::message::Unsubscribe message.
        struct UnsubscribeFields
        {
            /// @brief Extra options for @ref
            ///     mqtt5::message::UnsubscribeFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct UnsubscribeFields
        
        /// @brief Extra options for
        ///     @ref mqtt5::message::Unsubscribe message.
        using Unsubscribe = comms::option::app::EmptyOption;
        
    }; // struct message
    
    /// @brief Extra options for frames.
    struct frame
    {
        /// @brief Extra options for Layers of
        ///     @ref mqtt5::frame::Frame frame.
        struct FrameLayers
        {
            /// @brief Extra options for @ref
            ///     mqtt5::frame::FrameLayers::Data layer.
            using Data = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     mqtt5::frame::FrameLayers::IdAndFlags
            ///     layer.
            using IdAndFlags = comms::option::app::EmptyOption;
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

} // namespace options

} // namespace mqtt5


