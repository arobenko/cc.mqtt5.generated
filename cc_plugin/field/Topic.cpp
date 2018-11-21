#include "Topic.h"

#include "cc_plugin/field/String.h"
#include "comms_champion/property/field.h"
#include "mqtt5/field/Topic.h"


namespace cc = comms_champion;

namespace mqtt5
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_topic(const char* name, bool serHidden)
{
    return cc_plugin::field::createProps_string(name, serHidden);
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqtt5


