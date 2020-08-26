// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains definition of protocol default options that apply
///     @b comms::option::app::OrigDataView to applicable fields.

#pragma once

#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace options
{

/// @brief Default options for data view on contiguous buffers to avoid
///    unnecessary copy of data.
/// @tparam TBase Options to use as a basis.
template <typename TBase = mqtt5::options::DefaultOptions>
struct DataViewDefaultOptionsT : public TBase
{
    /// @brief Extra options for fields.
    struct field : public TBase::field
    {
        /// @brief Extra options for @ref
        ///     mqtt5::field::BinData field.
        using BinData = 
            std::tuple<
                comms::option::app::OrigDataView,
                typename TBase::field::BinData
            >;
        /// @brief Extra options for @ref
        ///     mqtt5::field::ProtocolName field.
        using ProtocolName = 
            std::tuple<
                comms::option::app::OrigDataView,
                typename TBase::field::ProtocolName
            >;
        /// @brief Extra options for @ref
        ///     mqtt5::field::String field.
        using String = 
            std::tuple<
                comms::option::app::OrigDataView,
                typename TBase::field::String
            >;
    }; // struct field
    
    /// @brief Extra options for messages.
    struct message : public TBase::message
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
        struct PublishFields : public TBase::message::PublishFields
        {
            /// @brief Extra options for @ref
            ///     mqtt5::message::PublishFields::Payload
            ///     field.
            using Payload = 
                std::tuple<
                    comms::option::app::OrigDataView,
                    typename TBase::message::PublishFields::Payload
                >;
        }; // struct PublishFields
        
        
        /// @brief Extra options for
        ///     @ref mqtt5::message::Suback message.
        using Suback = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqtt5::message::Subscribe message.
        using Subscribe = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqtt5::message::Unsuback message.
        using Unsuback = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqtt5::message::Unsubscribe message.
        using Unsubscribe = comms::option::app::EmptyOption;
        
    }; // struct message
    
    /// @brief Extra options for frames.
    struct frame : public TBase::frame
    {
        /// @brief Extra options for Layers of
        ///     @ref mqtt5::frame::Frame frame.
        struct FrameLayers : public TBase::frame::FrameLayers
        {
            /// @brief Extra options for @ref
            ///     mqtt5::frame::FrameLayers::Data layer.
            using Data = std::tuple<
                comms::option::app::OrigDataView,
                typename TBase::frame::FrameLayers::Data
            >;
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

/// @brief Alias to @ref DataViewDefaultOptionsT with default template parameter.
using DataViewDefaultOptions = DataViewDefaultOptionsT<>;

} // namespace options

} // namespace mqtt5


