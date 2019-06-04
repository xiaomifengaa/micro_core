#pragma once


#define MASK_EXCEPTION_CAUGHT   1
#define MASK_CHANNEL_REGISTERED (1 << 1)
#define MASK_CHANNEL_UNREGISTERED (1 << 2)
#define MASK_CHANNEL_ACTIVE (1 << 3)
#define MASK_CHANNEL_INACTIVE   (1 << 4)
#define MASK_CHANNEL_READ   (1 << 5)
#define MASK_CHANNEL_READ_COMPLETE  (1 << 6)
#define MASK_CHANNEL_WRITE  (1 << 7)
#define MASK_CHANNEL_WRITE_COMPLETE  (1 << 8)
#define MASK_USER_EVENT_TRIGGERED   (1 << 9)
#define MASK_CHANNEL_WRITABILITY_CHANGED    (1 << 10)
#define MASK_BIND   (1 << 11)
#define MASK_CONNECT    (1 << 12)
#define MASK_CONNECTED    (1 << 13)
#define MASK_ACCEPTED    (1 << 14)
#define MASK_DISCONNECT (1 << 15)
#define MASK_CLOSE  (1 << 16)
#define MASK_DEREGISTER (1 << 17)
#define MASK_READ   (1 << 18)
#define MASK_WRITE  (1 << 19)
#define MASK_FLUSH  (1 << 20)


#define MASK_ALL_INBOUND (MASK_EXCEPTION_CAUGHT | MASK_CHANNEL_REGISTERED | MASK_CHANNEL_UNREGISTERED | MASK_CHANNEL_ACTIVE | MASK_CHANNEL_INACTIVE | MASK_CHANNEL_READ | MASK_CHANNEL_READ_COMPLETE | MASK_USER_EVENT_TRIGGERED | MASK_CHANNEL_WRITABILITY_CHANGED)
#define MASK_ALL_OUTBOUND (MASK_EXCEPTION_CAUGHT | MASK_BIND | MASK_CONNECT | MASK_DISCONNECT | MASK_CLOSE | MASK_DEREGISTER | MASK_READ | MASK_WRITE | MASK_FLUSH | MASK_CHANNEL_WRITE | MASK_CHANNEL_WRITE_COMPLETE)
#define MASK_ALL_ACCEPTOR (MASK_EXCEPTION_CAUGHT | MASK_ACCEPTED)
#define MASK_ALL_CONNECTOR (MASK_EXCEPTION_CAUGHT | MASK_CONNECTED)