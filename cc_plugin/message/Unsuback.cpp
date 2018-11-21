#include "Unsuback.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqtt5/message/Unsuback.h"
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
    using Field = mqtt5::message::UnsubackFields<>::PacketId;
    return cc_plugin::field::createProps_packetId(Field::name());
    
}

static QVariantMap createProps_propertiesList()
{
    using Field = mqtt5::message::UnsubackFields<>::PropertiesList;
    return cc_plugin::field::createProps_propertiesList(Field::name());
    
}

static QVariantMap createProps_list()
{
    using Field = mqtt5::message::UnsubackFields<>::List;
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

class UnsubackImpl : public
    comms_champion::ProtocolMessageBase<
        mqtt5::message::Unsuback<mqtt5::cc_plugin::Message>,
        UnsubackImpl
    >
{
public:
    UnsubackImpl() = default;
    UnsubackImpl(const UnsubackImpl&) = delete;
    UnsubackImpl(UnsubackImpl&&) = delete;
    virtual ~UnsubackImpl() = default;
    UnsubackImpl& operator=(const UnsubackImpl&) = default;
    UnsubackImpl& operator=(UnsubackImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Unsuback::Unsuback() : m_pImpl(new UnsubackImpl) {}
Unsuback::~Unsuback() = default;

Unsuback& Unsuback::operator=(const Unsuback& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Unsuback& Unsuback::operator=(Unsuback&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Unsuback::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Unsuback::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Unsuback::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Unsuback::resetImpl()
{
    m_pImpl->reset();
}

bool Unsuback::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Unsuback*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Unsuback::MsgIdParamType Unsuback::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Unsuback::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Unsuback::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Unsuback::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Unsuback::lengthImpl() const
{
    return m_pImpl->length();
}

bool Unsuback::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5


