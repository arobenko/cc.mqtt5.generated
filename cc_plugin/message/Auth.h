#pragma once

#include <memory>
#include <QtCore/QVariantList>
#include "comms_champion/ProtocolMessageBase.h"
#include "mqtt5/message/Auth.h"
#include "cc_plugin/Message.h"

namespace mqtt5
{

namespace cc_plugin
{

namespace message
{

class Auth : public
    comms_champion::ProtocolMessageBase<
        mqtt5::message::Auth<mqtt5::cc_plugin::Message>,
        Auth
    >
{
public:
    Auth();
    Auth(const Auth&) = delete;
    Auth(Auth&&) = delete;
    virtual ~Auth();
    Auth& operator=(const Auth&);
    Auth& operator=(Auth&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5



