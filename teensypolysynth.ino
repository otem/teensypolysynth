#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformDc     lfoenvelope;          //xy=589.047534942627,966.6665487289429
AudioSynthWaveform       lfo;            //xy=677.4761581420898,1172.523769378662
AudioMixer4              mixer1;         //xy=720.9047355651855,1027.666706085205
AudioAnalyzePeak         peak1;          //xy=949.0476112365723,890.8095207214355
AudioSynthWaveform       voice8b;        //xy=1185.6190299987793,1941.6666355133057
AudioSynthNoiseWhite     voice8n;        //xy=1185.6190299987793,1976.6666355133057
AudioSynthWaveform       voice8a;        //xy=1187.6190299987793,1903.6666355133057
AudioSynthWaveform       voice4a;        //xy=1206.6190299987793,925.6666355133057
AudioSynthWaveform       voice4b;        //xy=1207.6190299987793,963.6666355133057
AudioSynthNoiseWhite     voice4n;        //xy=1207.6190299987793,998.6666355133057
AudioSynthWaveform       voice5b;        //xy=1208.6190299987793,1219.6666355133057
AudioSynthNoiseWhite     voice5n;        //xy=1208.6190299987793,1254.6666355133057
AudioSynthWaveform       voice5a;        //xy=1213.6190299987793,1176.6666355133057
AudioSynthWaveform       voice7b;        //xy=1217.6190299987793,1710.6666355133057
AudioSynthNoiseWhite     voice7n;        //xy=1217.6190299987793,1745.6666355133057
AudioSynthWaveform       voice6b;        //xy=1220.6190299987793,1473.6666355133057
AudioSynthNoiseWhite     voice6n;        //xy=1220.6190299987793,1508.6666355133057
AudioSynthWaveform       voice6a;        //xy=1222.6190299987793,1435.6666355133057
AudioSynthWaveform       voice7a;        //xy=1222.6190299987793,1667.6666355133057
AudioSynthWaveform       voice3b;        //xy=1228.6190299987793,715.6666355133057
AudioSynthNoiseWhite     voice3n;        //xy=1228.6190299987793,750.6666355133057
AudioSynthWaveform       voice3a;        //xy=1233.6190299987793,672.6666355133057
AudioSynthWaveform       voice1b;        //xy=1258.6190299987793,249.66663551330566
AudioSynthNoiseWhite     voice1n;        //xy=1261.6190299987793,293.66663551330566
AudioSynthWaveform       voice2b;        //xy=1261.6190299987793,483.66663551330566
AudioSynthNoiseWhite     voice2n;        //xy=1261.6190299987793,518.6666355133057
AudioSynthWaveform       voice1a;        //xy=1263.6190299987793,206.66663551330566
AudioSynthWaveform       voice2a;        //xy=1263.6190299987793,445.66663551330566
AudioSynthWaveformDc     voice8filterenv; //xy=1313.6190299987793,2087.6666355133057
AudioSynthWaveformDc     voice8env;      //xy=1327.6190299987793,2026.6666355133057
AudioMixer4              voice8mix;      //xy=1330.6190299987793,1961.6666355133057
AudioSynthWaveformDc     voice4filterenv; //xy=1335.6190299987793,1109.6666355133057
AudioSynthWaveformDc     voice5filterenv; //xy=1336.6190299987793,1365.6666355133057
AudioSynthWaveformDc     voice7filterenv; //xy=1345.6190299987793,1856.6666355133057
AudioSynthWaveformDc     voice4env;      //xy=1349.6190299987793,1048.6666355133057
AudioSynthWaveformDc     voice6filterenv; //xy=1348.6190299987793,1619.6666355133057
AudioSynthWaveformDc     voice5env;      //xy=1350.6190299987793,1304.6666355133057
AudioMixer4              voice4mix;      //xy=1352.6190299987793,983.6666355133057
AudioMixer4              voice5mix;      //xy=1353.6190299987793,1239.6666355133057
AudioSynthWaveformDc     voice3filterenv; //xy=1356.6190299987793,861.6666355133057
AudioSynthWaveformDc     voice7env;      //xy=1359.6190299987793,1795.6666355133057
AudioSynthWaveformDc     voice6env;      //xy=1362.6190299987793,1558.6666355133057
AudioMixer4              voice7mix;      //xy=1362.6190299987793,1730.6666355133057
AudioMixer4              voice6mix;      //xy=1365.6190299987793,1493.6666355133057
AudioSynthWaveformDc     voice3env;      //xy=1370.6190299987793,800.6666355133057
AudioMixer4              voice3mix;      //xy=1373.6190299987793,735.6666355133057
AudioSynthWaveformDc     voice1filterenv; //xy=1387.6190299987793,385.66663551330566
AudioSynthWaveformDc     voice2filterenv; //xy=1389.6190299987793,629.6666355133057
AudioMixer4              voice1mix;      //xy=1403.6190299987793,269.66663551330566
AudioSynthWaveformDc     voice2env;      //xy=1403.6190299987793,568.6666355133057
AudioSynthWaveformDc     voice1env;      //xy=1404.6190299987793,334.66663551330566
AudioMixer4              voice2mix;      //xy=1406.6190299987793,503.66663551330566
AudioEffectMultiply      voice8multiply; //xy=1494.6190299987793,1999.6666355133057
AudioMixer4              voice8filtermodmixer; //xy=1504.6190299987793,2115.6666355133057
AudioEffectMultiply      voice4multiply; //xy=1516.6190299987793,1021.6666355133057
AudioEffectMultiply      voice5multiply; //xy=1517.6190299987793,1277.6666355133057
AudioMixer4              voice4filtermodmixer; //xy=1526.6190299987793,1137.6666355133057
AudioEffectMultiply      voice7multiply; //xy=1526.6190299987793,1768.6666355133057
AudioEffectMultiply      voice6multiply; //xy=1529.6190299987793,1531.6666355133057
AudioMixer4              voice5filtermodmixer; //xy=1534.6190299987793,1387.6666355133057
AudioEffectMultiply      voice3multiply; //xy=1537.6190299987793,773.6666355133057
AudioMixer4              voice6filtermodmixer; //xy=1539.6190299987793,1647.6666355133057
AudioMixer4              voice7filtermodmixer; //xy=1543.6190299987793,1878.6666355133057
AudioMixer4              voice3filtermodmixer; //xy=1554.6190299987793,883.6666355133057
AudioEffectMultiply      voice1multiply; //xy=1567.6190299987793,307.66663551330566
AudioEffectMultiply      voice2multiply; //xy=1570.6190299987793,541.6666355133057
AudioMixer4              voice2filtermodmixer; //xy=1580.6190299987793,657.6666355133057
AudioMixer4              voice1filtermodmixer; //xy=1584.6190299987793,417.66663551330566
AudioFilterStateVariable voice8filter;   //xy=1677.6190299987793,2022.6666355133057
AudioFilterStateVariable voice5filter;   //xy=1697.6190299987793,1321.6666355133057
AudioFilterStateVariable voice4filter;   //xy=1699.6190299987793,1044.6666355133057
AudioFilterStateVariable voice7filter;   //xy=1706.6190299987793,1812.6666355133057
AudioFilterStateVariable voice6filter;   //xy=1712.6190299987793,1554.6666355133057
AudioFilterStateVariable voice3filter;   //xy=1717.6190299987793,817.6666355133057
AudioFilterStateVariable voice2filter;   //xy=1753.6190299987793,564.6666355133057
AudioFilterStateVariable voice1filter;   //xy=1770.6190299987793,359.66663551330566
AudioMixer4              last4premix;    //xy=2177.6190299987793,1294.6666355133057
AudioMixer4              first4premix;   //xy=2178.6190299987793,1210.6666355133057
AudioFilterStateVariable delayFilter;    //xy=2627.6190299987793,1404.6666355133057
AudioMixer4              mainOutMixer;   //xy=2698.6190299987793,1287.6666355133057
AudioEffectDelay         delay1;         //xy=2756.6190299987793,1599.6666355133057
AudioOutputI2S           i2s1;           //xy=2924.6190299987793,1285.6666355133057
AudioConnection          patchCord1(lfoenvelope, 0, mixer1, 0);
AudioConnection          patchCord2(lfo, 0, voice1filtermodmixer, 1);
AudioConnection          patchCord3(lfo, 0, voice2filtermodmixer, 1);
AudioConnection          patchCord4(lfo, 0, voice3filtermodmixer, 1);
AudioConnection          patchCord5(lfo, 0, voice4filtermodmixer, 1);
AudioConnection          patchCord6(lfo, 0, voice5filtermodmixer, 1);
AudioConnection          patchCord7(lfo, 0, voice6filtermodmixer, 1);
AudioConnection          patchCord8(lfo, 0, voice7filtermodmixer, 1);
AudioConnection          patchCord9(lfo, 0, voice8filtermodmixer, 1);
AudioConnection          patchCord10(lfo, 0, mixer1, 1);
AudioConnection          patchCord11(mixer1, peak1);
AudioConnection          patchCord12(voice8b, 0, voice8mix, 1);
AudioConnection          patchCord13(voice8n, 0, voice8mix, 2);
AudioConnection          patchCord14(voice8a, 0, voice8mix, 0);
AudioConnection          patchCord15(voice4a, 0, voice4mix, 0);
AudioConnection          patchCord16(voice4b, 0, voice4mix, 1);
AudioConnection          patchCord17(voice4n, 0, voice4mix, 2);
AudioConnection          patchCord18(voice5b, 0, voice5mix, 1);
AudioConnection          patchCord19(voice5n, 0, voice5mix, 2);
AudioConnection          patchCord20(voice5a, 0, voice5mix, 0);
AudioConnection          patchCord21(voice7b, 0, voice7mix, 1);
AudioConnection          patchCord22(voice7n, 0, voice7mix, 2);
AudioConnection          patchCord23(voice6b, 0, voice6mix, 1);
AudioConnection          patchCord24(voice6n, 0, voice6mix, 2);
AudioConnection          patchCord25(voice6a, 0, voice6mix, 0);
AudioConnection          patchCord26(voice7a, 0, voice7mix, 0);
AudioConnection          patchCord27(voice3b, 0, voice3mix, 1);
AudioConnection          patchCord28(voice3n, 0, voice3mix, 2);
AudioConnection          patchCord29(voice3a, 0, voice3mix, 0);
AudioConnection          patchCord30(voice1b, 0, voice1mix, 1);
AudioConnection          patchCord31(voice1n, 0, voice1mix, 2);
AudioConnection          patchCord32(voice2b, 0, voice2mix, 1);
AudioConnection          patchCord33(voice2n, 0, voice2mix, 3);
AudioConnection          patchCord34(voice1a, 0, voice1mix, 0);
AudioConnection          patchCord35(voice2a, 0, voice2mix, 0);
AudioConnection          patchCord36(voice8filterenv, 0, voice8filtermodmixer, 0);
AudioConnection          patchCord37(voice8env, 0, voice8multiply, 1);
AudioConnection          patchCord38(voice8mix, 0, voice8multiply, 0);
AudioConnection          patchCord39(voice4filterenv, 0, voice4filtermodmixer, 0);
AudioConnection          patchCord40(voice5filterenv, 0, voice5filtermodmixer, 0);
AudioConnection          patchCord41(voice7filterenv, 0, voice7filtermodmixer, 0);
AudioConnection          patchCord42(voice4env, 0, voice4multiply, 1);
AudioConnection          patchCord43(voice6filterenv, 0, voice6filtermodmixer, 0);
AudioConnection          patchCord44(voice5env, 0, voice5multiply, 1);
AudioConnection          patchCord45(voice4mix, 0, voice4multiply, 0);
AudioConnection          patchCord46(voice5mix, 0, voice5multiply, 0);
AudioConnection          patchCord47(voice3filterenv, 0, voice3filtermodmixer, 0);
AudioConnection          patchCord48(voice7env, 0, voice7multiply, 1);
AudioConnection          patchCord49(voice6env, 0, voice6multiply, 1);
AudioConnection          patchCord50(voice7mix, 0, voice7multiply, 0);
AudioConnection          patchCord51(voice6mix, 0, voice6multiply, 0);
AudioConnection          patchCord52(voice3env, 0, voice3multiply, 1);
AudioConnection          patchCord53(voice3mix, 0, voice3multiply, 0);
AudioConnection          patchCord54(voice1filterenv, 0, voice1filtermodmixer, 0);
AudioConnection          patchCord55(voice2filterenv, 0, voice2filtermodmixer, 0);
AudioConnection          patchCord56(voice1mix, 0, voice1multiply, 0);
AudioConnection          patchCord57(voice2env, 0, voice2multiply, 1);
AudioConnection          patchCord58(voice1env, 0, voice1multiply, 1);
AudioConnection          patchCord59(voice2mix, 0, voice2multiply, 0);
AudioConnection          patchCord60(voice8multiply, 0, voice8filter, 0);
AudioConnection          patchCord61(voice8filtermodmixer, 0, voice8filter, 1);
AudioConnection          patchCord62(voice4multiply, 0, voice4filter, 0);
AudioConnection          patchCord63(voice5multiply, 0, voice5filter, 0);
AudioConnection          patchCord64(voice4filtermodmixer, 0, voice4filter, 1);
AudioConnection          patchCord65(voice7multiply, 0, voice7filter, 0);
AudioConnection          patchCord66(voice6multiply, 0, voice6filter, 0);
AudioConnection          patchCord67(voice5filtermodmixer, 0, voice5filter, 1);
AudioConnection          patchCord68(voice3multiply, 0, voice3filter, 0);
AudioConnection          patchCord69(voice6filtermodmixer, 0, voice6filter, 1);
AudioConnection          patchCord70(voice7filtermodmixer, 0, voice7filter, 1);
AudioConnection          patchCord71(voice3filtermodmixer, 0, voice3filter, 1);
AudioConnection          patchCord72(voice1multiply, 0, voice1filter, 0);
AudioConnection          patchCord73(voice2multiply, 0, voice2filter, 0);
AudioConnection          patchCord74(voice2filtermodmixer, 0, voice2filter, 1);
AudioConnection          patchCord75(voice1filtermodmixer, 0, voice1filter, 1);
AudioConnection          patchCord76(voice8filter, 0, last4premix, 3);
AudioConnection          patchCord77(voice5filter, 0, last4premix, 0);
AudioConnection          patchCord78(voice4filter, 0, first4premix, 3);
AudioConnection          patchCord79(voice7filter, 0, last4premix, 2);
AudioConnection          patchCord80(voice6filter, 0, last4premix, 1);
AudioConnection          patchCord81(voice3filter, 0, first4premix, 2);
AudioConnection          patchCord82(voice2filter, 0, first4premix, 1);
AudioConnection          patchCord83(voice1filter, 0, first4premix, 0);
AudioConnection          patchCord84(last4premix, 0, mainOutMixer, 1);
AudioConnection          patchCord85(first4premix, 0, mainOutMixer, 0);
AudioConnection          patchCord86(delayFilter, 0, mainOutMixer, 3);
AudioConnection          patchCord87(mainOutMixer, 0, i2s1, 0);
AudioConnection          patchCord88(mainOutMixer, 0, i2s1, 1);
AudioConnection          patchCord89(mainOutMixer, delay1);
AudioConnection          patchCord90(delay1, 0, delayFilter, 0);
AudioControlSGTL5000     sgtl5000_1;     //xy=2661.6190299987793,1054.6666355133057
// GUItool: end automatically generated code







