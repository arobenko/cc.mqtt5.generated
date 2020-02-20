// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    fields used in definition of @ref mqtt5::frame::Frame frame.

#pragma once

#include <cstdint>
#include "mqtt5/field/MsgIdCommon.h"

namespace mqtt5
{

namespace frame
{

/// @brief Common types and functions of fields using in definition of
///     @ref mqtt5::frame::Frame frame.
/// @see mqtt5::frame::FrameLayers
struct FrameLayersCommon
{
    /// @brief Scope for all the common definitions of the fields defined in
    ///     @ref mqtt5::frame::FrameLayers::IdAndFlagsMembers struct.
    struct IdAndFlagsMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref mqtt5::frame::FrameLayers::IdAndFlagsMembers::IdAndFlagsField field.
        struct IdAndFlagsFieldMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref mqtt5::frame::FrameLayers::IdAndFlagsMembers::IdAndFlagsFieldMembers::Flags field.
            struct FlagsCommon
            {
                /// @brief Re-definition of the value type used by
                ///     mqtt5::frame::FrameLayers::IdAndFlagsMembers::IdAndFlagsFieldMembers::Flags field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref mqtt5::frame::FrameLayers::IdAndFlagsMembers::IdAndFlagsFieldMembers::Flags field.
                static const char* name()
                {
                    return "Flags";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref mqtt5::frame::FrameLayers::IdAndFlagsMembers::IdAndFlagsFieldMembers::Id field.
            struct IdCommon : public mqtt5::field::MsgIdCommon
            {
                /// @brief Name of the @ref mqtt5::frame::FrameLayers::IdAndFlagsMembers::IdAndFlagsFieldMembers::Id field.
                static const char* name()
                {
                    return "Id";
                }
                
            };
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref mqtt5::frame::FrameLayers::IdAndFlagsMembers::IdAndFlagsField field.
        struct IdAndFlagsFieldCommon
        {
            /// @brief Name of the @ref mqtt5::frame::FrameLayers::IdAndFlagsMembers::IdAndFlagsField field.
            static const char* name()
            {
                return "ID + Flags";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the fields defined in
    ///     @ref mqtt5::frame::FrameLayers::SizeMembers struct.
    struct SizeMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref mqtt5::frame::FrameLayers::SizeMembers::Size field.
        struct SizeCommon
        {
            /// @brief Re-definition of the value type used by
            ///     mqtt5::frame::FrameLayers::SizeMembers::Size field.
            using ValueType = std::uint32_t;
        
            /// @brief Name of the @ref mqtt5::frame::FrameLayers::SizeMembers::Size field.
            static const char* name()
            {
                return "Size";
            }
            
        };
        
    };
    
};
} // namespace frame

} // namespace mqtt5


