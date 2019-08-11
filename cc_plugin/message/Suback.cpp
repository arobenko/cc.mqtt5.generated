#include "Suback.h"

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
    using Field = mqtt5::message::SubackFields<>::PacketId;
    auto props = cc_plugin::field::createProps_packetId(Field::name());
    return props;
    
}

static QVariantMap createProps_propertiesList()
{
    using Field = mqtt5::message::SubackFields<>::PropertiesList;
    auto props = cc_plugin::field::createProps_propertiesList(Field::name());
    return props;
    
}

static QVariantMap createProps_list()
{
    using Field = mqtt5::message::SubackFields<>::List;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(cc_plugin::field::createProps_reasonCode(Field::ValueType::value_type::name()))
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

Suback::Suback() = default;
Suback::~Suback() = default;
Suback& Suback::operator=(const Suback&) = default;
Suback& Suback::operator=(Suback&&) = default;

const QVariantList& Suback::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5