#include <Bounce.h>
//Mux control pins
int s0 = 27;
int s1 = 26;
int s2 = 25;
int s3 = 24;
//Mux in "SIG" pin
int SIG_pin = 28;



//Buttons
int notePins[8] = {0,1,2,8,16,17,20,21};

Bounce noteBounce[] = {
  Bounce(0,10),
  Bounce(1,10),
  Bounce(2,10),
  Bounce(8,10),
  Bounce(16,10),
  Bounce(17,10),
  Bounce(20,10),
  Bounce(21,10),

};

int colorIndex;
int keyIndex;
float noteFreq[7][8] = {

  //5       1       6      2      7      3      8     4  
  {329.63,220.00,369.99,246.94,415.30,277.18,440.00,293.66},
  {369.99,246.94,415.30,277.18,466.16,311.13,493.88,329.63},
  {392.00,261.63,440.00,293.66,493.88,329.63,523.25,349.23},
  {440.00,293.66,493.88,329.63,554.37,369.99,587.33,392.00},
  {493.88,329.63,554.37,369.99,622.25,415.30,659.25,440.00},
  {523.25,349.23,587.33,392.00,659.25,440.00,698.46,466.16},
  {587.33,392.00,659.25,440.00,739.99,493.88,783.99,523.25},
};

