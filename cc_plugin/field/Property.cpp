// Generated by commsdsl2comms v3.6.2

#include "Property.h"

#include "cc_plugin/field/BinData.h"
#include "cc_plugin/field/EnableEnum.h"
#include "cc_plugin/field/String.h"
#include "cc_plugin/field/VarLenInt.h"
#include "comms_champion/property/field.h"
#include "mqtt5/field/Property.h"


namespace cc = comms_champion;

namespace mqtt5
{

namespace cc_plugin
{

namespace field
{

namespace
{

struct PropertyMembers
{
    struct PayloadFormatIndicatorMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::PayloadFormatIndicatorMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::PayloadFormatIndicatorMembers::Value;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add("Unspecified", 0)
                    .add("UTF-8", 1)
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_payloadFormatIndicator(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::PayloadFormatIndicator;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(PayloadFormatIndicatorMembers::createProps_id(serHidden))
                .add(PayloadFormatIndicatorMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct MessageExpiryIntervalMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::MessageExpiryIntervalMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::MessageExpiryIntervalMembers::Value;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_messageExpiryInterval(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::MessageExpiryInterval;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(MessageExpiryIntervalMembers::createProps_id(serHidden))
                .add(MessageExpiryIntervalMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct ContentTypeMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::ContentTypeMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            using Field = mqtt5::field::PropertyMembers<>::ContentTypeMembers::Value;
            auto props = cc_plugin::field::createProps_string(Field::name(), serHidden);
            return props;
            
        }
        
    };
    
    static QVariantMap createProps_contentType(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::ContentType;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ContentTypeMembers::createProps_id(serHidden))
                .add(ContentTypeMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct ResponseTopicMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::ResponseTopicMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            using Field = mqtt5::field::PropertyMembers<>::ResponseTopicMembers::Value;
            auto props = cc_plugin::field::createProps_string(Field::name(), serHidden);
            return props;
            
        }
        
    };
    
    static QVariantMap createProps_responseTopic(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::ResponseTopic;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ResponseTopicMembers::createProps_id(serHidden))
                .add(ResponseTopicMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct CorrelationDataMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::CorrelationDataMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            using Field = mqtt5::field::PropertyMembers<>::CorrelationDataMembers::Value;
            auto props = cc_plugin::field::createProps_binData(Field::name(), serHidden);
            return props;
            
        }
        
    };
    
    static QVariantMap createProps_correlationData(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::CorrelationData;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(CorrelationDataMembers::createProps_id(serHidden))
                .add(CorrelationDataMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct SubscriptionIdMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::SubscriptionIdMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            using Field = mqtt5::field::PropertyMembers<>::SubscriptionIdMembers::Value;
            auto props = cc_plugin::field::createProps_varLenInt(Field::name(), serHidden);
            return props;
            
        }
        
    };
    
