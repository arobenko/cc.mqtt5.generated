// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains definition of <b>"Message"</b> interface class.

#pragma once

#include <tuple>
#include "comms/Message.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/options.h"
#include "mqtt5/MessageCommon.h"
#include "mqtt5/MsgId.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/Qos.h"

namespace mqtt5
{

/// @brief Extra transport fields of @ref Message interface class.
/// @see @ref Message
/// @headerfile "mqtt5/Message.h"
struct MessageFields
{
    /// @brief Scope for all the member fields of
    ///     @ref Flags bitfield.
    struct FlagsMembers
    {
        /// @brief Definition of <b>""</b> field.
        class Retain : public
            comms::field::BitmaskValue<
                mqtt5::field::FieldBase<>,
                comms::option::def::FixedBitLength<1U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    mqtt5::field::FieldBase<>,
                    comms::option::def::FixedBitLength<1U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_bit, @b getBitValue_bit() and @b setBitValue_bit().
            COMMS_BITMASK_BITS_SEQ(
                bit
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return mqtt5::MessageFieldsCommon::FlagsMembersCommon::RetainCommon::name();
            }
            
            /// @brief Retrieve name of the bit.
            static const char* bitName(BitIdx idx)
            {
                return
                    mqtt5::MessageFieldsCommon::FlagsMembersCommon::RetainCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief Definition of <b>"Qos"</b> field.
        using Qos =
            mqtt5::field::Qos<
                mqtt5::options::DefaultOptions,
                comms::option::def::FixedBitLength<2U>
            >;
        
        /// @brief Definition of <b>""</b> field.
        class Dup : public
            comms::field::BitmaskValue<
                mqtt5::field::FieldBase<>,
                comms::option::def::FixedBitLength<5U>,
                comms::option::def::BitmaskReservedBits<0x1EU, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    mqtt5::field::FieldBase<>,
                    comms::option::def::FixedBitLength<5U>,
                    comms::option::def::BitmaskReservedBits<0x1EU, 0x0U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_bit, @b getBitValue_bit() and @b setBitValue_bit().
            COMMS_BITMASK_BITS_SEQ(
                bit
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return mqtt5::MessageFieldsCommon::FlagsMembersCommon::DupCommon::name();
            }
            
            /// @brief Retrieve name of the bit.
            static const char* bitName(BitIdx idx)
            {
                return
                    mqtt5::MessageFieldsCommon::FlagsMembersCommon::DupCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Retain,
               Qos,
               Dup
            >;
    };
    
    /// @brief Definition of <b>"Flags"</b> field.
    class Flags : public
        comms::field::Bitfield<
            mqtt5::field::FieldBase<>,
            typename FlagsMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                mqtt5::field::FieldBase<>,
                typename FlagsMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///     The generated types and access functions are:
        ///     @li @b Field_retain type and @b field_retain() access function -
        ///         for FlagsMembers::Retain member field.
        ///     @li @b Field_qos type and @b field_qos() access function -
        ///         for FlagsMembers::Qos member field.
        ///     @li @b Field_dup type and @b field_dup() access function -
        ///         for FlagsMembers::Dup member field.
        COMMS_FIELD_MEMBERS_NAMES(
            retain,
            qos,
            dup
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return mqtt5::MessageFieldsCommon::FlagsCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Flags
    >;
};

/// @brief Definition of <b>"Message"</b> common interface class.
/// @tparam TOpt Interface definition options
/// @headerfile "mqtt5/Message.h"
template <typename... TOpt>
class Message : public
    comms::Message<
        TOpt...,
        comms::option::def::BigEndian,
        comms::option::def::MsgIdType<mqtt5::MsgId>,
        comms::option::def::ExtraTransportFields<MessageFields::All>
    >
{
    using Base =
        comms::Message<
            TOpt...,
            comms::option::def::BigEndian,
            comms::option::def::MsgIdType<mqtt5::MsgId>,
            comms::option::def::ExtraTransportFields<MessageFields::All>
        >;
public:
    /// @brief Allow access to extra transport fields.
    /// @details See definition of @b COMMS_MSG_TRANSPORT_FIELDS_NAMES macro
    ///     related to @b comms::Message class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b TransportField_flags type and @b transportField_flags() function for
    ///         @ref MessageFields::Flags field.
    COMMS_MSG_TRANSPORT_FIELDS_NAMES(
        flags
    );

protected:
    /// @brief Check that flags are zeroed
    bool flagsZeroed() const
    {
        return 
            (transportField_flags().field_retain().value() == 0U) &&
            (static_cast<unsigned>(transportField_flags().field_qos().value()) == 0U) &&
            (transportField_flags().field_dup().value() == 0U);
    }
    
};

} // namespace mqtt5


