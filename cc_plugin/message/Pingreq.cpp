#include "Pingreq.h"

#include "comms_champion/property/field.h"
namespace cc = comms_champion;

namespace mqtt5
{

namespace cc_plugin
{

namespace message
{

namespace
{

QVariantList createProps()
{
    QVariantList props;
    return props;
}

} // namespace

Pingreq::Pingreq() = default;
Pingreq::~Pingreq() = default;
Pingreq& Pingreq::operator=(const Pingreq&) = default;
Pingreq& Pingreq::operator=(Pingreq&&) = default;

const QVariantList& Pingreq::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5


