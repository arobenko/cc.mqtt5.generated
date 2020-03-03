// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains dispatch to handling function(s) for client input messages.

#pragma once

#include <type_traits>
#include "mqtt5/MsgId.h"
#include "mqtt5/input/ClientInputMessages.h"

namespace mqtt5
{

namespace dispatch
{

/// @brief Dispatch message object to its appropriate handling function.
/// @details @b switch statement based (on message ID) cast and dispatch functionality.
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref mqtt5::options::DefaultOptions.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object. Must define
///     @b handle() member function for every message type it exects
///     to handle and one for the interface class as well.
///     @code
///     using MyInterface = mqtt5::Message<...>;
///     using MyConnack = mqtt5::message::Connack<MyInterface, mqtt5::options::DefaultOptions>;
///     using MyPublish = mqtt5::message::Publish<MyInterface, mqtt5::options::DefaultOptions>;
///     struct MyHandler {
///         void handle(MyConnack& msg) {...}
///         void handle(MyPublish& msg) {...}
///         ...
///         // Handle all unexpected or irrelevant messages.
///         void handle(MyInterface& msg) {...}
///     };
///     @endcode
///     Every @b handle() function may return a value, but every
///     function must return the @b same type.
/// @note Defined in mqtt5/dispatch/DispatchClientInputMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchClientInputMessage(
    mqtt5::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    using InterfaceType = typename std::decay<decltype(msg)>::type;
    switch(id) {
    case mqtt5::MsgId_Connack:
    {
        using MsgType = mqtt5::message::Connack<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqtt5::MsgId_Publish:
    {
        using MsgType = mqtt5::message::Publish<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqtt5::MsgId_Puback:
    {
        using MsgType = mqtt5::message::Puback<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqtt5::MsgId_Pubrec:
    {
        using MsgType = mqtt5::message::Pubrec<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqtt5::MsgId_Pubrel:
    {
        using MsgType = mqtt5::message::Pubrel<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqtt5::MsgId_Pubcomp:
    {
        using MsgType = mqtt5::message::Pubcomp<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqtt5::MsgId_Suback:
    {
        using MsgType = mqtt5::message::Suback<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqtt5::MsgId_Unsuback:
    {
        using MsgType = mqtt5::message::Unsuback<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqtt5::MsgId_Pingresp:
    {
        using MsgType = mqtt5::message::Pingresp<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqtt5::MsgId_Disconnect:
    {
        using MsgType = mqtt5::message::Disconnect<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqtt5::MsgId_Auth:
    {
        using MsgType = mqtt5::message::Auth<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    default:
        break;
    };

    return handler.handle(msg);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchClientInputMessage(), but receives extra @b idx parameter.
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref mqtt5::options::DefaultOptions.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
///     Expected to be @b 0.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchClientInputMessage()
/// @note Defined in mqtt5/dispatch/DispatchClientInputMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchClientInputMessage(
    mqtt5::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    if (idx != 0U) {
        return handler.handle(msg);
    }
    return dispatchClientInputMessage<TProtOptions>(id, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchClientInputMessage(), but passing
///     mqtt5::options::DefaultOptions as first template parameter.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchClientInputMessage()
/// @note Defined in mqtt5/dispatch/DispatchClientInputMessage.h
template<typename TMsg, typename THandler>
auto dispatchClientInputMessageDefaultOptions(
    mqtt5::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchClientInputMessage<mqtt5::options::DefaultOptions>(id, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchClientInputMessageDefaultOptions(), 
///     but receives extra @b idx parameter.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchClientInputMessageDefaultOptions()
/// @note Defined in mqtt5/dispatch/DispatchClientInputMessage.h
template<typename TMsg, typename THandler>
auto dispatchClientInputMessageDefaultOptions(
    mqtt5::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchClientInputMessage<mqtt5::options::DefaultOptions>(id, idx, msg, handler);
}

/// @brief Message dispatcher class to be used with
///     @b comms::processAllWithDispatchViaDispatcher() function (or similar).
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref mqtt5::options::DefaultOptions.
/// @headerfile "mqtt5/dispatch/DispatchClientInputMessage.h"
template <typename TProtOptions>
struct ClientInputMsgDispatcher
{
    /// @brief Class detection tag
    using MsgDispatcherTag = void;

    /// @brief Dispatch message to its handler.
    /// @details Uses appropriate @ref dispatchClientInputMessage() function.
    /// @param[in] id ID of the message.
    /// @param[in] idx Index (or offset) of the message among those having the same numeric ID.
    /// @param[in] msg Reference to message object.
    /// @param[in] handler Reference to handler object.
    /// @return What the @ref dispatchClientInputMessage() function returns.
    template <typename TMsg, typename THandler>
    static auto dispatch(mqtt5::MsgId id, std::size_t idx, TMsg& msg, THandler& handler) ->
        decltype(mqtt5::dispatch::dispatchClientInputMessage<TProtOptions>(id, idx, msg, handler))
    {
        return mqtt5::dispatch::dispatchClientInputMessage<TProtOptions>(id, idx, msg, handler);
    }

    /// @brief Complementary dispatch function.
    /// @details Same as other dispatch without @b TAllMessages template parameter,
    ///     used by  @b comms::processAllWithDispatchViaDispatcher().
    template <typename TAllMessages, typename TMsg, typename THandler>
    static auto dispatch(mqtt5::MsgId id, std::size_t idx, TMsg& msg, THandler& handler) ->
        decltype(dispatch(id, idx, msg, handler))
    {
        return dispatch(id, idx, msg, handler);
    }

    /// @brief Dispatch message to its handler.
    /// @details Uses appropriate @ref dispatchClientInputMessage() function.
    /// @param[in] id ID of the message.
    /// @param[in] msg Reference to message object.
    /// @param[in] handler Reference to handler object.
    /// @return What the @ref dispatchClientInputMessage() function returns.
    template <typename TMsg, typename THandler>
    static auto dispatch(mqtt5::MsgId id, TMsg& msg, THandler& handler) ->
        decltype(mqtt5::dispatch::dispatchClientInputMessage<TProtOptions>(id, msg, handler))
    {
        return mqtt5::dispatch::dispatchClientInputMessage<TProtOptions>(id, msg, handler);
    }

    /// @brief Complementary dispatch function.
    /// @details Same as other dispatch without @b TAllMessages template parameter,
    ///     used by  @b comms::processAllWithDispatchViaDispatcher().
    template <typename TAllMessages, typename TMsg, typename THandler>
    static auto dispatch(mqtt5::MsgId id, TMsg& msg, THandler& handler) ->
        decltype(dispatch(id, msg, handler))
    {
        return dispatch(id, msg, handler);
    }
};

/// @brief Message dispatcher class to be used with
///     @b comms::processAllWithDispatchViaDispatcher() function (or similar).
/// @details Same as @ref ClientInputMsgDispatcher, but passing
///     @ref mqtt5::options::DefaultOptions as template parameter.
/// @note Defined in "mqtt5/dispatch/DispatchClientInputMessage.h"
using ClientInputMsgDispatcherDefaultOptions =
    ClientInputMsgDispatcher<mqtt5::options::DefaultOptions>;

} // namespace dispatch

} // namespace mqtt5