int btnState[8];
int prevBtnState[8];


//Analog Inputs
float analogValues[16];
float analogValuesLag[16];

int extraAnalogPins[5] = {A13,A18,A19,A20,A12};
float extraAnalogValues[5];
float extraAnalogValuesLag[5];
int changeThresh;
int extraChangeThresh;

//LEDS
int red = 3;
int green = 4;
int blue = 5;
int redLevel;
int greenLevel;
int blueLevel;
int redLevelArray[7] = {   182, 255, 0,   248, 0,   240,  255};
int greenLevelArray[7] = { 246, 0,   133, 159, 230, 0,    0};
int blueLevelArray[7] = {  41,  129, 252, 0,   255, 180, 40};


//EnvSwitch
int EnvSwitchPin = 32;
int envelopeFilter;

float tempPulseWidth;
float tempPeak;
float tempRMS;


//synth
float mainVolume;
int tempLineOutLevel;
float vcoOneLevel;
float vcoTwoLevel;
int vcoOneOct;
int vcoTwoOct;
int octArray[6] = {1,1,2,4,8,16};
float deTune;
int waveShapeOneIndex;
int waveShapeTwoIndex;
int lfoWaveShapeIndex;
int octOneIndex;
int octTwoIndex;
//WaveShapes
short waveShapes[4] = {
  WAVEFORM_SINE,
  WAVEFORM_SAWTOOTH,
  WAVEFORM_SQUARE,
  WAVEFORM_PULSE,
};
bool voiceBPulse;
float tempDetuneMod;
float deTuneLfo;
//LFO WaveShapes
short lfoWaveShapes[5] = {
  WAVEFORM_SINE,
  WAVEFORM_SAWTOOTH,
  WAVEFORM_SAWTOOTH_REVERSE,
  WAVEFORM_SQUARE,
  WAVEFORM_SAMPLE_HOLD,
};
//ADSR
int attackTime;
int decayTime;
float sustainLevel;
int releaseTime;
//Filter ADSR
int attackTimeFilter;
int decayTimeFilter;
float sustainLevelFilter;
int releaseTimeFilter;
//LFO ADSR
// int attackTimeLFO;
// int decayTimeLFO;
// float sustainLevelLFO;
// int releaseTimeLFO;

