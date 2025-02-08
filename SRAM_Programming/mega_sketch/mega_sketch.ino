void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(20, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(28, OUTPUT);
  pinMode(29, OUTPUT);
  pinMode(30, OUTPUT);
  pinMode(31, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(34, OUTPUT);
  pinMode(35, OUTPUT);

  int data1_1[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  int data2_1[] = {1,1,1,1,1,1,1,1};
  read_cycle_sram(data1_1, data2_1);

  Serial.println("First Done");

  int data1_2[] = {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  int data2_2[] = {1,0,1,0,1,0,1,0};
  read_cycle_sram(data1_2, data2_2);

  Serial.println("Second Done");

  int data1_3[] = {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0};
  int data2_3[] = {1,1,1,1,1,1,1,1};
  read_cycle_sram(data1_3, data2_3);
  Serial.println("Third Done");

  int data1_4[] = {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0};
  int data2_4[] = {1,1,0,1,0,1,1,1};
  read_cycle_sram(data1_4, data2_4);
  Serial.println("Fourth Done");

  int data1_5[] = {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0};
  int data2_5[] = {0,1,0,1,0,1,0,1};
  read_cycle_sram(data1_5, data2_5);
  Serial.println("Fifth Done");

  int data1_6[] = {1,0,0,1,0,0,0,0,0,0,0,0,0,0,0};
  int data2_6[] = {0,1,0,1,1,1,1,1};
  read_cycle_sram(data1_6, data2_6);
  Serial.println("Sixth Done");

  pinMode(28, INPUT);
  pinMode(29, INPUT);
  pinMode(30, INPUT);
  pinMode(31, INPUT);
  pinMode(32, INPUT);
  pinMode(33, INPUT);
  pinMode(34, INPUT);
  pinMode(35, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int data1_1[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  output_cycle_sram(data1_1);
  delay(2000);

  int data1_2[] = {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  output_cycle_sram(data1_2);
  delay(2000);

  int data1_3[] = {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0};
  output_cycle_sram(data1_3);
  delay(2000);

  int data1_4[] = {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0};
  output_cycle_sram(data1_4);
  delay(2000);

  int data1_5[] = {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0};
  output_cycle_sram(data1_5);
  delay(2000);

  int data1_6[] = {1,0,0,1,0,0,0,0,0,0,0,0,0,0,0};
  output_cycle_sram(data1_6);
  delay(2000);
}

int read_cycle_sram(int address_arr[], int data_arr[])
{
  //Setting output enable High
  digitalWrite(26, HIGH);
  delay(1);

  //select the address
  for(int i = 0;i <=14;i++)
  {
    digitalWrite(2+i, address_arr[i]);
  }

  // Setting Write Enable LOW
  digitalWrite(25, LOW);
  delay(1);

  // Setting Chip select Low
  digitalWrite(27, LOW);
  delay(1);

  delay(1);

  // write the data
  for(int i = 0;i <= 7;i++)
  {
    digitalWrite(35-i, data_arr[i]);
    Serial.println("setting data");
  }
  delay(1);

  // Setting Write Enable High
  digitalWrite(25, HIGH);
  delay(1);

  return 0;
}

int output_cycle_sram(int address_arr[])
{
  // Setting Write Enable High
  digitalWrite(25, HIGH);
  delay(1);
  // Setting Chip select Low
  digitalWrite(27, LOW);
  delay(1);
  //Setting output enable Low
  digitalWrite(26, LOW);
  delay(1);

  //select the address
  for(int i = 0;i <=14;i++)
  {
    digitalWrite(2+i, address_arr[i]);
  }

  return 0;
}
