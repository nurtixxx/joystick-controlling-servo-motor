## 📜 How the Code Works

This code allows you to control a servo motor using the X-axis of a joystick. The servo smoothly adjusts its position based on the joystick's movement, with a dead zone for stability when the joystick is at rest. Here's how it works:

### Key Components:
1. **Servo Motor**: The motor that rotates to specific angles between 0° and 180°.
2. **Joystick**: Used to control the servo motor. Only the X-axis of the joystick is used in this code.

### Code Breakdown:
1. **Setup Phase** (`setup()` function):
   - The servo motor is attached to the specified pin (`servoPin`).
   - The initial position of the servo motor is set to **90°** (center).
   - Serial communication is initialized for debugging purposes.

2. **Main Loop** (`loop()` function):
   - The joystick's X-axis value is read using `analogRead()`. This value ranges from **0** (fully left) to **1023** (fully right).
   - The joystick value is converted to an angle (0° to 180°) using the `map()` function.

3. **Dead Zone**:
   - A **dead zone** is defined around the joystick's center position (value ≈ 512).  
     This prevents unnecessary movement of the servo when the joystick is slightly off-center or released.
   - If the joystick is in the dead zone:
     - The servo motor gradually returns to its **center position (90°)** for smoother behavior.
   - If the joystick is moved out of the dead zone:
     - The servo moves to the angle corresponding to the joystick's position.

4. **Smooth Movement**:
   - A small delay (`delay(15)`) ensures smooth and stable operation of the servo motor.


---

## **CONNECTIONS**

### 1. **JOYSTICK CONNECTION:**
   * Connect the **X-axis** pin to **A0** on the Arduino board.
   * Connect the **GND** pin to **GND** on the Arduino.
   * Connect the **5V** (or **VCC**) pin to the power supply (5V on Arduino).

### 2. **SERVO MOTOR CONNECTION:**
   * Connect the **Yellow** wire (signal) to **PIN 9** on the Arduino.
   * Connect the **Red** wire (power) to the power supply (**5V** or **3.3V**).
   * Connect the **Brown** wire (ground) to **GND** on the Arduino.

---

## **GUIDE: How to Upload Code to Arduino**

### **Step 1: Install Arduino IDE**
*  Go to the [official Arduino website](https://www.arduino.cc/en/software).
*  Download the IDE version for your operating system (Windows, macOS, or Linux).
*  Install the program by following the installation instructions.



### **Step 2: Connect Arduino to Your Computer**
* Connect the Arduino board to your computer using a USB cable.
* Ensure that the LEDs on the Arduino light up, indicating that power is supplied.



### **Step 3: Open the Arduino IDE**
* Launch the installed Arduino IDE program.
* Click **File** → **Open** to load your code file (sketch), or create a new file via **File** → **New**.



### **Step 4: Select the Arduino Board**
* From the top menu, select **Tools** → **Board**.
* In the list that appears, select your Arduino model (e.g., Arduino Uno, Arduino Nano).



### **Step 5: Select the Port**
* Go to **Tools** → **Port**.
* Choose the COM port corresponding to your Arduino board (it is usually named "COMX," where X is the port number).



### **Step 6: Verify the Code**
* Click the **✔️ Verify** button (or use the keyboard shortcut `Ctrl + R`) to check the code for errors.
* If there are no errors, you will see the message *"Compilation complete"* at the bottom of the window.



### **Step 7: Upload the Code**
* Click the **→ Upload** button (or use the keyboard shortcut `Ctrl + U`) to upload the code to the Arduino.
* Wait for the *"Done uploading"* message at the bottom of the IDE window.



### **Step 8: Test the Code**
* After successfully uploading the code, your Arduino will start executing the program.
* Check the operation of the device according to the functionality of the uploaded sketch.

---

### **Common Issues and Solutions**
- **Board not showing in Ports**: Check the USB connection or replace the cable.
- **Compilation error**: Check the code for syntax errors.
- **Upload error**: Make sure you selected the correct board model and port.


  
