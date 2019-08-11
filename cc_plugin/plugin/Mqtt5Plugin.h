#pragma once

#include <QtCore/QObject>
#include <QtCore/QtPlugin>
#include "comms_champion/Plugin.h"
#include "comms_champion/Protocol.h"

namespace mqtt5
{

namespace cc_plugin
{

namespace plugin
{

class Mqtt5Plugin : public comms_champion::Plugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "mqtt5" FILE "Mqtt5Plugin.json")
    Q_INTERFACES(comms_champion::Plugin)

public:
    Mqtt5Plugin();
    virtual ~Mqtt5Plugin();
private:
    comms_champion::ProtocolPtr m_protocol;
};

} // namespace plugin

} // namespace cc_plugin

} // namespace mqtt5


