/// @file
/// @brief Contains definition of <b>"Protocol Name"</b> field.

#pragma once

#include "comms/field/String.h"
#include "comms/options.h"
#include "mqtt5/DefaultOptions.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/Length.h"

namespace mqtt5
{

namespace field
{

/// @brief Definition of <b>"Protocol Name"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::DefaultOptions, typename... TExtraOpts>
class ProtocolName : public
    comms::field::String<
        mqtt5::field::FieldBase<>,
        typename TOpt::field::ProtocolName,
        TExtraOpts...,
        comms::option::SequenceSerLengthFieldPrefix<mqtt5::field::Length<TOpt> >
    >
{
    using Base = 
        comms::field::String<
            mqtt5::field::FieldBase<>,
            typename TOpt::field::ProtocolName,
            TExtraOpts...,
            comms::option::SequenceSerLengthFieldPrefix<mqtt5::field::Length<TOpt> >
        >;
public:
    /// @brief Default constructor
    ProtocolName()
    {
        static const char Str[] = "MQTT";
        static const std::size_t StrSize = std::extent<decltype(Str)>::value;
        Base::value() = typename Base::ValueType(&Str[0], StrSize - 1);
    }
    
    /// @brief Name of the field.
    static const char* name()
    {
        return "Protocol Name";
    }
    
};

} // namespace field

} // namespace mqtt5


