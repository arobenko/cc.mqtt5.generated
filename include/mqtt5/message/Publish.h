// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"PUBLISH"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Optional.h"
#include "comms/options.h"
#include "mqtt5/MsgId.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/PacketId.h"
#include "mqtt5/field/PropertiesList.h"
#include "mqtt5/field/Topic.h"
#include "mqtt5/message/PublishCommon.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace message
{

/// @brief Fields of @ref Publish.
/// @tparam TOpt Extra options
/// @see @ref Publish
/// @headerfile "mqtt5/message/Publish.h"
template <typename TOpt = mqtt5::options::DefaultOptions>
struct PublishFields
{
    /// @brief Definition of <b>"Topic"</b> field.
    using Topic =
        mqtt5::field::Topic<
            TOpt
        >;
    
    /// @brief Definition of <b>"Packet ID"</b> field.
    struct PacketId : public
        comms::field::Optional<
            mqtt5::field::PacketId<TOpt>,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return mqtt5::message::PublishFieldsCommon::PacketIdCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"Properties"</b> field.
    using PropertiesList =
        mqtt5::field::PropertiesList<
            TOpt
        >;
    
    /// @brief Definition of <b>"Payload"</b> field.
    struct Payload : public
        comms::field::ArrayList<
            mqtt5::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::PublishFields::Payload
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return mqtt5::message::PublishFieldsCommon::PayloadCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Topic,
        PacketId,
        PropertiesList,
        Payload
    >;
};

/// @brief Definition of <b>"PUBLISH"</b> message class.
/// @details
///     See @ref PublishFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqtt5/message/Publish.h"
template <typename TMsgBase, typename TOpt = mqtt5::options::DefaultOptions>
class Publish : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<mqtt5::MsgId_Publish>,
        comms::option::def::FieldsImpl<typename PublishFields<TOpt>::All>,
        comms::option::def::MsgType<Publish<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<mqtt5::MsgId_Publish>,
            comms::option::def::FieldsImpl<typename PublishFields<TOpt>::All>,
            comms::option::def::MsgType<Publish<TMsgBase, TOpt> >,
            comms::option::def::HasName,
            comms::option::def::HasCustomRefresh
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_topic type and @b field_topic() access fuction
    ///         for @ref PublishFields::Topic field.
    ///     @li @b Field_packetId type and @b field_packetId() access fuction
    ///         for @ref PublishFields::PacketId field.
    ///     @li @b Field_propertiesList type and @b field_propertiesList() access fuction
    ///         for @ref PublishFields::PropertiesList field.
    ///     @li @b Field_payload type and @b field_payload() access fuction
    ///         for @ref PublishFields::Payload field.
    COMMS_MSG_FIELDS_NAMES(
        topic,
        packetId,
        propertiesList,
        payload
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 3U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return mqtt5::message::PublishCommon::name();
    }
    
    /// @brief Custom read functionality
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        refresh_packetId(); // make sure the mode of "packet ID" is correct
        return Base::doRead(iter, len);
    }
    
    /// @brief Custom refresh functionality
    bool doRefresh()
    {
        bool updated = Base::doRefresh();
        return refresh_packetId() || updated;
    }
    
    
private:
    bool refresh_packetId()
    {
        auto& qosField = Base::transportField_flags().field_qos();
        using QosFieldType = typename std::decay<decltype(qosField)>::type;
        using QosValueType = typename QosFieldType::ValueType;
        
        auto mode = comms::field::OptionalMode::Missing;
        if (QosValueType::AtMostOnceDelivery < qosField.value()) {
            mode = comms::field::OptionalMode::Exists;
        }
        
        if (field_packetId().getMode() == mode) {
            return false;
        }
        
        field_packetId().setMode(mode);
        return true;
    }
    
};

} // namespace message

} // namespace mqtt5


