/// @file
/// @brief Contains definition of <b>"AUTH"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqtt5/MsgId.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/PropertiesList.h"
#include "mqtt5/field/ReasonCode.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace message
{

/// @brief Fields of @ref Auth.
/// @tparam TOpt Extra options
/// @see @ref Auth
/// @headerfile "mqtt5/message/Auth.h"
template <typename TOpt = mqtt5::options::DefaultOptions>
struct AuthFields
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

/// @brief Definition of <b>"AUTH"</b> message class.
/// @details
///     See @ref AuthFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqtt5/message/Auth.h"
template <typename TMsgBase, typename TOpt = mqtt5::options::DefaultOptions>
class Auth : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<mqtt5::MsgId_Auth>,
        comms::option::def::FieldsImpl<typename AuthFields<TOpt>::All>,
        comms::option::def::MsgType<Auth<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<mqtt5::MsgId_Auth>,
            comms::option::def::FieldsImpl<typename AuthFields<TOpt>::All>,
            comms::option::def::MsgType<Auth<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_reasonCode() for @ref AuthFields::ReasonCode field.
    ///     @li @b field_propertiesList() for @ref AuthFields::PropertiesList field.
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
        return "AUTH";
    }
    
    
};

} // namespace message

} // namespace mqtt5


