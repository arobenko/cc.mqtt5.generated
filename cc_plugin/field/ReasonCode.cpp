// Generated by commsdsl2comms v3.3.1

#include "ReasonCode.h"

#include "comms_champion/property/field.h"
#include "mqtt5/field/ReasonCode.h"


namespace cc = comms_champion;

namespace mqtt5
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_reasonCode(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqtt5::field::ReasonCode<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("Success", 0)
            .add("Granted QoS1", 1)
            .add("Granted QoS2", 2)
            .add("Disconnect w/ Will", 4)
            .add("No Matching Subscribers", 16)
            .add("No Subscription Existed", 17)
            .add("Continue authentication", 24)
            .add("Re-authenticate", 25)
            .add("Unspecified error", 128)
            .add("Malformed Packet", 129)
            .add("Protocol Error", 130)
            .add("Impl. Specific Error", 131)
            .add("Unsupported Version", 132)
            .add("Client ID Invalid", 133)
            .add("Bad Username/Password", 134)
            .add("Not authorized", 135)
            .add("Server unavailable", 136)
            .add("Server busy", 137)
            .add("Banned", 138)
            .add("Server shutting down", 139)
            .add("Bad auth method", 140)
            .add("Keep Alive timeout", 141)
            .add("Session taken over", 142)
            .add("Topic Filter invalid", 143)
            .add("Topic Name invalid", 144)
            .add("Packet ID in use", 145)
            .add("Packet ID not found", 146)
            .add("Receive Max exceeded", 147)
            .add("Topic Alias invalid", 148)
            .add("Packet too large", 149)
            .add("Message rate too high", 150)
            .add("Quota exceeded", 151)
            .add("Administrative action", 152)
            .add("Payload format invalid", 153)
            .add("Retain not supported", 154)
            .add("QoS not supported", 155)
            .add("Use another server", 156)
            .add("Server moved", 157)
            .add("Shared Sub not supported", 158)
            .add("Connection rate exceeded", 159)
            .add("Maximum connect time", 160)
            .add("Sub IDs not supported", 161)
            .add("Wildcard Subs not supported", 162)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqtt5


