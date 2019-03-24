#include "Subscribe.h"

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

static QVariantMap createProps_packetId()
{
    using Field = mqtt5::message::SubscribeFields<>::PacketId;
    return cc_plugin::field::createProps_packetId(Field::name());
    
}

static QVariantMap createProps_propertiesList()
{
    using Field = mqtt5::message::SubscribeFields<>::PropertiesList;
    return cc_plugin::field::createProps_propertiesList(Field::name());
    
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_topic()
        {
            using Field = mqtt5::message::SubscribeFields<>::ListMembers::ElementMembers::Topic;
            return cc_plugin::field::createProps_topic(Field::name());
            
        }
        
        struct OptionsMembers
        {
            static QVariantMap createProps_qos()
            {
                using Field = mqtt5::message::SubscribeFields<>::ListMembers::ElementMembers::OptionsMembers::Qos;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .add("AtMostOnceDelivery", 0)
                        .add("AtLeastOnceDelivery", 1)
                        .add("ExactlyOnceDelivery", 2)
                        .asMap();
                
            }
            
            static QVariantMap createProps_bits()
            {
                using Field = mqtt5::message::SubscribeFields<>::ListMembers::ElementMembers::OptionsMembers::Bits;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .add(0U, "NL")
                        .add(1U, "RAP")
                        .asMap();
                
            }
            
            static QVariantMap createProps_retainHandling()
            {
                using Field = mqtt5::message::SubscribeFields<>::ListMembers::ElementMembers::OptionsMembers::RetainHandling;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .add("Send", 0)
                        .add("SendIfNotExists", 1)
                        .add("DontSend", 2)
                        .asMap();
                
            }
            
            static QVariantMap createProps_reserved()
            {
                using Field = mqtt5::message::SubscribeFields<>::ListMembers::ElementMembers::OptionsMembers::Reserved;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .hidden()
                        .asMap();
                
            }
            
        };
        
        static QVariantMap createProps_options()
        {
            using Field = mqtt5::message::SubscribeFields<>::ListMembers::ElementMembers::Options;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(OptionsMembers::createProps_qos())
                    .add(OptionsMembers::createProps_bits())
                    .add(OptionsMembers::createProps_retainHandling())
                    .add(OptionsMembers::createProps_reserved())
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_element()
    {
        using Field = mqtt5::message::SubscribeFields<>::ListMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(ElementMembers::createProps_topic())
                .add(ElementMembers::createProps_options())
                .asMap();
        
    }
    
};

static QVariantMap createProps_list()
{
    using Field = mqtt5::message::SubscribeFields<>::List;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(ListMembers::createProps_element())
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

Subscribe::Subscribe() = default;
Subscribe::~Subscribe() = default;
Subscribe& Subscribe::operator=(const Subscribe&) = default;
Subscribe& Subscribe::operator=(Subscribe&&) = default;

const QVariantList& Subscribe::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5


