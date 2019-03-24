#pragma once

#include <memory>
#include <QtCore/QVariantList>
#include "comms_champion/ProtocolMessageBase.h"
#include "mqtt5/message/Publish.h"
#include "cc_plugin/Message.h"

namespace mqtt5
{

namespace cc_plugin
{

namespace message
{

class Publish : public
    comms_champion::ProtocolMessageBase<
        mqtt5::message::Publish<mqtt5::cc_plugin::Message>,
        Publish
    >
{
public:
    Publish();
    Publish(const Publish&) = delete;
    Publish(Publish&&) = delete;
    virtual ~Publish();
    Publish& operator=(const Publish&);
    Publish& operator=(Publish&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5



