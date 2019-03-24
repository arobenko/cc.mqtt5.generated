#pragma once

#include <memory>
#include <QtCore/QVariantList>
#include "comms_champion/ProtocolMessageBase.h"
#include "mqtt5/message/Connack.h"
#include "cc_plugin/Message.h"

namespace mqtt5
{

namespace cc_plugin
{

namespace message
{

class Connack : public
    comms_champion::ProtocolMessageBase<
        mqtt5::message::Connack<mqtt5::cc_plugin::Message>,
        Connack
    >
{
public:
    Connack();
    Connack(const Connack&) = delete;
    Connack(Connack&&) = delete;
    virtual ~Connack();
    Connack& operator=(const Connack&);
    Connack& operator=(Connack&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5



