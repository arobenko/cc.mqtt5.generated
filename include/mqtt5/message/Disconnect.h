/// @file
/// @brief Contains definition of <b>"DISCONNECT"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqtt5/DefaultOptions.h"
#include "mqtt5/MsgId.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/PropertiesList.h"
#include "mqtt5/field/ReasonCode.h"

namespace mqtt5
{

namespace message
{

/// @brief Fields of @ref Disconnect.
/// @tparam TOpt Extra options
/// @see @ref Disconnect
/// @headerfile "mqtt5/message/Disconnect.h"
template <typename TOpt = mqtt5::DefaultOptions>
struct DisconnectFields
{
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
        ReasonCode,
        PropertiesList
    >;
};

/// @brief Definition of <b>"DISCONNECT"</b> message class.
/// @details
///     See @ref DisconnectFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqtt5/message/Disconnect.h"
template <typename TMsgBase, typename TOpt = mqtt5::DefaultOptions>
class Disconnect : public
    comms::MessageBase<
        TMsgBase,
        comms::option::StaticNumIdImpl<mqtt5::MsgId_Disconnect>,
        comms::option::FieldsImpl<typename DisconnectFields<TOpt>::All>,
        comms::option::MsgType<Disconnect<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::StaticNumIdImpl<mqtt5::MsgId_Disconnect>,
            comms::option::FieldsImpl<typename DisconnectFields<TOpt>::All>,
            comms::option::MsgType<Disconnect<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_reasonCode() for @ref DisconnectFields::ReasonCode field.
    ///     @li @b field_propertiesList() for @ref DisconnectFields::PropertiesList field.
    COMMS_MSG_FIELDS_ACCESS(
        reasonCode,
        propertiesList
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 2U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "DISCONNECT";
    }
    
    
};

} // namespace message

} // namespace mqtt5


