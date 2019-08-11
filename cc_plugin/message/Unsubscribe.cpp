#include "Unsubscribe.h"

#include "comms_champion/property/field.h"
#include "cc_plugin/field/PacketId.h"
#include "cc_plugin/field/PropertiesList.h"
#include "cc_plugin/field/String.h"
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

static QVariantMap createProps_packetId()
{
    using Field = mqtt5::message::UnsubscribeFields<>::PacketId;
    auto props = cc_plugin::field::createProps_packetId(Field::name());
    return props;
    
}

static QVariantMap createProps_propertiesList()
{
    using Field = mqtt5::message::UnsubscribeFields<>::PropertiesList;
    auto props = cc_plugin::field::createProps_propertiesList(Field::name());
    return props;
    
}

static QVariantMap createProps_list()
{
    using Field = mqtt5::message::UnsubscribeFields<>::List;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(cc_plugin::field::createProps_topic(Field::ValueType::value_type::name()))
            .serialisedHidden()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_packetId());
    props.append(createProps_propertiesList());
    props.append(createProps_list());
    return props;
}

} // namespace

Unsubscribe::Unsubscribe() = default;
Unsubscribe::~Unsubscribe() = default;
Unsubscribe& Unsubscribe::operator=(const Unsubscribe&) = default;
Unsubscribe& Unsubscribe::operator=(Unsubscribe&&) = default;

const QVariantList& Unsubscribe::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5


