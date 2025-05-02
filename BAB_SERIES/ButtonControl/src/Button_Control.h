#ifndef READ_H
#define READ_H
#include <Arduino.h>
class Read {
    public:
    void read() {
        digitalRead(int pin);
    }
    private:
    int _pin;
};
#endif // READ_H

#ifndef DOUBLECLICK_H
#define DOUBLECLICK_H
#include <Arduino.h>
class DoubleClick {
    public:
    DoubleClick(int pin, unsigned long doubleClickThreshold = 500) 
        : _pin(pin), _doubleClickThreshold(doubleClickThreshold), _lastClickTime(0), _clickCount(0) {}

    void checkDoubleClick() {
        unsigned long currentTime = millis();
        if (digitalRead(_pin) == HIGH) {
            if (_lastClickTime == 0) {
                _lastClickTime = currentTime;
                _clickCount = 1;
            } else if (currentTime - _lastClickTime < _doubleClickThreshold) {
                _clickCount++;
                if (_clickCount == 2) {
                    // Double click detected
                    Serial.println("Double Click Detected");
                    _clickCount = 0; // Reset click count after detection
                }
            } else {
                // Reset if time exceeds threshold
                _clickCount = 1;
            }
        } else {
            // Reset last click time if button is not pressed
            _lastClickTime = 0;
        }
    }

private:
    unsigned long _lastClickTime;
    int _clickCount;
    int _pin;
    unsigned long _doubleClickThreshold;
};
#endif // DOUBLECLICK_H

#ifndef LONGPRESS_H
#define LONGPRESS_H
#include <Arduino.h>
class LongPress {
    public:
    LongPress(int pin, unsigned long longPressThreshold = 1000) 
        : _pin(pin), _longPressThreshold(longPressThreshold), _pressStartTime(0) {}

    void checkLongPress() {
        unsigned long currentTime = millis();
        if (digitalRead(_pin) == HIGH) {
            if (_pressStartTime == 0) {
                _pressStartTime = currentTime; // Start timing the press
            } else if (currentTime - _pressStartTime >= _longPressThreshold) {
                Serial.println("Long Press Detected");
                _pressStartTime = 0; // Reset after detection
            }
        } else {
            // Reset if button is released
            _pressStartTime = 0;
        }
    }

    void setLongPressThreshold(unsigned long threshold) {
        _longPressThreshold = threshold;
    }

private:
    unsigned long _pressStartTime;
    int _pin;
    unsigned long _longPressThreshold;
};
#endif // LONGPRESS_H
#ifndef AUTOCLICK_H
#define AUTOCLICK_H
#include <Arduino.h>
class AutoClick {
    public:
    AutoClick(int pin, unsigned long autoClickThreshold = 1000) 
        : _pin(pin), _autoClickThreshold(autoClickThreshold), _lastPressTime(0), _clickCount(0) {}

    void checkAutoClick() {
        unsigned long currentTime = millis();
        if (digitalRead(_pin) == HIGH) {
            if (_lastPressTime == 0) {
                _lastPressTime = currentTime; // Start timing the press
                _clickCount = 1;
            } else if (currentTime - _lastPressTime >= _autoClickThreshold) {
                // Auto click detected
                Serial.println("Auto Click Detected");
                _clickCount++;
                _lastPressTime = currentTime; // Reset after detection
            }
        } else {
            // Reset if button is released
            _lastPressTime = 0;
        }
    }

    void setAutoClickThreshold(unsigned long threshold) {
        _autoClickThreshold = threshold;
    }
private:
    unsigned long _lastPressTime;
    int _clickCount;
    int _pin;
    unsigned long _autoClickThreshold;
};
#endif // AUTOCLICK_H
#ifndef TRIPLECLICK_H
#define TRIPLECLICK_H
#include <Arduino.h>
class TripleClick {
    public:
    TripleClick(int pin, unsigned long tripleClickThreshold = 500) 
        : _pin(pin), _tripleClickThreshold(tripleClickThreshold), _lastClickTime(0), _clickCount(0) {}

