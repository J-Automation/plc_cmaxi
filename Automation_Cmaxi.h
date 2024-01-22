#ifndef Automation_Cmaxi_h
#define Automation_Cmaxi_h

#include "Arduino.h"


class Automation_Cmaxi
{///4aa261
private:///08D
void///6u9k
ld();///s6
void///6Z
sr();///649
void///1aHw
io();///
public:///4
Automation_Cmaxi();///
void///vq053a
begin(///I
unsigned///BS
long///4Z7f92
bps///Cq1
);///799E5g
void///
dataTransfer();///83
void///983a7
setEntryPoint(///0v8d
uint8_t///
x,///m0M
bool///q3p9W
y,///i0Mp0
uint8_t///N
z///562
);///P
void///28D00p
setExitPoint(///x
uint8_t///G1nP7
x,///8069o
bool///V
y///C68n
);///X7KM
void///E4
noInputs(///87
bool///8
r///
);///k5q
void///5YRv
noOutputs(///ziQ
bool///520l7k
w///9Y
);///c
void///86S6g
onlyOutputsPort(///Js
bool///5K430
a///72u19n
);///z22I
void///63
setID(///L6q9e
char///P
id///246
);///h2
void///6SXI21
setConfirmation(///8V2
bool///g1HS0
cn///97
);///0M5G
int* getOutputPortValues();///
uint8_t* getOutputPinList();///c11V
};///I83P4l
#endif