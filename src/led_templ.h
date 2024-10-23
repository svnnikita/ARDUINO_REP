template<int pin>
class LED {
    public:
    LED() {};
    static void init() {pinMode(pin, OUTPUT);}
    static void on() {digitalWrite(pin, HIGH);}
    static void off() {digitalWrite(pin, LOW);}
};

template<int pin, int rpin, int gpin, int bpin>
class RGB_LED {
    public:
    RGB_LED() {};

    static void init() {pinMode(pin, OUTPUT); pinMode(rpin, OUTPUT); pinMode(gpin, OUTPUT); pinMode(bpin, OUTPUT);}

    static void on() {digitalWrite(pin, HIGH);}

    static void redLightOn() {digitalWrite(rpin, LOW); digitalWrite(gpin, HIGH); digitalWrite(bpin, HIGH);}

    static void off() {digitalWrite(pin, LOW);}

    static void redLightOff() {digitalWrite(rpin, LOW); digitalWrite(gpin, LOW); digitalWrite(bpin, LOW);}

    static void clrRGB(char color) {
        switch (color) {
            case 'r':
                digitalWrite(rpin, LOW);
                digitalWrite(gpin, HIGH);
                digitalWrite(bpin, HIGH);
                break;
            case 'g':
                digitalWrite(rpin, HIGH);
                digitalWrite(gpin, LOW);
                digitalWrite(bpin, HIGH);
                break;
            case 'b':
                digitalWrite(rpin, HIGH);
                digitalWrite(gpin, HIGH);
                digitalWrite(bpin, LOW);
                break;
            case 'w':
                digitalWrite(rpin, LOW);
                digitalWrite(gpin, LOW);
                digitalWrite(bpin, LOW);
                break;
            default:
                Serial.print('?');
                break;
        }
    }
};

void delay_s(unsigned int s) {
    delay(s * 1000);
}