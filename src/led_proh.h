constexpr int LED_PIN{8};

void builtin_led_init() {
    pinMode(LED_PIN, OUTPUT);
}

void builtin_led_on() {
    digitalWrite(LED_PIN, HIGH);
}

void builtin_led_off() {
    digitalWrite(LED_PIN, LOW);
}

void delay_s(unsigned int s) {
    delay(s * 1000);
}