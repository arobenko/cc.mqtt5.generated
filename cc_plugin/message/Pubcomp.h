#pragma once

#include <memory>
#include <QtCore/QVariantList>
#include "comms_champion/ProtocolMessageBase.h"
#include "mqtt5/message/Pubcomp.h"
#include "cc_plugin/Message.h"

namespace mqtt5
{

namespace cc_plugin
{

namespace message
{

class Pubcomp : public
    comms_champion::ProtocolMessageBase<
        mqtt5::message::Pubcomp<mqtt5::cc_plugin::Message>,
        Pubcomp
    >
{
public:
    Pubcomp();
    Pubcomp(const Pubcomp&) = delete;
    Pubcomp(Pubcomp&&) = delete;
    virtual ~Pubcomp();
    Pubcomp& operator=(const Pubcomp&);
    Pubcomp& operator=(Pubcomp&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5



