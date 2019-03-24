#pragma once

#include <memory>
#include <QtCore/QVariantList>
#include "comms_champion/ProtocolMessageBase.h"
#include "mqtt5/message/Pingreq.h"
#include "cc_plugin/Message.h"

namespace mqtt5
{

namespace cc_plugin
{

namespace message
{

class Pingreq : public
    comms_champion::ProtocolMessageBase<
        mqtt5::message::Pingreq<mqtt5::cc_plugin::Message>,
        Pingreq
    >
{
public:
    Pingreq();
    Pingreq(const Pingreq&) = delete;
    Pingreq(Pingreq&&) = delete;
    virtual ~Pingreq();
    Pingreq& operator=(const Pingreq&);
    Pingreq& operator=(Pingreq&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5