    void checkTripleClick() {
        unsigned long currentTime = millis();
        if (digitalRead(_pin) == HIGH) {
            if (_lastClickTime == 0) {
                _lastClickTime = currentTime;
                _clickCount = 1;
            } else if (currentTime - _lastClickTime < _tripleClickThreshold) {
                _clickCount++;
                if (_clickCount == 3) {
                    // Triple click detected
                    Serial.println("Triple Click Detected");
                    _clickCount = 0; // Reset click count after detection
                }
            } else {
                // Reset if time exceeds threshold
                _clickCount = 1;
            }
        } else {
            // Reset last click time if button is not pressed
            _lastClickTime = 0;
        }
    }
private:
    unsigned long _lastClickTime;
    int _clickCount;
    int _pin;
    unsigned long _tripleClickThreshold;
};
#endif // TRIPLECLICK_H
#ifndef QUADCLICK_H
#define QUADCLICK_H
#include <Arduino.h>
class QuadClick {
    public:
    QuadClick(int pin, unsigned long quadClickThreshold = 500) 
        : _pin(pin), _quadClickThreshold(quadClickThreshold), _lastClickTime(0), _clickCount(0) {}

    void checkQuadClick() {
        unsigned long currentTime = millis();
        if (digitalRead(_pin) == HIGH) {
            if (_lastClickTime == 0) {
                _lastClickTime = currentTime;
                _clickCount = 1;
            } else if (currentTime - _lastClickTime < _quadClickThreshold) {
                _clickCount++;
                if (_clickCount == 4) {
                    // Quad click detected
                    Serial.println("Quad Click Detected");
                    _clickCount = 0; // Reset click count after detection
                }
            } else {
                // Reset if time exceeds threshold
                _clickCount = 1;
            }
        } else {
            // Reset last click time if button is not pressed
            _lastClickTime = 0;
        }
    }
private:
    unsigned long _lastClickTime;
    int _clickCount;
    int _pin;
    unsigned long _quadClickThreshold;
};
#endif // QUADCLICK_H
#ifndef SECONDBUTTONCLICK_SEQUENCE_H
#define SECONDBUTTONCLICK_SEQUENCE_H
#include <Arduino.h>
class SecondButtonClickSequence {
    public:
    SecondButtonClickSequence(int pin, unsigned long secondClickThreshold = 500) 
        : _pin(pin), _secondClickThreshold(secondClickThreshold), _lastClickTime(0), _clickCount(0) {}

    void checkSecondButtonClick() {
        unsigned long currentTime = millis();
        if (digitalRead(_pin) == HIGH) {
            if (_lastClickTime == 0) {
                _lastClickTime = currentTime;
                _clickCount = 1;
            } else if (currentTime - _lastClickTime < _secondClickThreshold) {
                _clickCount++;
                if (_clickCount == 2) {
                    // Second click detected
                    Serial.println("Second Button Click Detected");
                    _clickCount = 0; // Reset click count after detection
                }
            } else {
                // Reset if time exceeds threshold
                _clickCount = 1;
            }
        } else {
            // Reset last click time if button is not pressed
            _lastClickTime = 0;
        }
    }
private:
    unsigned long _lastClickTime;
    int _clickCount;
    int _pin;
    unsigned long _secondClickThreshold;
};
#endif // SECONDBUTTONCLICK_SEQUENCE_H
#ifndef CLICKDEBUG_H
#define CLICKDEBUG_H
#include <Arduino.h>
class ClickDebug {
    public:
    ClickDebug(int pin) : _pin(pin) {}

    void debugClick() {
        if (digitalRead(_pin) == HIGH) {
            Serial.println("Button Pressed");
        } else {
            Serial.println("Button Released");
        }
    }
private:
    int _pin;
};
#endif // CLICKDEBUG_H
#ifndef BUTTONCONTROL_H
#define BUTTONCONTROL_H
#include <Arduino.h>
class ButtonControl {
    public:
    ButtonControl(int pin) : _pin(pin) {
        pinMode(_pin, INPUT);
    }

    void read() {
        _buttonState = digitalRead(_pin);
    }

    int getButtonState() {
        return _buttonState;
    }
private:
    int _pin;
    int _buttonState;
};
#endif // BUTTONCONTROL_H
// THIS IS VERSION ALPHA 1.0.0, EXPECT COMPILER ERRORS AND BUGS SOON TO BE FIXED IN THE FUTURE.
/* END OF FILE */