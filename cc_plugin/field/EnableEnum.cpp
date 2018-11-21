#include "EnableEnum.h"

#include "comms_champion/property/field.h"
#include "mqtt5/field/EnableEnum.h"


namespace cc = comms_champion;

namespace mqtt5
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_enableEnum(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqtt5::field::EnableEnum<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("Disabled", 0)
            .add("Enabled", 1)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqtt5


