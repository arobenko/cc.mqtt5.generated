// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains definition of <b>"Topic"</b> field.

#pragma once

#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/String.h"
#include "mqtt5/field/TopicCommon.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{

/// @brief Definition of <b>"Topic"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
struct Topic : public
    mqtt5::field::String<
        TOpt,
        TExtraOpts...
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::TopicCommon::name();
    }
    
};

} // namespace field

} // namespace mqtt5


