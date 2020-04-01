#pragma once


#define DEFAULT_TO_DO_COUNT           100

#define BEGIN_COUNT_TO_DO(STATIC_COUNTER, COUNT) \
static int32_t STATIC_COUNTER = COUNT; \
if (--STATIC_COUNTER <= 0) \
{ \
    STATIC_COUNTER = COUNT;

#define DEFAULT_BEGIN_COUNT_TO_DO(STATIC_COUNTER) \
static int32_t STATIC_COUNTER = DEFAULT_TO_DO_COUNT; \
if (--STATIC_COUNTER <= 0) \
{ \
    STATIC_COUNTER = DEFAULT_TO_DO_COUNT;

#define END_COUNT_TO_DO \
}