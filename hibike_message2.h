#ifndef HIBIKE2_H
#define HIBIKE2_H
#include "Arduino.h"

#define MAX_PAYLOAD_SIZE    25
#define MESSAGEID_BYTES     1
#define PAYLOAD_SIZE_BYTES  1
#define CHECKSUM_BYTES      1

// Enumerations
typedef enum {
  SUBCRIPTION_REQUEST     = 0x01,
  SUBSCRIPTION_RESPONSE   = 0x02,
  DATA_UPDATE             = 0x03,
  DEVICE_UPDATE           = 0x04,
  DEVICE_STATUS           = 0x05,
  DEVICE_RESPONSE         = 0x06,
  ERROR                   = 0xFF
} messageID;

typedef enum {
  LIMIT_SWITCH = 0x01,
} deviceID;

typedef enum {
  GENERIC_ERROR   = 0xFF,
} errorID;

// Struct definitions
typedef struct hibikeMessage {
  uint8_t messageID;
  uint8_t payload[MAX_PAYLOAD_SIZE];
  uint8_t payload_length;
} message_t;

// Function prototypes
uint8_t checksum(uint8_t* data, int length);
int send_message(message_t* msg);
int read_message(message_t* msg);
void message_to_byte(uint8_t* data, message_t* msg);


#endif /* HIBIKE2_H */