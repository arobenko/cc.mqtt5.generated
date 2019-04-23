/// @file
/// @brief Contains definition of protocol default options for bare-metal application
///    where usage of dynamic memory allocation is disabled.

#pragma once

#ifndef DEFAULT_SEQ_FIXED_STORAGE_SIZE
/// @brief Define default fixed size for various sequence fields
/// @details May be defined during compile time to change the default value.
#define DEFAULT_SEQ_FIXED_STORAGE_SIZE 32
#endif

namespace mqtt5
{

namespace options
{

/// @brief Default options for bare-metal application where usage of dynamic
///    memory allocation is diabled.
struct BareMetalDefaultOptions
{
    /// @brief Extra options for fields.
    struct field
    {
        /// @brief Extra options for @ref mqtt5::field::BinData field.
        using BinData = comms::option::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>;
        
        /// @brief Extra options for @ref mqtt5::field::PropertiesList field.
        using PropertiesList = comms::option::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>;
        
        /// @brief Extra options for @ref mqtt5::field::ProtocolName field.
        using ProtocolName = comms::option::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>;
        
        /// @brief Extra options for @ref mqtt5::field::String field.
        using String = comms::option::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>;
        
    }; // struct field
    
    /// @brief Extra options for messages.
    struct message
    {
        /// @brief Extra options for @ref mqtt5::message::Connack message.
        using Connack = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqtt5::message::Connect message.
        using Connect = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqtt5::message::Pingreq message.
        using Pingreq = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqtt5::message::Pingresp message.
        using Pingresp = comms::option::EmptyOption;
        
        /// @brief Extra options for fields of @ref mqtt5::message::Publish message.
        struct PublishFields
        {
            /// @brief Extra options for @ref mqtt5::message::PublishFields::Payload field.
            using Payload = comms::option::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>;
            
        }; // struct PublishFields
        
        
        /// @brief Extra options for fields of @ref mqtt5::message::Suback message.
        struct SubackFields
        {
            /// @brief Extra options for @ref mqtt5::message::SubackFields::List field.
            using List = comms::option::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>;
            
        }; // struct SubackFields
        
        /// @brief Extra options for @ref mqtt5::message::Suback message.
        using Suback = comms::option::EmptyOption;
        
        /// @brief Extra options for fields of @ref mqtt5::message::Subscribe message.
        struct SubscribeFields
        {
            /// @brief Extra options for @ref mqtt5::message::SubscribeFields::List field.
            using List = comms::option::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>;
            
        }; // struct SubscribeFields
        
        /// @brief Extra options for @ref mqtt5::message::Subscribe message.
        using Subscribe = comms::option::EmptyOption;
        
        /// @brief Extra options for fields of @ref mqtt5::message::Unsuback message.
        struct UnsubackFields
        {
            /// @brief Extra options for @ref mqtt5::message::UnsubackFields::List field.
            using List = comms::option::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>;
            
        }; // struct UnsubackFields
        
        /// @brief Extra options for @ref mqtt5::message::Unsuback message.
        using Unsuback = comms::option::EmptyOption;
        
        /// @brief Extra options for fields of @ref mqtt5::message::Unsubscribe message.
        struct UnsubscribeFields
        {
            /// @brief Extra options for @ref mqtt5::message::UnsubscribeFields::List field.
            using List = comms::option::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>;
            
        }; // struct UnsubscribeFields
        
        /// @brief Extra options for @ref mqtt5::message::Unsubscribe message.
        using Unsubscribe = comms::option::EmptyOption;
        
    }; // struct message
    
    /// @brief Extra options for frames.
    struct frame
    {
        /// @brief Extra options for Layers of @ref mqtt5::frame::Frame frame.
        struct FrameLayers
        {
            /// @brief Extra options for @ref mqtt5::frame::FrameLayers::Data layer.
            using Data = comms::option::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE * 8>;
            
            /// @brief Extra options for @ref mqtt5::frame::FrameLayers::IdAndFlags layer.
            using IdAndFlags = comms::option::EmptyOption;
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

} // namespace options

} // namespace mqtt5