//Note Timing
bool noteTrigFlag[8];
unsigned long attackWait[8];

bool firstRunRead;




void setup() {
  AudioMemory(160);
  Serial.begin(115200);
  sgtl5000_1.enable();
  sgtl5000_1.volume(.7);

  //led Startup
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  analogWrite(red, 200);
  delay(300);
  analogWrite(red, 0);
  analogWrite(green, 255);
  analogWrite(blue, 0);
  delay(300);
  analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue, 255);  
  delay(300);
  analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue, 0); 
  redLevel = 182;
  greenLevel = 246;
  blueLevel = 41;

  //MUX
  pinMode(s0, OUTPUT); 
  pinMode(s1, OUTPUT); 
  pinMode(s2, OUTPUT); 
  pinMode(s3, OUTPUT); 
  pinMode(SIG_pin, INPUT);

  digitalWrite(s0, LOW);
  digitalWrite(s1, LOW);
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);


  //switch
  pinMode(EnvSwitchPin, INPUT_PULLUP);
  colorIndex = 0;
  keyIndex = 0;

  //mix
  first4premix.gain(0, .25);
  first4premix.gain(1, .25);
  first4premix.gain(2, .25);
  first4premix.gain(3, .25);
  last4premix.gain(0, .25);
  last4premix.gain(1, .25);
  last4premix.gain(2, .25);
  last4premix.gain(3, .25);

  //Voice 1
  voice1a.begin(.3,440,WAVEFORM_SQUARE);
  voice1b.begin(.3,440,WAVEFORM_SAWTOOTH);
  //Voice 2
  voice2a.begin(.3,440,WAVEFORM_SQUARE);
  voice2b.begin(.3,440,WAVEFORM_SAWTOOTH);
  //Voice 3
  voice3a.begin(.3,440,WAVEFORM_SQUARE);
  voice3b.begin(.3,440,WAVEFORM_SAWTOOTH);
  //Voice 4
  voice4a.begin(.3,440,WAVEFORM_SQUARE);
  voice4b.begin(.3,440,WAVEFORM_SAWTOOTH);
  //Voice 5
  voice5a.begin(.3,440,WAVEFORM_SQUARE);
  voice5b.begin(.3,440,WAVEFORM_SAWTOOTH);
  //Voice 6
  voice6a.begin(.3,440,WAVEFORM_SQUARE);
  voice6b.begin(.3,440,WAVEFORM_SAWTOOTH);
  //Voice 7
  voice7a.begin(.3,440,WAVEFORM_SQUARE);
  voice7b.begin(.3,440,WAVEFORM_SAWTOOTH);
  //Voice 8
  voice8a.begin(.3,440,WAVEFORM_SQUARE);
  voice8b.begin(.3,440,WAVEFORM_SAWTOOTH);

  delayFilter.frequency(3000);
  delayFilter.resonance(1);
  delay1.delay(0,0);
  mainOutMixer.gain(3,0);

  //LFO
  lfo.begin(1,3,WAVEFORM_SINE);

  vcoOneOct = 1;
  vcoTwoOct = 1;
  deTune = 1;
  mainOutMixer.gain(0,.5);
  lfoenvelope.amplitude(1);
  voiceBPulse = false;

  firstRunRead = true;


  pinMode(A18, INPUT);
  pinMode(A19, INPUT);
  pinMode(A20, INPUT);

  pinMode(32, INPUT_PULLUP);
  pinMode(33, OUTPUT);

  for(int i=0; i<8; i++){
    pinMode(notePins[i], INPUT_PULLUP);
    digitalWrite(notePins[i], HIGH);
    //audio startup
    if(i < 4){
      voice1env.amplitude(.5,1);
      voice1a.frequency(noteFreq[0][i]);
      voice1b.frequency(noteFreq[0][i]+3);
      delay(200);
      voice1env.amplitude(0,0);
    }
  }
}

