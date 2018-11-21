#pragma once

#include "comms_champion/MessageBase.h"
#include "mqtt5/Message.h"

namespace mqtt5
{

namespace cc_plugin
{

class Message : public
    comms_champion::MessageBase<
        mqtt5::Message
    >
{
protected:
    virtual const QVariantList& extraTransportFieldsPropertiesImpl() const override;
};

} // namespace cc_plugin

} // namespace mqtt5



