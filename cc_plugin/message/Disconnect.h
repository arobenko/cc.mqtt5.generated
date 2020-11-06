// Generated by commsdsl2comms v3.5.3

#pragma once

#include <memory>
#include <QtCore/QVariantList>
#include "comms_champion/ProtocolMessageBase.h"
#include "mqtt5/message/Disconnect.h"
#include "cc_plugin/Message.h"

namespace mqtt5
{

namespace cc_plugin
{

namespace message
{

class Disconnect : public
    comms_champion::ProtocolMessageBase<
        mqtt5::message::Disconnect<mqtt5::cc_plugin::Message>,
        Disconnect
    >
{
public:
    Disconnect();
    Disconnect(const Disconnect&) = delete;
    Disconnect(Disconnect&&) = delete;
    virtual ~Disconnect();
    Disconnect& operator=(const Disconnect&);
    Disconnect& operator=(Disconnect&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5



