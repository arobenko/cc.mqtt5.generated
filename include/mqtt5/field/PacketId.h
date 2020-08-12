// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains definition of <b>"Packet ID"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/PacketIdCommon.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{

/// @brief Definition of <b>"Packet ID"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
struct PacketId : public
    comms::field::IntValue<
        mqtt5::field::FieldBase<>,
        std::uint16_t,
        TExtraOpts...
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::PacketIdCommon::name();
    }
    
};

} // namespace field

} // namespace mqtt5


