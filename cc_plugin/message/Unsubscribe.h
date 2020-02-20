// Generated by commsdsl2comms v3.3.2

#pragma once

#include <memory>
#include <QtCore/QVariantList>
#include "comms_champion/ProtocolMessageBase.h"
#include "mqtt5/message/Unsubscribe.h"
#include "cc_plugin/Message.h"

namespace mqtt5
{

namespace cc_plugin
{

namespace message
{

class Unsubscribe : public
    comms_champion::ProtocolMessageBase<
        mqtt5::message::Unsubscribe<mqtt5::cc_plugin::Message>,
        Unsubscribe
    >
{
public:
    Unsubscribe();
    Unsubscribe(const Unsubscribe&) = delete;
    Unsubscribe(Unsubscribe&&) = delete;
    virtual ~Unsubscribe();
    Unsubscribe& operator=(const Unsubscribe&);
    Unsubscribe& operator=(Unsubscribe&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5



