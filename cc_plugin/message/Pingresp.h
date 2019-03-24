#pragma once

#include <memory>
#include <QtCore/QVariantList>
#include "comms_champion/ProtocolMessageBase.h"
#include "mqtt5/message/Pingresp.h"
#include "cc_plugin/Message.h"

namespace mqtt5
{

namespace cc_plugin
{

namespace message
{

class Pingresp : public
    comms_champion::ProtocolMessageBase<
        mqtt5::message::Pingresp<mqtt5::cc_plugin::Message>,
        Pingresp
    >
{
public:
    Pingresp();
    Pingresp(const Pingresp&) = delete;
    Pingresp(Pingresp&&) = delete;
    virtual ~Pingresp();
    Pingresp& operator=(const Pingresp&);
    Pingresp& operator=(Pingresp&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5



