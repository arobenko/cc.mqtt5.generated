/// @file
/// @brief Contains definition of <b>"Topic"</b> field.

#pragma once

#include "comms/options.h"
#include "mqtt5/DefaultOptions.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/String.h"

namespace mqtt5
{

namespace field
{

/// @brief Definition of <b>"Topic"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::DefaultOptions, typename... TExtraOpts>
struct Topic : public
    mqtt5::field::String<
       TOpt,
       TExtraOpts...
   >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "Topic";
    }
    
};

} // namespace field

} // namespace mqtt5