    static QVariantMap createProps_subscriptionId(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::SubscriptionId;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(SubscriptionIdMembers::createProps_id(serHidden))
                .add(SubscriptionIdMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct SessionExpiryIntervalMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::SessionExpiryIntervalMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::SessionExpiryIntervalMembers::Value;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_sessionExpiryInterval(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::SessionExpiryInterval;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(SessionExpiryIntervalMembers::createProps_id(serHidden))
                .add(SessionExpiryIntervalMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct AssignedClientIdMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::AssignedClientIdMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            using Field = mqtt5::field::PropertyMembers<>::AssignedClientIdMembers::Value;
            auto props = cc_plugin::field::createProps_string(Field::name(), serHidden);
            return props;
            
        }
        
    };
    
    static QVariantMap createProps_assignedClientId(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::AssignedClientId;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(AssignedClientIdMembers::createProps_id(serHidden))
                .add(AssignedClientIdMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct ServerKeepAliveMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::ServerKeepAliveMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::ServerKeepAliveMembers::Value;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_serverKeepAlive(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::ServerKeepAlive;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ServerKeepAliveMembers::createProps_id(serHidden))
                .add(ServerKeepAliveMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct AuthMethodMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::AuthMethodMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            using Field = mqtt5::field::PropertyMembers<>::AuthMethodMembers::Value;
            auto props = cc_plugin::field::createProps_string(Field::name(), serHidden);
            return props;
            
        }
        
    };
    
    static QVariantMap createProps_authMethod(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::AuthMethod;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(AuthMethodMembers::createProps_id(serHidden))
                .add(AuthMethodMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct AuthDataMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::AuthDataMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            using Field = mqtt5::field::PropertyMembers<>::AuthDataMembers::Value;
            auto props = cc_plugin::field::createProps_binData(Field::name(), serHidden);
            return props;
            
        }
        
    };
    
    static QVariantMap createProps_authData(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::AuthData;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(AuthDataMembers::createProps_id(serHidden))
                .add(AuthDataMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct RequestProblemInfoMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::RequestProblemInfoMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            using Field = mqtt5::field::PropertyMembers<>::RequestProblemInfoMembers::Value;
            auto props = cc_plugin::field::createProps_enableEnum(Field::name(), serHidden);
            return props;
            
        }
        
    };
    
    static QVariantMap createProps_requestProblemInfo(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::RequestProblemInfo;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(RequestProblemInfoMembers::createProps_id(serHidden))
                .add(RequestProblemInfoMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct WillDelayIntervalMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::WillDelayIntervalMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::WillDelayIntervalMembers::Value;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_willDelayInterval(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::WillDelayInterval;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(WillDelayIntervalMembers::createProps_id(serHidden))
                .add(WillDelayIntervalMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct RequestResponseInfoMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::RequestResponseInfoMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            using Field = mqtt5::field::PropertyMembers<>::RequestResponseInfoMembers::Value;
            auto props = cc_plugin::field::createProps_enableEnum(Field::name(), serHidden);
            return props;
            
        }
        
    };
    
    static QVariantMap createProps_requestResponseInfo(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::RequestResponseInfo;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(RequestResponseInfoMembers::createProps_id(serHidden))
                .add(RequestResponseInfoMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct ResponseInfoMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::ResponseInfoMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            using Field = mqtt5::field::PropertyMembers<>::ResponseInfoMembers::Value;
            auto props = cc_plugin::field::createProps_string(Field::name(), serHidden);
            return props;
            
        }
        
    };
    
    static QVariantMap createProps_responseInfo(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::ResponseInfo;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ResponseInfoMembers::createProps_id(serHidden))
                .add(ResponseInfoMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct ServerRefMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::ServerRefMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            using Field = mqtt5::field::PropertyMembers<>::ServerRefMembers::Value;
            auto props = cc_plugin::field::createProps_string(Field::name(), serHidden);
            return props;
            
        }
        
    };
    
    static QVariantMap createProps_serverRef(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::ServerRef;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ServerRefMembers::createProps_id(serHidden))
                .add(ServerRefMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct ReasonStrMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::ReasonStrMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            using Field = mqtt5::field::PropertyMembers<>::ReasonStrMembers::Value;
            auto props = cc_plugin::field::createProps_string(Field::name(), serHidden);
            return props;
            
        }
        
    };
    
    static QVariantMap createProps_reasonStr(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::ReasonStr;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ReasonStrMembers::createProps_id(serHidden))
                .add(ReasonStrMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct ReceiveMaxMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::ReceiveMaxMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::ReceiveMaxMembers::Value;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_receiveMax(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::ReceiveMax;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ReceiveMaxMembers::createProps_id(serHidden))
                .add(ReceiveMaxMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct TopicAliasMaxMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::TopicAliasMaxMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::TopicAliasMaxMembers::Value;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_topicAliasMax(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::TopicAliasMax;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(TopicAliasMaxMembers::createProps_id(serHidden))
                .add(TopicAliasMaxMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct MaxQosMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::MaxQosMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::MaxQosMembers::Value;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add("AtMostOnceDelivery", 0)
                    .add("AtLeastOnceDelivery", 1)
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_maxQos(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::MaxQos;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(MaxQosMembers::createProps_id(serHidden))
                .add(MaxQosMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct RetainAvailableMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::RetainAvailableMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            using Field = mqtt5::field::PropertyMembers<>::RetainAvailableMembers::Value;
            auto props = cc_plugin::field::createProps_enableEnum(Field::name(), serHidden);
            return props;
            
        }
        
    };
    
    static QVariantMap createProps_retainAvailable(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::RetainAvailable;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(RetainAvailableMembers::createProps_id(serHidden))
                .add(RetainAvailableMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct UserPropertyMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::UserPropertyMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        struct ValueMembers
        {
            static QVariantMap createProps_first(bool serHidden)
            {
                using Field = mqtt5::field::PropertyMembers<>::UserPropertyMembers::ValueMembers::First;
                auto props = cc_plugin::field::createProps_string(Field::name(), serHidden);
                return props;
                
            }
            
            static QVariantMap createProps_second(bool serHidden)
            {
                using Field = mqtt5::field::PropertyMembers<>::UserPropertyMembers::ValueMembers::Second;
                auto props = cc_plugin::field::createProps_string(Field::name(), serHidden);
                return props;
                
            }
            
        };
        
        static QVariantMap createProps_value(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::UserPropertyMembers::Value;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add(ValueMembers::createProps_first(serHidden))
                    .add(ValueMembers::createProps_second(serHidden))
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_userProperty(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::UserProperty;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(UserPropertyMembers::createProps_id(serHidden))
                .add(UserPropertyMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct MaxPacketSizeMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::MaxPacketSizeMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::MaxPacketSizeMembers::Value;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_maxPacketSize(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::MaxPacketSize;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(MaxPacketSizeMembers::createProps_id(serHidden))
                .add(MaxPacketSizeMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct WildcardSubAvailMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::WildcardSubAvailMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            using Field = mqtt5::field::PropertyMembers<>::WildcardSubAvailMembers::Value;
            auto props = cc_plugin::field::createProps_enableEnum(Field::name(), serHidden);
            return props;
            
        }
        
    };
    
    static QVariantMap createProps_wildcardSubAvail(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::WildcardSubAvail;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(WildcardSubAvailMembers::createProps_id(serHidden))
                .add(WildcardSubAvailMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct SubIdAvailMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::SubIdAvailMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            using Field = mqtt5::field::PropertyMembers<>::SubIdAvailMembers::Value;
            auto props = cc_plugin::field::createProps_enableEnum(Field::name(), serHidden);
            return props;
            
        }
        
    };
    
    static QVariantMap createProps_subIdAvail(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::SubIdAvail;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(SubIdAvailMembers::createProps_id(serHidden))
                .add(SubIdAvailMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
    struct SharedSubAvailMembers
    {
        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqtt5::field::PropertyMembers<>::SharedSubAvailMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .readOnly()
                    .asMap();
            
        }
        
        static QVariantMap createProps_value(bool serHidden)
        {
            using Field = mqtt5::field::PropertyMembers<>::SharedSubAvailMembers::Value;
            auto props = cc_plugin::field::createProps_enableEnum(Field::name(), serHidden);
            return props;
            
        }
        
    };
    
    static QVariantMap createProps_sharedSubAvail(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqtt5::field::PropertyMembers<>::SharedSubAvail;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(SharedSubAvailMembers::createProps_id(serHidden))
                .add(SharedSubAvailMembers::createProps_value(serHidden))
                .asMap();
        
    }
    
};

} // namespace


QVariantMap createProps_property(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqtt5::field::Property<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(PropertyMembers::createProps_payloadFormatIndicator(serHidden))
            .add(PropertyMembers::createProps_messageExpiryInterval(serHidden))
            .add(PropertyMembers::createProps_contentType(serHidden))
            .add(PropertyMembers::createProps_responseTopic(serHidden))
            .add(PropertyMembers::createProps_correlationData(serHidden))
            .add(PropertyMembers::createProps_subscriptionId(serHidden))
            .add(PropertyMembers::createProps_sessionExpiryInterval(serHidden))
            .add(PropertyMembers::createProps_assignedClientId(serHidden))
            .add(PropertyMembers::createProps_serverKeepAlive(serHidden))
            .add(PropertyMembers::createProps_authMethod(serHidden))
            .add(PropertyMembers::createProps_authData(serHidden))
            .add(PropertyMembers::createProps_requestProblemInfo(serHidden))
            .add(PropertyMembers::createProps_willDelayInterval(serHidden))
            .add(PropertyMembers::createProps_requestResponseInfo(serHidden))
            .add(PropertyMembers::createProps_responseInfo(serHidden))
            .add(PropertyMembers::createProps_serverRef(serHidden))
            .add(PropertyMembers::createProps_reasonStr(serHidden))
            .add(PropertyMembers::createProps_receiveMax(serHidden))
            .add(PropertyMembers::createProps_topicAliasMax(serHidden))
            .add(PropertyMembers::createProps_maxQos(serHidden))
            .add(PropertyMembers::createProps_retainAvailable(serHidden))
            .add(PropertyMembers::createProps_userProperty(serHidden))
            .add(PropertyMembers::createProps_maxPacketSize(serHidden))
            .add(PropertyMembers::createProps_wildcardSubAvail(serHidden))
            .add(PropertyMembers::createProps_subIdAvail(serHidden))
            .add(PropertyMembers::createProps_sharedSubAvail(serHidden))
            .setIndexHidden()
            .serialisedHidden()
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqtt5


