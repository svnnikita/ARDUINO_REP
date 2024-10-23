class LED {

public:

    LED(int a_pin): pin{a_pin} {};

    void init() {
        pinMode(pin, OUTPUT); 
    }

    void on() {
        digitalWrite(pin, HIGH);
    }

    void off() {
        digitalWrite(pin, LOW); 
    }

private:
    int pin;

};

class RGB_LED {
    public:
        RGB_LED(int a_pin, int r_pin, int g_pin, int b_pin): pin{a_pin}, rpin{rpin}, gpin{g_pin}, bpin{b_pin} {};
        void init() {
            pinMode(pin, OUTPUT);
            pinMode(rpin, OUTPUT);
            pinMode(gpin, OUTPUT);
            pinMode(bpin, OUTPUT);
        }

        void on() {
            digitalWrite(pin, HIGH);
        }

        void redLightOn() {
            digitalWrite(rpin, LOW);
            digitalWrite(gpin, HIGH);
            digitalWrite(bpin, HIGH);
        }

        void off() {
            digitalWrite(pin, LOW);
        }

        void redLightOff() {
            digitalWrite(rpin, HIGH);
            digitalWrite(gpin, LOW);
            digitalWrite(bpin, LOW);
        }

    private:
        int rpin;
        int gpin;
        int bpin;
        int pin;
};

void delay_s(unsigned int s) {
    delay(s * 1000);
}