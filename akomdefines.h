

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
  D1MINI_PIN_1,
  D1MINI_PIN_2,
  D1MINI_PIN_3,
  D1MINI_PIN_4,
  D1MINI_PIN_5,
  D1MINI_PIN_6,
  D1MINI_PIN_7,
  D1MINI_PIN_8,
};

static const byte D1MINI_PINS_ALL_SIZE = 9;

static const byte D1MINI_PINS_STATIONS[] = {
// Using 0 for H-Bridge relays
// 1 and 2 are on I2C so not using them
// (but if needed, could disable all I2C code)
//  D1MINI_PIN_0,
//  D1MINI_PIN_1,
//  D1MINI_PIN_2,
  D1MINI_PIN_3,
  D1MINI_PIN_4,
  D1MINI_PIN_5,
  D1MINI_PIN_6,
  D1MINI_PIN_7,
  D1MINI_PIN_8,
};

static const byte D1MINI_PINS_STATIONS_SIZE = 6;

// cycle all relays on boot to help identify order
static const bool LAKOM_TEST_ALL_RELAYS = 1;
// close all valves in case power failed during a cycle
static const bool LAKOM_SAFETY_CLOSE_ON_START = 1;