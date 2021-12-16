int motor1_dir = 11;
int motor1_pwm = 10;
int motor2_dir = 9;
int motor2_pwm = 8;

void setup()
{
    pinMode(motor1_dir,OUTPUT);
    pinMode(motor1_pwm,OUTPUT);
    pinMode(motor2_dir,OUTPUT);
    pinMode(motor2_pwm,OUTPUT);
}
void loop()
{
    digitalWrite(motor1_dir,LOW);
    analogWrite(motor1_pwm,100);
    digitalWrite(motor2_dir,LOW);
    analogWrite(motor2_pwm,100);
}
