#ifndef MESSAGE_HPP
#define MESSAGE_HPP

#include <string>
#include <cstdint>
#include "../segment/segment.hpp"

using namespace std;

class Message
{
public:
    string ip;
    uint16_t port;
    Segment segment;

    Message(string ip, uint16_t port, Segment segment);
    Message(const Message&);
    Message& operator=(Message&& other) noexcept;
    ~Message();

    bool operator==(const Message &message) const;
};

#endif