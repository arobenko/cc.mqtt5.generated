#include "String.h"

#include "comms_champion/property/field.h"
#include "mqtt5/field/String.h"


namespace cc = comms_champion;

namespace mqtt5
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_string(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqtt5::field::String<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqtt5


