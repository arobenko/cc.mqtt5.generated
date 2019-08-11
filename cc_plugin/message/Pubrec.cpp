#include "Pubrec.h"

#include "comms_champion/property/field.h"
#include "cc_plugin/field/PacketId.h"
#include "cc_plugin/field/PropertiesList.h"
#include "cc_plugin/field/ReasonCode.h"

namespace cc = comms_champion;

namespace mqtt5
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_packetId()
{
    using Field = mqtt5::message::PubrecFields<>::PacketId;
    auto props = cc_plugin::field::createProps_packetId(Field::name());
    return props;
    
}

static QVariantMap createProps_reasonCode()
{
    using Field = mqtt5::message::PubrecFields<>::ReasonCode;
    auto props = cc_plugin::field::createProps_reasonCode(Field::name());
    return props;
    
}

static QVariantMap createProps_propertiesList()
{
    using Field = mqtt5::message::PubrecFields<>::PropertiesList;
    auto props = cc_plugin::field::createProps_propertiesList(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_packetId());
    props.append(createProps_reasonCode());
    props.append(createProps_propertiesList());
    return props;
}

} // namespace

Pubrec::Pubrec() = default;
Pubrec::~Pubrec() = default;
Pubrec& Pubrec::operator=(const Pubrec&) = default;
Pubrec& Pubrec::operator=(Pubrec&&) = default;

const QVariantList& Pubrec::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5


