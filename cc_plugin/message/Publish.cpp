#include "Publish.h"

#include "comms_champion/property/field.h"
#include "cc_plugin/field/PacketId.h"
#include "cc_plugin/field/PropertiesList.h"
#include "cc_plugin/field/Topic.h"

namespace cc = comms_champion;

namespace mqtt5
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_topic()
{
    using Field = mqtt5::message::PublishFields<>::Topic;
    auto props = cc_plugin::field::createProps_topic(Field::name());
    return props;
    
}

static QVariantMap createProps_packetId()
{
    using Field = mqtt5::message::PublishFields<>::PacketId;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(cc_plugin::field::createProps_packetId("Packet ID"))
            .asMap();
    
}

static QVariantMap createProps_propertiesList()
{
    using Field = mqtt5::message::PublishFields<>::PropertiesList;
    auto props = cc_plugin::field::createProps_propertiesList(Field::name());
    return props;
    
}

static QVariantMap createProps_payload()
{
    using Field = mqtt5::message::PublishFields<>::Payload;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_topic());
    props.append(createProps_packetId());
    props.append(createProps_propertiesList());
    props.append(createProps_payload());
    return props;
}

} // namespace

Publish::Publish() = default;
Publish::~Publish() = default;
Publish& Publish::operator=(const Publish&) = default;
Publish& Publish::operator=(Publish&&) = default;

const QVariantList& Publish::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5


