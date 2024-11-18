## **CODE DESCRIPTION**

This code allows the servo motor to turn in response to the joystick movement. When the joystick is turned left, the servo motor turns left, and when the joystick is turned right, the servo motor turns right.

---

## **CONNECTIONS**

1. **JOYSTICK CONNECTION:**
   - Connect the **X-axis** pin to **A0** on the Arduino board.
   - Connect the **GND** pin to **GND** on the Arduino.
   - Connect the **5V** (or **VCC**) pin to the power supply (5V on Arduino).

2. **SERVO MOTOR CONNECTION:**
   - Connect the **Yellow** wire (signal) to **PIN 9** on the Arduino.
   - Connect the **Red** wire (power) to the power supply (**5V** or **3.3V**).
   - Connect the **Brown** wire (ground) to **GND** on the Arduino.

---

## **GUIDE: How to Upload Code to Arduino**

### **Step 1: Install Arduino IDE**
1. Go to the [official Arduino website](https://www.arduino.cc/en/software).
2. Download the IDE version for your operating system (Windows, macOS, or Linux).
3. Install the program by following the installation instructions.

---

### **Step 2: Connect Arduino to Your Computer**
1. Connect the Arduino board to your computer using a USB cable.
2. Ensure that the LEDs on the Arduino light up, indicating that power is supplied.

---

### **Step 3: Open the Arduino IDE**
1. Launch the installed Arduino IDE program.
2. Click **File** → **Open** to load your code file (sketch), or create a new file via **File** → **New**.

---

### **Step 4: Select the Arduino Board**
1. From the top menu, select **Tools** → **Board**.
2. In the list that appears, select your Arduino model (e.g., Arduino Uno, Arduino Nano).

---

### **Step 5: Select the Port**
1. Go to **Tools** → **Port**.
2. Choose the COM port corresponding to your Arduino board (it is usually named "COMX," where X is the port number).

---

### **Step 6: Verify the Code**
1. Click the **✔️ Verify** button (or use the keyboard shortcut `Ctrl + R`) to check the code for errors.
2. If there are no errors, you will see the message *"Compilation complete"* at the bottom of the window.

---

### **Step 7: Upload the Code**
1. Click the **→ Upload** button (or use the keyboard shortcut `Ctrl + U`) to upload the code to the Arduino.
2. Wait for the *"Done uploading"* message at the bottom of the IDE window.

---

### **Step 8: Test the Code**
1. After successfully uploading the code, your Arduino will start executing the program.
2. Check the operation of the device according to the functionality of the uploaded sketch.

---

### **Common Issues and Solutions**
- **Board not showing in Ports**: Check the USB connection or replace the cable.
- **Compilation error**: Check the code for syntax errors.
- **Upload error**: Make sure you selected the correct board model and port.


  

