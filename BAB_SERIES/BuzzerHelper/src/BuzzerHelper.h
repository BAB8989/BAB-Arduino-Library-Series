#ifndef PIANOTONEHELPER_H
#define PIANOTONEHELPER_H
#include <Arduino.h>

// Define piano key frequencies (in Hz)
#define NOTE_C4  261
#define NOTE_D4  294
#define NOTE_E4  329
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  493
#define NOTE_C5  523

class BuzzerHelper {
public:
    void playTone(int frequency, int duration) {
        tone(buzzerPin, frequency, duration);
    }
    void stopTone() {
        noTone(buzzerPin);
    }
    void setBuzzerPin(int pin) {
        buzzerPin = pin;
        pinMode(buzzerPin, OUTPUT);
    }
    void playNoteC4(int duration) {
        playTone(NOTE_C4, duration);
    }
    void playNoteD4(int duration) {
        playTone(NOTE_D4, duration);
    }
    void playNoteE4(int duration) {
        playTone(NOTE_E4, duration);
    }
    void playNoteF4(int duration) {
        playTone(NOTE_F4, duration);
    }
    void playNoteG4(int duration) {
        playTone(NOTE_G4, duration);
    }
    void playNoteA4(int duration) {
        playTone(NOTE_A4, duration);
    }
    void playNoteB4(int duration) {
        playTone(NOTE_B4, duration);
    }
    void playNoteC5(int duration) {
        playTone(NOTE_C5, duration);
    }
private:
    int buzzerPin;
};
#endif
#ifndef GUITARTONEHELPER_H
#define GUITARTONEHELPER_H
#include <Arduino.h>
// Define guitar string frequencies (in Hz)
#define NOTE_E2  82
#define NOTE_A2  110
#define NOTE_D3  147
#define NOTE_G3  196
#define NOTE_B3  247
#define NOTE_E4  330
class GuitarToneHelper {
public:
    void playTone(int frequency, int duration) {
        tone(buzzerPin, frequency, duration);
    }
    void stopTone() {
        noTone(buzzerPin);
    }
    void setBuzzerPin(int pin) {
        buzzerPin = pin;
        pinMode(buzzerPin, OUTPUT);
    }
    void playNoteE2(int duration) {
        playTone(NOTE_E2, duration);
    }
    void playNoteA2(int duration) {
        playTone(NOTE_A2, duration);
    }
    void playNoteD3(int duration) {
        playTone(NOTE_D3, duration);
    }
    void playNoteG3(int duration) {
        playTone(NOTE_G3, duration);
    }
    void playNoteB3(int duration) {
        playTone(NOTE_B3, duration);
    }
    void playNoteE4(int duration) {
        playTone(NOTE_E4, duration);
    }
private:
    int buzzerPin;
};
#endif
#ifndef DRUMTONEHELPER_H
#define DRUMTONEHELPER_H
#include <Arduino.h>
class DrumToneHelper {
public:
    void playTone(int frequency, int duration) {
        tone(buzzerPin, frequency, duration);
    }
    void stopTone() {
        noTone(buzzerPin);
    }
    void setBuzzerPin(int pin) {
        buzzerPin = pin;
        pinMode(buzzerPin, OUTPUT);
    }
    // Drum sounds are typically not defined by specific frequencies,
    // but we can use some arbitrary values for demonstration.
    void playKickDrum(int duration) {
        playTone(60, duration); // Low frequency kick drum sound
    }
    void playSnareDrum(int duration) {
        playTone(120, duration); // Higher frequency snare drum sound
    }
    void playHiHat(int duration) {
        playTone(240, duration); // Even higher frequency hi-hat sound
    }
private:
    int buzzerPin;
};
#endif
#ifndef SYNTHTONEHELPER_H
#define SYNTHTONEHELPER_H
#include <Arduino.h>
class SynthToneHelper {
public:
    void playTone(int frequency, int duration) {
        tone(buzzerPin, frequency, duration);
    }
    void stopTone() {
        noTone(buzzerPin);
    }
    void setBuzzerPin(int pin) {
        buzzerPin = pin;
        pinMode(buzzerPin, OUTPUT);
    }
    // Synth sounds can be created using various waveforms,
    // but for simplicity, we'll use basic frequencies.
    void playSquareWave(int frequency, int duration) {
        playTone(frequency, duration); // Square wave approximation
    }
    void playSawtoothWave(int frequency, int duration) {
        playTone(frequency * 2, duration); // Sawtooth wave approximation
    }
    void playSineWave(int frequency, int duration) {
        playTone(frequency / 2, duration); // Sine wave approximation
    }
private:
    int buzzerPin;
};
#endif
#ifndef TRUMPETTONEHELPER_H
#define TRUMPETTONEHELPER_H
#include <Arduino.h>
class TrumpetToneHelper {
public:
    void playTone(int frequency, int duration) {
        tone(buzzerPin, frequency, duration);
    }
    void stopTone() {
        noTone(buzzerPin);
    }
    void setBuzzerPin(int pin) {
        buzzerPin = pin;
        pinMode(buzzerPin, OUTPUT);
    }
    // Trumpet sounds can be approximated using specific frequencies.
    void playTrumpetC4(int duration) {
        playTone(261, duration); // C4 note
    }
    void playTrumpetD4(int duration) {
        playTone(294, duration); // D4 note
    }
    void playTrumpetE4(int duration) {
        playTone(329, duration); // E4 note
    }
    void playTrumpetF4(int duration) {
        playTone(349, duration); // F4 note
    }
    void playTrumpetG4(int duration) {
        playTone(392, duration); // G4 note
    }
    void playTrumpetA4(int duration) {
        playTone(440, duration); // A4 note
    }
    void playTrumpetB4(int duration) {
        playTone(493, duration); // B4 note
    }
    void playTrumpetC5(int duration) {
        playTone(523, duration); // C5 note
    }
private:
    int buzzerPin;
};
#endif
#ifndef FLUTETONEHELPER_H
#define FLUTETONEHELPER_H
#include <Arduino.h>
class FluteToneHelper {
public:
    void playTone(int frequency, int duration) {
        tone(buzzerPin, frequency, duration);
    }
    void stopTone() {
        noTone(buzzerPin);
    }
    void setBuzzerPin(int pin) {
        buzzerPin = pin;
        pinMode(buzzerPin, OUTPUT);
    }
    // Flute sounds can be approximated using specific frequencies.
    void playFluteC4(int duration) {
        playTone(261, duration); // C4 note
    }
    void playFluteD4(int duration) {
        playTone(294, duration); // D4 note
    }
    void playFluteE4(int duration) {
        playTone(329, duration); // E4 note
    }
    void playFluteF4(int duration) {
        playTone(349, duration); // F4 note
    }
    void playFluteG4(int duration) {
        playTone(392, duration); // G4 note
    }
    void playFluteA4(int duration) {
        playTone(440, duration); // A4 note
    }
    void playFluteB4(int duration) {
        playTone(493, duration); // B4 note
    }
    void playFluteC5(int duration) {
        playTone(523, duration); // C5 note
    }
private:
    int buzzerPin;
};
#endif
// Help for various musical instruments using a buzzer
// This code provides classes for different instruments to play tones using a buzzer.
// Each class has methods to play specific notes or sounds associated with that instrument.
// The instruments included are Piano, Guitar, Drum, Synth, Trumpet, and Flute.
// more are coming soon...
// THIS IS IS VERSION ALPHA 1.0.0 EXPEXT COMPILER ERRORS AND BUGS SOON TO BE FIXED.
// THIS LIBRARY SERIES WILL UPDATE ALL LIBRARIES AT ONCE FOR EVERY FULL RELEASE.
// REPORT ANY BUGS TO THE GITHUB REPOSITORY.
// MY GITHUB USERNAME IS @BAB8989
/* END OF FILE */