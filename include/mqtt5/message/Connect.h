/// @file
/// @brief Contains definition of <b>"CONNECT"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/field/Optional.h"
#include "comms/options.h"
#include "mqtt5/MsgId.h"
#include "mqtt5/field/BinData.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/PropertiesList.h"
#include "mqtt5/field/ProtocolName.h"
#include "mqtt5/field/Qos.h"
#include "mqtt5/field/String.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace message
{

/// @brief Fields of @ref Connect.
/// @tparam TOpt Extra options
/// @see @ref Connect
/// @headerfile "mqtt5/message/Connect.h"
template <typename TOpt = mqtt5::options::DefaultOptions>
struct ConnectFields
{
    /// @brief Definition of <b>"Protocol Name"</b> field.
    using ProtocolName =
        mqtt5::field::ProtocolName<
            TOpt
        >;
    
    /// @brief Definition of <b>"Protocol Version"</b> field.
    struct ProtocolVersion : public
        comms::field::IntValue<
            mqtt5::field::FieldBase<>,
            std::uint8_t,
            comms::option::DefaultNumValue<5>,
            comms::option::ValidNumValue<5>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "Protocol Version";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Flags bitfield.
    struct FlagsMembers
    {
        /// @brief Definition of <b>""</b> field.
        class Low : public
            comms::field::BitmaskValue<
                mqtt5::field::FieldBase<>,
                comms::option::FixedBitLength<3U>,
                comms::option::BitmaskReservedBits<0x1U, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    mqtt5::field::FieldBase<>,
                    comms::option::FixedBitLength<3U>,
                    comms::option::BitmaskReservedBits<0x1U, 0x0U>
                >;
        public:
            /// @brief Provide names for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values:
            ///      @li @b BitIdx_cleanStart.
            ///      @li @b BitIdx_willFlag.
            COMMS_BITMASK_BITS(
                cleanStart=1,
                willFlag=2
            );
            
            /// @brief Generates independent access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///      @li @b getBitValue_cleanStart() and @b setBitValue_cleanStart().
            ///      @li @b getBitValue_willFlag() and @b setBitValue_willFlag().
            COMMS_BITMASK_BITS_ACCESS(
                cleanStart,
                willFlag
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit
            static const char* bitName(BitIdx idx)
            {
                static const char* Map[] = {
                    nullptr,
                    "Clean Start",
                    "Will Flag"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                static_assert(MapSize == BitIdx_numOfValues, "Invalid map");
            
                if (MapSize <= static_cast<std::size_t>(idx)) {
                    return nullptr;
                }
            
                return Map[static_cast<std::size_t>(idx)];
            }
            
        };
        
        /// @brief Definition of <b>"Will QoS"</b> field.
        struct WillQos : public
            mqtt5::field::Qos<
                TOpt,
                comms::option::FixedBitLength<2U>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Will QoS";
            }
            
        };
        
        /// @brief Definition of <b>""</b> field.
        class High : public
            comms::field::BitmaskValue<
                mqtt5::field::FieldBase<>,
                comms::option::FixedBitLength<3U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    mqtt5::field::FieldBase<>,
                    comms::option::FixedBitLength<3U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_willRetain, @b getBitValue_willRetain() and @b setBitValue_willRetain().
            ///      @li @b BitIdx_passwordFlag, @b getBitValue_passwordFlag() and @b setBitValue_passwordFlag().
            ///      @li @b BitIdx_userNameFlag, @b getBitValue_userNameFlag() and @b setBitValue_userNameFlag().
            COMMS_BITMASK_BITS_SEQ(
                willRetain,
                passwordFlag,
                userNameFlag
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit
            static const char* bitName(BitIdx idx)
            {
                static const char* Map[] = {
                    "Will Retain",
                    "Password Flag",
                    "User Name Flag"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                static_assert(MapSize == BitIdx_numOfValues, "Invalid map");
            
                if (MapSize <= static_cast<std::size_t>(idx)) {
                    return nullptr;
                }
            
                return Map[static_cast<std::size_t>(idx)];
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Low,
               WillQos,
               High
            >;
    };
    
    /// @brief Definition of <b>"Connect Flags"</b> field.
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
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///      The generated access functions are:
        ///     @li @b field_low() - for FlagsMembers::Low member field.
        ///     @li @b field_willQos() - for FlagsMembers::WillQos member field.
        ///     @li @b field_high() - for FlagsMembers::High member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            low,
            willQos,
            high
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Connect Flags";
        }
        
    };
    
    /// @brief Definition of <b>"Keep Alive"</b> field.
    struct KeepAlive : public
        comms::field::IntValue<
            mqtt5::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "Keep Alive";
        }
        
    };
    
    /// @brief Definition of <b>"Properties"</b> field.
    using Properties =
        mqtt5::field::PropertiesList<
            TOpt
        >;
    
    /// @brief Definition of <b>"Client ID"</b> field.
    struct ClientId : public
        mqtt5::field::String<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "Client ID";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref WillProperties optional.
    struct WillPropertiesMembers
    {
        /// @brief Definition of <b>"Will Properties"</b> field.
        struct WillProperties : public
            mqtt5::field::PropertiesList<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Will Properties";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"Will Properties"</b> field.
    struct WillProperties : public
        comms::field::Optional<
            typename WillPropertiesMembers::WillProperties,
            comms::option::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "Will Properties";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref WillTopic optional.
    struct WillTopicMembers
    {
        /// @brief Definition of <b>"Will Topic"</b> field.
        struct WillTopic : public
            mqtt5::field::String<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Will Topic";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"Will Topic"</b> field.
    struct WillTopic : public
        comms::field::Optional<
            typename WillTopicMembers::WillTopic,
            comms::option::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "Will Topic";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref WillMessage optional.
    struct WillMessageMembers
    {
        /// @brief Definition of <b>"Will Message"</b> field.
        struct WillMessage : public
            mqtt5::field::BinData<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Will Message";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"Will Message"</b> field.
    struct WillMessage : public
        comms::field::Optional<
            typename WillMessageMembers::WillMessage,
            comms::option::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "Will Message";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref UserName optional.
    struct UserNameMembers
    {
        /// @brief Definition of <b>"User Name"</b> field.
        struct UserName : public
            mqtt5::field::String<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "User Name";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"User Name"</b> field.
    struct UserName : public
        comms::field::Optional<
            typename UserNameMembers::UserName,
            comms::option::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "User Name";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Password optional.
    struct PasswordMembers
    {
        /// @brief Definition of <b>"Password"</b> field.
        struct Password : public
            mqtt5::field::BinData<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Password";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"Password"</b> field.
    struct Password : public
        comms::field::Optional<
            typename PasswordMembers::Password,
            comms::option::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "Password";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        ProtocolName,
        ProtocolVersion,
        Flags,
        KeepAlive,
        Properties,
        ClientId,
        WillProperties,
        WillTopic,
        WillMessage,
        UserName,
        Password
    >;
};

/// @brief Definition of <b>"CONNECT"</b> message class.
/// @details
///     See @ref ConnectFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqtt5/message/Connect.h"
template <typename TMsgBase, typename TOpt = mqtt5::options::DefaultOptions>
class Connect : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Connect,
        comms::option::StaticNumIdImpl<mqtt5::MsgId_Connect>,
        comms::option::FieldsImpl<typename ConnectFields<TOpt>::All>,
        comms::option::MsgType<Connect<TMsgBase, TOpt> >,
        comms::option::HasName,
        comms::option::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Connect,
            comms::option::StaticNumIdImpl<mqtt5::MsgId_Connect>,
            comms::option::FieldsImpl<typename ConnectFields<TOpt>::All>,
            comms::option::MsgType<Connect<TMsgBase, TOpt> >,
            comms::option::HasName,
            comms::option::HasCustomRefresh
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_protocolName() for @ref ConnectFields::ProtocolName field.
    ///     @li @b field_protocolVersion() for @ref ConnectFields::ProtocolVersion field.
    ///     @li @b field_flags() for @ref ConnectFields::Flags field.
    ///     @li @b field_keepAlive() for @ref ConnectFields::KeepAlive field.
    ///     @li @b field_properties() for @ref ConnectFields::Properties field.
    ///     @li @b field_clientId() for @ref ConnectFields::ClientId field.
    ///     @li @b field_willProperties() for @ref ConnectFields::WillProperties field.
    ///     @li @b field_willTopic() for @ref ConnectFields::WillTopic field.
    ///     @li @b field_willMessage() for @ref ConnectFields::WillMessage field.
    ///     @li @b field_userName() for @ref ConnectFields::UserName field.
    ///     @li @b field_password() for @ref ConnectFields::Password field.
    COMMS_MSG_FIELDS_ACCESS(
        protocolName,
        protocolVersion,
        flags,
        keepAlive,
        properties,
        clientId,
        willProperties,
        willTopic,
        willMessage,
        userName,
        password
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 9U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CONNECT";
    }
    
    /// @brief Custom read functionality
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::template doReadUntilAndUpdateLen<FieldIdx_clientId>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        doRefresh();
        return Base::template doReadFrom<FieldIdx_clientId>(iter, len);
    }
    
    /// @brief Updated validity check
    bool doValid() const
    {
        if ((!Base::doValid()) || (!Base::flagsZeroed())) {
            return false;
        }
        
        return 
            (!field_flags().field_high().getBitValue_passwordFlag()) ||
            (field_flags().field_high().getBitValue_userNameFlag());
    }
    
    /// @brief Custom refresh functionality
    bool doRefresh()
    {
        bool updated = Base::doRefresh();
        updated = refresh_willProperties() || updated;
        updated = refresh_willTopic() || updated;
        updated = refresh_willMessage() || updated;
        updated = refresh_userName() || updated;
        updated = refresh_password() || updated;
        return updated;
    }
    
    
private:
    template <typename TOptField>
    static bool refreshOptionalField(bool exists, TOptField& optField)
    {
        auto mode = comms::field::OptionalMode::Missing;
        if (exists) {
            mode = comms::field::OptionalMode::Exists;
        }
        
        if (optField.getMode() == mode) {
            return false;
        }
        
        optField.setMode(mode);
        return true;
    }
    
    bool refresh_willProperties()
    {
        return refreshOptionalField(field_flags().field_low().getBitValue_willFlag(), field_willProperties());
    }
    
    bool refresh_willTopic()
    {
        return refreshOptionalField(field_flags().field_low().getBitValue_willFlag(), field_willTopic());
    }
    
    bool refresh_willMessage()
    {
        return refreshOptionalField(field_flags().field_low().getBitValue_willFlag(), field_willMessage());
    }
    
    bool refresh_userName()
    {
        return refreshOptionalField(field_flags().field_high().getBitValue_userNameFlag(), field_userName());
    }
    
    bool refresh_password()
    {
        return refreshOptionalField(field_flags().field_high().getBitValue_passwordFlag(), field_password());
    }
    
    
    
};

} // namespace message

} // namespace mqtt5


