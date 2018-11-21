/// @file
/// @brief Contains definition of <b>"PINGREQ"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "mqtt5/DefaultOptions.h"
#include "mqtt5/MsgId.h"

namespace mqtt5
{

namespace message
{

/// @brief Fields of @ref Pingreq.
/// @tparam TOpt Extra options
/// @see @ref Pingreq
/// @headerfile "mqtt5/message/Pingreq.h"
template <typename TOpt = mqtt5::DefaultOptions>
struct PingreqFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"PINGREQ"</b> message class.
/// @details
///     See @ref PingreqFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqtt5/message/Pingreq.h"
template <typename TMsgBase, typename TOpt = mqtt5::DefaultOptions>
class Pingreq : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Pingreq,
        comms::option::StaticNumIdImpl<mqtt5::MsgId_Pingreq>,
        comms::option::FieldsImpl<typename PingreqFields<TOpt>::All>,
        comms::option::MsgType<Pingreq<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Pingreq,
            comms::option::StaticNumIdImpl<mqtt5::MsgId_Pingreq>,
            comms::option::FieldsImpl<typename PingreqFields<TOpt>::All>,
            comms::option::MsgType<Pingreq<TMsgBase, TOpt> >,
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
        return "PINGREQ";
    }
    
    /// @brief Updated validity check
    bool doValid() const
    {
        return Base::doValid() && Base::flagsZeroed();
    }
    
    
};

} // namespace message

} // namespace mqtt5


