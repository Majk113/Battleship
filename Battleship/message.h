#pragma once


enum class MessageType
{
    Unknown = 0,
    Ready,
    Attack,
    Miss,
    Hit,
    HitAndSunk,
    SunkAll
};

class Message
{
public:
    Message() = delete;
    Message(MessageType type, int field = 0xFF);
    ~Message() {}

    MessageType type = MessageType::Unknown;
    int field;
};
