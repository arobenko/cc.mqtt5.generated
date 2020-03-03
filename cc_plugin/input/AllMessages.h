// Generated by commsdsl2comms v3.3.3

#pragma once

#include <tuple>
#include "cc_plugin/message/Auth.h"
#include "cc_plugin/message/Connack.h"
#include "cc_plugin/message/Connect.h"
#include "cc_plugin/message/Disconnect.h"
#include "cc_plugin/message/Pingreq.h"
#include "cc_plugin/message/Pingresp.h"
#include "cc_plugin/message/Puback.h"
#include "cc_plugin/message/Pubcomp.h"
#include "cc_plugin/message/Publish.h"
#include "cc_plugin/message/Pubrec.h"
#include "cc_plugin/message/Pubrel.h"
#include "cc_plugin/message/Suback.h"
#include "cc_plugin/message/Subscribe.h"
#include "cc_plugin/message/Unsuback.h"
#include "cc_plugin/message/Unsubscribe.h"

namespace mqtt5
{

namespace cc_plugin
{

namespace input
{

using AllMessages =
    std::tuple<
        mqtt5::cc_plugin::message::Connect,
        mqtt5::cc_plugin::message::Connack,
        mqtt5::cc_plugin::message::Publish,
        mqtt5::cc_plugin::message::Puback,
        mqtt5::cc_plugin::message::Pubrec,
        mqtt5::cc_plugin::message::Pubrel,
        mqtt5::cc_plugin::message::Pubcomp,
        mqtt5::cc_plugin::message::Subscribe,
        mqtt5::cc_plugin::message::Suback,
        mqtt5::cc_plugin::message::Unsubscribe,
        mqtt5::cc_plugin::message::Unsuback,
        mqtt5::cc_plugin::message::Pingreq,
        mqtt5::cc_plugin::message::Pingresp,
        mqtt5::cc_plugin::message::Disconnect,
        mqtt5::cc_plugin::message::Auth
    >;

} // namespace input

} // namespace cc_plugin

} // namespace mqtt5


