/// @file
/// @brief Contains definition of <b>"PINGRESP"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "mqtt5/DefaultOptions.h"
#include "mqtt5/MsgId.h"

namespace mqtt5
{

namespace message
{

/// @brief Fields of @ref Pingresp.
/// @tparam TOpt Extra options
/// @see @ref Pingresp
/// @headerfile "mqtt5/message/Pingresp.h"
template <typename TOpt = mqtt5::DefaultOptions>
struct PingrespFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"PINGRESP"</b> message class.
/// @details
///     See @ref PingrespFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqtt5/message/Pingresp.h"
template <typename TMsgBase, typename TOpt = mqtt5::DefaultOptions>
class Pingresp : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Pingresp,
        comms::option::StaticNumIdImpl<mqtt5::MsgId_Pingresp>,
        comms::option::FieldsImpl<typename PingrespFields<TOpt>::All>,
        comms::option::MsgType<Pingresp<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Pingresp,
            comms::option::StaticNumIdImpl<mqtt5::MsgId_Pingresp>,
            comms::option::FieldsImpl<typename PingrespFields<TOpt>::All>,
            comms::option::MsgType<Pingresp<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 0U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "PINGRESP";
    }
    
    
};

} // namespace message

} // namespace mqtt5


