#ifndef HC06_h
#define HC06_h

#include <inttypes.h>
#include <Stream.h>
#include <SoftwareSerial.h>

/*
 * Comment the following define line if you aren't using the State pin or
 * if your HC05 does not have such a pin.  You still must specify a
 * statePin to initialize the HC05 class, but the pin will not be used.
 */
#define HC05_STATE_PIN

/*
 * This macro must be defined even if you are using a software serial
 * port. You can change this to any serial port supported by your
 * Arduino (i.e, Serial1, Serial2, etc.)
 */
#define HC05_HW_SERIAL_PORT Serial


/*
 * Optional macros, define as needed
 */
#define HC05_SOFTWARE_SERIAL
#define DEBUG_HC05
//#define DEBUG_SW_PORT swserial(4,5)

#ifdef DEBUG_HC05
#ifdef DEBUG_SW_PORT
#define DEBUG_PORT swserial
#else
#define DEBUG_PORT Serial
#endif

#define DEBUG_BEGIN(baud) DEBUG_PORT.begin(baud)
#define DEBUG_WRITE(...) DEBUG_PORT.write(__VA_ARGS__)
#define DEBUG_PRINT(...) DEBUG_PORT.print(__VA_ARGS__)
#define DEBUG_PRINTLN(...) DEBUG_PORT.println(__VA_ARGS__)

#else
#define DEBUG_BEGIN(baud)
#define DEBUG_WRITE(...)
#define DEBUG_PRINT(...)
#define DEBUG_PRINTLN(...)

#endif  // DEBUG_HC05

class HC06 : public Stream
{
public:
    HC06(int cmdPin, int statePin);
    HC06(int cmdPin, int statePin, uint8_t rx, uint8_t tx);
    unsigned long findBaud();
    void setBaud(unsigned long baud);  // always no parity, one stop bit
    void setBaud(unsigned long baud, unsigned long stopbits, unsigned long parity);

    // cmd(): 100ms default timeout covers simple commands, but commands
    // that manage the connection are likely to take much longer.
    int cmd(const char* cmd, unsigned long timeout=100);

    // HC05 cmdMode2 forces 38400, no parity, one stop bit
    // Entering cmdMode2 uses a pin to turn the HC05 power on and off
    // with the cmdPin high. cmdPin must remain high to stay in
    // cmdMode2, so use cmdMode2End() to exit.
    void cmdMode2Start(int pwrPin);
    void cmdMode2End(void);

#ifdef HC05_STATE_PIN
    bool connected(void);
#endif
    virtual int available(void);
    virtual void begin(unsigned long);
#ifndef HC05_SOFTWARE_SERIAL
	virtual void begin(unsigned long, uint8_t);
#endif
    virtual int peek(void);
    virtual int read(void);
    virtual void flush(void);
    virtual size_t write(uint8_t);
    using Print::write;
#ifdef HC05_SOFTWARE_SERIAL
    SoftwareSerial _btSerial;
#endif

private:
    bool cmdMode;
    int _cmdPin;
#ifdef HC05_STATE_PIN
    int _statePin;
#endif
    int _bufsize;
    char _buffer[32];
    void setCmdPin(bool state);
};

extern HC06 btSerial;
#endif  // HC05_h
