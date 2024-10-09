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

};  // class

void delay_s(unsigned int s) {
    delay(s * 1000);
}