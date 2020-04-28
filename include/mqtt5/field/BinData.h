// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains definition of <b>"BinData"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/ArrayList.h"
#include "comms/options.h"
#include "mqtt5/field/BinDataCommon.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/Length.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{

/// @brief Definition of <b>"BinData"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
struct BinData : public
    comms::field::ArrayList<
        mqtt5::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...,
        typename TOpt::field::BinData,
        comms::option::def::SequenceSerLengthFieldPrefix<mqtt5::field::Length<TOpt> >
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::BinDataCommon::name();
    }
    
};

} // namespace field

} // namespace mqtt5


