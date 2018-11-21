/// @file
/// @brief Contains definition of <b>"PUBCOMP"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqtt5/DefaultOptions.h"
#include "mqtt5/MsgId.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/PacketId.h"
#include "mqtt5/field/PropertiesList.h"
#include "mqtt5/field/ReasonCode.h"

namespace mqtt5
{

namespace message
{

/// @brief Fields of @ref Pubcomp.
/// @tparam TOpt Extra options
/// @see @ref Pubcomp
/// @headerfile "mqtt5/message/Pubcomp.h"
template <typename TOpt = mqtt5::DefaultOptions>
struct PubcompFields
{
    /// @brief Definition of <b>"Packet ID"</b> field.
    using PacketId =
        mqtt5::field::PacketId<
           TOpt
       >;
    
    /// @brief Definition of <b>"Reason Code"</b> field.
    using ReasonCode =
        mqtt5::field::ReasonCode<
           TOpt
       >;
    
    /// @brief Definition of <b>"Properties"</b> field.
    using PropertiesList =
        mqtt5::field::PropertiesList<
           TOpt
       >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        PacketId,
        ReasonCode,
        PropertiesList
    >;
};

/// @brief Definition of <b>"PUBCOMP"</b> message class.
/// @details
///     See @ref PubcompFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqtt5/message/Pubcomp.h"
template <typename TMsgBase, typename TOpt = mqtt5::DefaultOptions>
class Pubcomp : public
    comms::MessageBase<
        TMsgBase,
        comms::option::StaticNumIdImpl<mqtt5::MsgId_Pubcomp>,
        comms::option::FieldsImpl<typename PubcompFields<TOpt>::All>,
        comms::option::MsgType<Pubcomp<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::StaticNumIdImpl<mqtt5::MsgId_Pubcomp>,
            comms::option::FieldsImpl<typename PubcompFields<TOpt>::All>,
            comms::option::MsgType<Pubcomp<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_packetId() for @ref PubcompFields::PacketId field.
    ///     @li @b field_reasonCode() for @ref PubcompFields::ReasonCode field.
    ///     @li @b field_propertiesList() for @ref PubcompFields::PropertiesList field.
    COMMS_MSG_FIELDS_ACCESS(
        packetId,
        reasonCode,
        propertiesList
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "PUBCOMP";
    }
    
    
};

} // namespace message

} // namespace mqtt5


