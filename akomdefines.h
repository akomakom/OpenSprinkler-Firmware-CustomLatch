

static const byte D1MINI_PIN_0   = 16;
static const byte D1MINI_PIN_1   = 5;
static const byte D1MINI_PIN_2   = 4;
static const byte D1MINI_PIN_3   = 0;
static const byte D1MINI_PIN_4   = 2;
static const byte D1MINI_PIN_5   = 14;
static const byte D1MINI_PIN_6   = 12;
static const byte D1MINI_PIN_7   = 13;
static const byte D1MINI_PIN_8   = 15;
static const byte D1MINI_PIN_RX   = 3;
static const byte D1MINI_PIN_TX   = 1;


static const byte D1MINI_PINS_ALL[] = {
  D1MINI_PIN_0,
//  D1MINI_PIN_1, //Don't mess with these, they are I2C
//  D1MINI_PIN_2,
  D1MINI_PIN_3,
  D1MINI_PIN_4,
  D1MINI_PIN_5,
  D1MINI_PIN_6,
  D1MINI_PIN_7,
  D1MINI_PIN_8,
};

static const byte D1MINI_PINS_ALL_SIZE = sizeof(D1MINI_PINS_ALL)/sizeof(byte);

static const byte D1MINI_PINS_STATIONS[] = {
// Using 0 for H-Bridge relays
// 1 and 2 are on I2C so not using them
// (but if needed, could disable all I2C code and use these pins also)

//  D1MINI_PIN_0, //common pin for h-bridge
//  D1MINI_PIN_1,
//  D1MINI_PIN_2,
  D1MINI_PIN_3,
  D1MINI_PIN_4,
  D1MINI_PIN_5,
  D1MINI_PIN_6,
//  D1MINI_PIN_7,  //not connected.  Enable these for >4 relays
//  D1MINI_PIN_8,
};

static const byte D1MINI_PINS_STATIONS_SIZE = sizeof(D1MINI_PINS_STATIONS)/sizeof(byte);

// cycle all relays on boot to help identify order, 1/0
#define LAKOM_TEST_ALL_RELAYS   	0
// close all valves in case power failed during a cycle, 1/0
#define LAKOM_SAFETY_CLOSE_ON_START 1
// how many times the valve relay should be triggered to make extra sure that it worked.
// 1 is normal operation (open and close once).  100ms sleep between tries.
#define LAKOM_RELAY_TRIGGER_COUNT  	2

// ms: how long to turn on relay for.
// This may vary depending on valve/available power
#define LAKOM_LATCH_ON_TIME 	100

// ms: how long to wait between retries if LAKOM_RELAY_TRIGGER_COUNT > 1
#define LAKOM_LATCH_ATTEMPT_DELAY	500