float mapfloat(float x, float in_min, float in_max, float out_min, float out_max){
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
int getSmooth(int pin){
  int vals[5]; //array that stores 5 readings.
  for(int i = 0; i < 5; i++){
    vals[i] = analogRead(pin); //takes 5 readings.
  }
  float smooth = (vals[0] + vals[1] + vals[2] + vals[3] + vals[4]) / 5;
  return smooth;
}

int readMux(int channel){
  int controlPin[] = {s0, s1, s2, s3};

  int muxChannel[16][4]={
    {0,0,0,0}, //channel 0
    {1,0,0,0}, //channel 1
    {0,1,0,0}, //channel 2
    {1,1,0,0}, //channel 3
    {0,0,1,0}, //channel 4
    {1,0,1,0}, //channel 5
    {0,1,1,0}, //channel 6
    {1,1,1,0}, //channel 7
    {0,0,0,1}, //channel 8
    {1,0,0,1}, //channel 9
    {0,1,0,1}, //channel 10
    {1,1,0,1}, //channel 11
    {0,0,1,1}, //channel 12
    {1,0,1,1}, //channel 13
    {0,1,1,1}, //channel 14
    {1,1,1,1}  //channel 15
  };

  //loop through the 4 sig
  for(int i = 0; i < 4; i ++){
    digitalWrite(controlPin[i], muxChannel[channel][i]);
  }

  int val = getSmooth(SIG_pin);

  //return the value
  return val;
}

void loop() {

  //Volume
  mainVolume = analogRead(A1);
  mainVolume = mainVolume/1023;
  sgtl5000_1.volume(mainVolume);
  tempLineOutLevel = analogRead(A1);
  tempLineOutLevel = map(tempLineOutLevel, 0, 1023, 31, 13);
  sgtl5000_1.lineOutLevel(tempLineOutLevel);

  //envSwitch
  envelopeFilter = digitalRead(EnvSwitchPin);
  if(envelopeFilter == LOW){
      digitalWrite(33, HIGH);
  }else{
    digitalWrite(33, LOW);
  }
  //notes
  for(int i=0; i<8; i++){
    if(i == 0){
      voice1a.frequency((noteFreq[keyIndex][i]/4)*vcoOneOct);
      voice1b.frequency(((noteFreq[keyIndex][i]/4*vcoTwoOct) * deTune) * deTuneLfo);
    }
    if(i == 1){
      voice2a.frequency((noteFreq[keyIndex][i]/4)*vcoOneOct);
      voice2b.frequency(((noteFreq[keyIndex][i]/4*vcoTwoOct) * deTune) * deTuneLfo);
    }
    if(i == 2){
      voice3a.frequency((noteFreq[keyIndex][i]/4)*vcoOneOct);
      voice3b.frequency(((noteFreq[keyIndex][i]/4*vcoTwoOct) * deTune) * deTuneLfo);
    }
    if(i == 3){
      voice4a.frequency((noteFreq[keyIndex][i]/4)*vcoOneOct);
      voice4b.frequency(((noteFreq[keyIndex][i]/4*vcoTwoOct) * deTune) * deTuneLfo);
    }
    if(i == 4){
      voice5a.frequency((noteFreq[keyIndex][i]/4)*vcoOneOct);
      voice5b.frequency(((noteFreq[keyIndex][i]/4*vcoTwoOct) * deTune) * deTuneLfo);
    }
    if(i == 5){
      voice6a.frequency((noteFreq[keyIndex][i]/4)*vcoOneOct);
      voice6b.frequency(((noteFreq[keyIndex][i]/4*vcoTwoOct) * deTune) * deTuneLfo);
    }
    if(i == 6){
      voice7a.frequency((noteFreq[keyIndex][i]/4)*vcoOneOct);
      voice7b.frequency(((noteFreq[keyIndex][i]/4*vcoTwoOct) * deTune) * deTuneLfo);
    }
    if(i == 7){
      voice8a.frequency((noteFreq[keyIndex][i]/4)*vcoOneOct);
      voice8b.frequency(((noteFreq[keyIndex][i]/4*vcoTwoOct) * deTune) * deTuneLfo);
    }
    
    btnState[i] = digitalRead(notePins[i]);
    if (noteBounce[i].update()){
      Serial.println(noteFreq[keyIndex][i]);
      if(i == 0){
        if (btnState[i] == LOW && prevBtnState[i] == HIGH){
          voice1env.amplitude(1,attackTime);
          voice1filterenv.amplitude(1,attackTimeFilter);
          noteTrigFlag[i] = true;
          attackWait[i] = millis();
        }else{
          noteTrigFlag[i] = false;
          voice1env.amplitude(0,releaseTime);
          voice1filterenv.amplitude(-1, releaseTimeFilter);
        }
      }
      if(i == 1){
        if (btnState[i] == LOW && prevBtnState[i] == HIGH){
          voice2env.amplitude(1,attackTime);
          voice2filterenv.amplitude(1,attackTimeFilter);
          noteTrigFlag[i] = true;
          attackWait[i] = millis();
        }else{
          noteTrigFlag[i] = false;
          voice2env.amplitude(0,releaseTime);
          voice2filterenv.amplitude(-1, releaseTimeFilter);
        }
      }
      if(i == 2){
        if (btnState[i] == LOW && prevBtnState[i] == HIGH){
          voice3env.amplitude(1,attackTime);
          voice3filterenv.amplitude(1,attackTimeFilter);
          noteTrigFlag[i] = true;
          attackWait[i] = millis();
        }else{
          noteTrigFlag[i] = false;
          voice3env.amplitude(0,releaseTime);
          voice3filterenv.amplitude(-1, releaseTimeFilter);
        }
      }
      if(i == 3){
        if (btnState[i] == LOW && prevBtnState[i] == HIGH){
          voice4env.amplitude(1,attackTime);
          voice4filterenv.amplitude(1,attackTimeFilter);
          noteTrigFlag[i] = true;
          attackWait[i] = millis();
        }else{
          noteTrigFlag[i] = false;
          voice4env.amplitude(0,releaseTime);
          voice4filterenv.amplitude(-1, releaseTimeFilter);
        }
      }
      if(i == 4){
        if (btnState[i] == LOW && prevBtnState[i] == HIGH){
          voice5env.amplitude(1,attackTime);
          voice5filterenv.amplitude(1,attackTimeFilter);
          noteTrigFlag[i] = true;
          attackWait[i] = millis();
        }else{
          noteTrigFlag[i] = false;
          voice5env.amplitude(0,releaseTime);
          voice5filterenv.amplitude(-1, releaseTimeFilter);
        }
      }
      if(i == 5){
        if (btnState[i] == LOW && prevBtnState[i] == HIGH){
          voice6env.amplitude(1,attackTime);
          voice6filterenv.amplitude(1,attackTimeFilter);
          noteTrigFlag[i] = true;
          attackWait[i] = millis();
        }else{
          noteTrigFlag[i] = false;
          voice6env.amplitude(0,releaseTime);
          voice6filterenv.amplitude(-1, releaseTimeFilter);
        }
      }
      if(i == 6){
        if (btnState[i] == LOW && prevBtnState[i] == HIGH){
          voice7env.amplitude(1,attackTime);
          voice7filterenv.amplitude(1,attackTimeFilter);
          noteTrigFlag[i] = true;
          attackWait[i] = millis();
        }else{
          noteTrigFlag[i] = false;
          voice7env.amplitude(0,releaseTime);
          voice7filterenv.amplitude(-1, releaseTimeFilter);
        }
      }
      if(i == 7){
        if (btnState[i] == LOW && prevBtnState[i] == HIGH){
          voice8env.amplitude(1,attackTime);
          voice8filterenv.amplitude(1,attackTimeFilter);
          noteTrigFlag[i] = true;
          attackWait[i] = millis();
        }else{
          noteTrigFlag[i] = false;
          voice8env.amplitude(0,releaseTime);
          voice8filterenv.amplitude(-1, releaseTimeFilter);
        }
      }
    }
    if(btnState[i] == LOW){
      if(i == 0){
        if(millis() - attackWait[i] > attackTime && noteTrigFlag[i]){
          voice1env.amplitude(sustainLevel,decayTime);
        }
        if(millis() - attackWait[i] > attackTimeFilter && noteTrigFlag[i]){
          voice1filterenv.amplitude(sustainLevelFilter,decayTimeFilter);
        }
      }
      if(i == 1){
        if(millis() - attackWait[i] > attackTime && noteTrigFlag[i]){
          voice2env.amplitude(sustainLevel,decayTime);
        }
        if(millis() - attackWait[i] > attackTimeFilter && noteTrigFlag[i]){
          voice2filterenv.amplitude(sustainLevelFilter,decayTimeFilter);
        }
      }
      if(i == 2){
        if(millis() - attackWait[i] > attackTime && noteTrigFlag[i]){
          voice3env.amplitude(sustainLevel,decayTime);
        }
        if(millis() - attackWait[i] > attackTimeFilter && noteTrigFlag[i]){
          voice3filterenv.amplitude(sustainLevelFilter,decayTimeFilter);
        }
      }   
      if(i == 3){
        if(millis() - attackWait[i] > attackTime && noteTrigFlag[i]){
          voice4env.amplitude(sustainLevel,decayTime);
        }
        if(millis() - attackWait[i] > attackTimeFilter && noteTrigFlag[i]){
          voice4filterenv.amplitude(sustainLevelFilter,decayTimeFilter);
        }
      }  
      if(i == 4){
        if(millis() - attackWait[i] > attackTime && noteTrigFlag[i]){
          voice5env.amplitude(sustainLevel,decayTime);
        }
        if(millis() - attackWait[i] > attackTimeFilter && noteTrigFlag[i]){
          voice5filterenv.amplitude(sustainLevelFilter,decayTimeFilter);
        }
      }  
      if(i == 5){
        if(millis() - attackWait[i] > attackTime && noteTrigFlag[i]){
          voice6env.amplitude(sustainLevel,decayTime);
        }
        if(millis() - attackWait[i] > attackTimeFilter && noteTrigFlag[i]){
          voice6filterenv.amplitude(sustainLevelFilter,decayTimeFilter);
        }
      } 
      if(i == 6){
        if(millis() - attackWait[i] > attackTime && noteTrigFlag[i]){
          voice7env.amplitude(sustainLevel,decayTime);
        }
        if(millis() - attackWait[i] > attackTimeFilter && noteTrigFlag[i]){
          voice7filterenv.amplitude(sustainLevelFilter,decayTimeFilter);
        }
      } 
      if(i == 7){
        if(millis() - attackWait[i] > attackTime && noteTrigFlag[i]){
          voice8env.amplitude(sustainLevel,decayTime);
        }
        if(millis() - attackWait[i] > attackTimeFilter && noteTrigFlag[i]){
          voice8filterenv.amplitude(sustainLevelFilter,decayTimeFilter);
        }
      } 
    }
    prevBtnState[i] = btnState[i];
  }

  //knobs
  for(int i = 0; i < 16; i ++){
    analogValues[i] = readMux(i);

    if(i == 8 || i == 2){
      changeThresh = 250;
    }else if(i == 14)
      changeThresh = 200;
    else{
      changeThresh = 5;
    }
    if (abs(analogValues[i] - analogValuesLag[i]) > changeThresh || firstRunRead){
      //vcoOne
      if(i == 0){
        //oct
        octOneIndex = (analogValues[i]/204)+1;
        if(octOneIndex < 6){
          vcoOneOct = octArray[octOneIndex];
        }
      }
      if(i == 8){
        //shape
        waveShapeOneIndex = analogValues[i]/255;
        if(waveShapeOneIndex < 4){
          voice1a.begin(waveShapes[waveShapeOneIndex]);
          voice2a.begin(waveShapes[waveShapeOneIndex]);
          voice3a.begin(waveShapes[waveShapeOneIndex]);
          voice4a.begin(waveShapes[waveShapeOneIndex]);
          voice5a.begin(waveShapes[waveShapeOneIndex]);
          voice6a.begin(waveShapes[waveShapeOneIndex]);
          voice7a.begin(waveShapes[waveShapeOneIndex]);
          voice8a.begin(waveShapes[waveShapeOneIndex]);
        }
      }
      if(i == 4){
        //mix
        vcoOneLevel = (analogValues[i])/1023;
        vcoTwoLevel = 1 - (analogValues[i])/1023;
        voice1mix.gain(1,vcoOneLevel);
        voice1mix.gain(0,vcoTwoLevel);
        voice2mix.gain(1,vcoOneLevel);
        voice2mix.gain(0,vcoTwoLevel);
        voice3mix.gain(1,vcoOneLevel);
        voice3mix.gain(0,vcoTwoLevel);  
        voice4mix.gain(1,vcoOneLevel); 
        voice4mix.gain(0,vcoTwoLevel); 
        voice5mix.gain(1,vcoOneLevel); 
        voice5mix.gain(0,vcoTwoLevel); 
        voice6mix.gain(1,vcoOneLevel); 
        voice6mix.gain(0,vcoTwoLevel); 
        voice7mix.gain(1,vcoOneLevel); 
        voice7mix.gain(0,vcoTwoLevel); 
        voice8mix.gain(1,vcoOneLevel); 
        voice8mix.gain(0,vcoTwoLevel); 
      }
      //vcoTwo
      if(i == 12){
        //oct
        octTwoIndex = (analogValues[i]/204)+1;
        if(octTwoIndex < 6){
          vcoTwoOct = octArray[octTwoIndex];
        }

      }
      if(i == 2){
        //shape
        waveShapeTwoIndex = analogValues[i]/255;
        if(waveShapeTwoIndex < 4){
          if(waveShapeTwoIndex == 3){
            voiceBPulse = true;
          }else{
            voiceBPulse = false;
          }          
          voice1b.begin(waveShapes[waveShapeTwoIndex]);
          voice2b.begin(waveShapes[waveShapeTwoIndex]);
          voice3b.begin(waveShapes[waveShapeTwoIndex]);
          voice4b.begin(waveShapes[waveShapeTwoIndex]);
          voice5b.begin(waveShapes[waveShapeTwoIndex]);
          voice6b.begin(waveShapes[waveShapeTwoIndex]);
          voice7b.begin(waveShapes[waveShapeTwoIndex]);
          voice8b.begin(waveShapes[waveShapeTwoIndex]);
        }
      }
      if(i == 10){
        //detune
        deTune = analogValues[i];
        deTune = mapfloat(deTune, 0, 1023, .875, 1.125);
      }
      //LFO
      if(i == 6){
        //freq
        lfo.frequency(analogValues[i]/50);
      }
      if(i == 14){
        //shape
        lfoWaveShapeIndex = analogValues[i]/204.6;
        if(lfoWaveShapeIndex < 5){
          lfo.begin(lfoWaveShapes[lfoWaveShapeIndex]);
          Serial.println(lfoWaveShapeIndex);
        }
      }
      //noise
      if(i == 1){
        voice1n.amplitude(analogValues[i]/3096);
        voice2n.amplitude(analogValues[i]/3096);
        voice3n.amplitude(analogValues[i]/3096);
        voice4n.amplitude(analogValues[i]/3096);
        voice5n.amplitude(analogValues[i]/3096);
        voice6n.amplitude(analogValues[i]/3096);
        voice7n.amplitude(analogValues[i]/3096);
        voice8n.amplitude(analogValues[i]/3096);
      }
      //Filter
      if(i == 9){
        //frequency
        voice1filter.frequency(analogValues[i]*10);
        voice2filter.frequency(analogValues[i]*10);
        voice3filter.frequency(analogValues[i]*10);
        voice4filter.frequency(analogValues[i]*10);
        voice5filter.frequency(analogValues[i]*10);
        voice6filter.frequency(analogValues[i]*10);
        voice7filter.frequency(analogValues[i]*10);
        voice8filter.frequency(analogValues[i]*10);
      }
      if(i == 5){
        //resonance
        voice1filter.resonance((analogValues[i]/204)+.9);
        voice2filter.resonance((analogValues[i]/204)+.9);
        voice3filter.resonance((analogValues[i]/204)+.9);
        voice4filter.resonance((analogValues[i]/204)+.9);
        voice5filter.resonance((analogValues[i]/204)+.9);
        voice6filter.resonance((analogValues[i]/204)+.9);
        voice7filter.resonance((analogValues[i]/204)+.9);
        voice8filter.resonance((analogValues[i]/204)+.9);
      }
      if(i == 13){
        //lfo Mod
        voice1filtermodmixer.gain(1, analogValues[i]/1023);
        voice2filtermodmixer.gain(1, analogValues[i]/1023);
        voice3filtermodmixer.gain(1, analogValues[i]/1023);
        voice4filtermodmixer.gain(1, analogValues[i]/1023);
        voice5filtermodmixer.gain(1, analogValues[i]/1023);
        voice6filtermodmixer.gain(1, analogValues[i]/1023);
        voice7filtermodmixer.gain(1, analogValues[i]/1023);
        voice8filtermodmixer.gain(1, analogValues[i]/1023);
      }
      if(i == 3){
        //env Mod
        voice1filtermodmixer.gain(0, analogValues[i]/1023);
        voice2filtermodmixer.gain(0, analogValues[i]/1023);
        voice3filtermodmixer.gain(0, analogValues[i]/1023);
        voice4filtermodmixer.gain(0, analogValues[i]/1023);
        voice5filtermodmixer.gain(0, analogValues[i]/1023);
        voice6filtermodmixer.gain(0, analogValues[i]/1023);
        voice7filtermodmixer.gain(0, analogValues[i]/1023);
        voice8filtermodmixer.gain(0, analogValues[i]/1023);
      }
      //delay
      if(i == 11){
        //time
        delay1.delay(0, analogValues[i]/2.4);
      }
      if(i == 7){
        //feedback
        mainOutMixer.gain(3,analogValues[i]/1023);
      }
      //pulseWidth
      if(i == 15){
        tempPulseWidth = 1 - (analogValues[i]/1023);
        tempDetuneMod = analogValues[i]/2046;

      }
      analogValuesLag[i] = analogValues[i];   
    }      
  }
  //ExtraAnalogIn
  for(int i=0; i<5; i++){
    extraAnalogValues[i] = getSmooth(extraAnalogPins[i]);
    if(i == 0){
      extraChangeThresh = 144;
    }else{
      extraChangeThresh = 1;
    }
    if (abs(extraAnalogValues[i] - extraAnalogValuesLag[i]) > extraChangeThresh || firstRunRead){
      if(i == 0){
        //key
        colorIndex = extraAnalogValues[i]/146;
        if(colorIndex < 7){
          keyIndex = colorIndex;
          redLevel = redLevelArray[colorIndex];
          blueLevel = blueLevelArray[colorIndex];
          greenLevel = greenLevelArray[colorIndex];
        }
      }
      if(i == 1){
        //attack
        if(firstRunRead){
          attackTimeFilter = extraAnalogValues[i]*2;
          attackTime = extraAnalogValues[i]*2;
        }
        if(envelopeFilter == LOW){
          attackTimeFilter = extraAnalogValues[i]*2;
        }else{
          attackTime = extraAnalogValues[i]*2;
        }
      }
      if(i == 2){
        //decay
        if(firstRunRead){
          decayTimeFilter = extraAnalogValues[i];
          decayTime = extraAnalogValues[i];
        }
        if(envelopeFilter == LOW){
          decayTimeFilter = extraAnalogValues[i];
        }else{
          decayTime = extraAnalogValues[i];
        }
      }
      if(i == 3){
        //sustain
        if(firstRunRead){
          sustainLevelFilter = extraAnalogValues[i];
          sustainLevelFilter = mapfloat(sustainLevelFilter, 0, 1023, -1, 1);
          sustainLevel = extraAnalogValues[i]/1023;
        }
        if(envelopeFilter == LOW){
          sustainLevelFilter = extraAnalogValues[i];
          sustainLevelFilter = mapfloat(sustainLevelFilter, 0, 1023, -1, 1);
        }else{
          sustainLevel = extraAnalogValues[i]/1023;
        }
      }
      if(i == 4){
        //release
        if(firstRunRead){
          releaseTimeFilter = extraAnalogValues[i]*2;
          releaseTime = extraAnalogValues[i]*2;
        }
        if(envelopeFilter == LOW){
          releaseTimeFilter = extraAnalogValues[i]*2;
        }else{
          releaseTime = extraAnalogValues[i]*2;
        }
      }
      extraAnalogValuesLag[i] = extraAnalogValues[i];
    }
  }

  //LFO Peak
  if(peak1.available()){
    tempPeak = peak1.read();
  }
  analogWrite(blue, blueLevel*tempPeak);
  analogWrite(green, greenLevel*tempPeak);
  analogWrite(red, redLevel*tempPeak);
  voice1a.pulseWidth((tempPeak/2) + tempPulseWidth);
  voice2a.pulseWidth((tempPeak/2) + tempPulseWidth);
  voice3a.pulseWidth((tempPeak/2) + tempPulseWidth);
  voice4a.pulseWidth((tempPeak/2) + tempPulseWidth);
  voice5a.pulseWidth((tempPeak/2) + tempPulseWidth);
  voice6a.pulseWidth((tempPeak/2) + tempPulseWidth);
  voice7a.pulseWidth((tempPeak/2) + tempPulseWidth);
  voice8a.pulseWidth((tempPeak/2) + tempPulseWidth);

  if(voiceBPulse){
    voice1b.pulseWidth((tempPeak/2) + tempPulseWidth);
    voice2b.pulseWidth((tempPeak/2) + tempPulseWidth);
    voice3b.pulseWidth((tempPeak/2) + tempPulseWidth);
    voice4b.pulseWidth((tempPeak/2) + tempPulseWidth);
    voice5b.pulseWidth((tempPeak/2) + tempPulseWidth);
    voice6b.pulseWidth((tempPeak/2) + tempPulseWidth);
    voice7b.pulseWidth((tempPeak/2) + tempPulseWidth);
    voice8b.pulseWidth((tempPeak/2) + tempPulseWidth);
  }else{
    deTuneLfo = ((tempPeak) * tempDetuneMod + 1);
    //Serial.println(deTuneLfo);
  }
  firstRunRead = false;
}




