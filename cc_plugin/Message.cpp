#include "Message.h"

#include "comms_champion/property/field.h"
#include "cc_plugin/field/Qos.h"

namespace cc = comms_champion;

namespace mqtt5
{

namespace cc_plugin
{

namespace
{

struct FlagsMembers
{
    static QVariantMap createProps_retain()
    {
        using Field = mqtt5::MessageFields::FlagsMembers::Retain;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "retain")
                .asMap();
        
    }
    
    static QVariantMap createProps_qos()
    {
        using Field = mqtt5::MessageFields::FlagsMembers::Qos;
        auto props = cc_plugin::field::createProps_qos(Field::name(), true);
        return props;
        
    }
    
    static QVariantMap createProps_dup()
    {
        using Field = mqtt5::MessageFields::FlagsMembers::Dup;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "dup")
                .asMap();
        
    }
    
};

static QVariantMap createProps_flags()
{
    using Field = mqtt5::MessageFields::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden()
            .add(FlagsMembers::createProps_retain())
            .add(FlagsMembers::createProps_qos())
            .add(FlagsMembers::createProps_dup())
            .asMap();
    
}


QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_flags());
    return props;
}

} // namespace 

const QVariantList& Message::extraTransportFieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace cc_plugin

} // namespace mqtt5


