#pragma once

#include <tuple>
#include <QtCore/QVariantList>
#include "comms_champion/TransportMessageBase.h"
#include "mqtt5/frame/Frame.h"
#include "cc_plugin/Message.h"

namespace mqtt5
{

namespace cc_plugin
{

namespace frame
{

struct FrameTransportMessageFields
{
    using All =
        std::tuple<
            mqtt5::frame::FrameLayers<>::IdAndFlagsMembers::IdAndFlagsField,
            mqtt5::frame::FrameLayers<>::SizeMembers::Size,
            mqtt5::frame::FrameLayers<>::Data::Field
        >;
};

class FrameTransportMessage : public
    comms_champion::TransportMessageBase<
        mqtt5::cc_plugin::Message,
        FrameTransportMessageFields::All
    >
{
protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace frame

} // namespace cc_plugin

} // namespace mqtt5


