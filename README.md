
# edison_arduino

This repo contains Arduino (C/C++) code that runs on the edison (arduino).

Run these programs by using the Arduino IDE on a host computer to compile, push it to the chip, and run it.

#### NOTE: This is all still a work in progress!

## Subdirectories

intel_roadshow - what got me started on all this
	Contains a bash script that I wrote hoping it would run at startup.
	This did not work but I want to keep it for future reference anyways.

my_examples - modifications to the supplied examples

### my_examples

Contains Arduino (C/C++) scripts that demonstrate:

* Digital read and write
* Analog input
* Pulse Width Modulation (PWM)
* I2C (tbd)

#### Configuration

I developed these programs using the Edison Arduino breakout board and a Grove Starter Kit.

Following is a list of what actuators and sensors should be connected to which pins.

* Digital Pin 2 (D2) - LED (red)
* Digital Pin 3 (D3) - LED (green)
* Digital Pin 4 (D4) - LED (blue)
* Digital Pin 5 (D5) - Buzzer
* Digital Pin 5 (D7) - Touch sensor
* Digital Pin 5 (D8) - Button
* Analog Pin 0 (A0) - Rotary Angle Sensor (Potentiometer or "Pot")

Note that not all of the examples use all of these connections.

#### List of Examples

| Section | Example Name | Arduino (C/C++) | Node (JS) | Python |
| :------ | :----------- | :-------------: | :-------: | :----: |
| 01.Basics | 00-turnItOff            | Y | Y | Y |
|           | 01-blink                | Y | Y | Y |
|           | 02-analog-read          | Y | Y | Y |
|           | 03-digital-read         | Y | Y | Y |
| 02.Digital | 04-digital-write       | Y | Y | Y |
|            | 05-turnThemOff         | Y | Y | Y |
|            | 06-randomRgb           | Y | Y | Y |
|            | 07-buttonTogglesLed    | Y | Y | Y |
|            | 08-buttonTurnsOnLed    | Y | Y | Y |
|            | 09-debouncedButtonTogglesLed | Y |   | Y |
| 03.Analog | 10-UsingPwmToControlLed       | Y | Y | Y |
|           | 11-AnalogInputControlsLedPwm  | Y | Y | Y |
|           | 12-AnalogInputControlsLeds    | Y | Y | Y |
|           | 13-toneMelody                 | Y |   |   |
| 06.Sensors | 17-touchSensorTogglesLed     | Y | Y | Y |
|            | 18-touchSensorTurnsOnLed     | Y | Y | Y |


## Downloads

Following is a list of files downloaded for the Intel Edison, with brief
descriptions of what they contain, whether they're installed,
whether I want to use them on an on-going basis, etc.

### Downloaded Files

downloads/arduino-1.6.8-linux64.tar.xz
	Installed into /opt/arduino

downloads/edison-mcusdk-linux64-1.0.10.zip
	Downloaded from https://software.intel.com/iot/hardware/edison/downloads (Microcontroller (MCU) SDK -> Linux 64-bit)
	Unpacked into edison-mcusdk-linux64-1.0.10/

downloads/edison-sdk-linux64-ww25.5-15.zip
	Contains:
		poky-edison-glibc-x86_64-edison-image-core2-32-toolchain-1.7.2.manifest
		poky-edison-glibc-x86_64-edison-image-core2-32-toolchain-1.7.2.sh

downloads/iot-devkit-prof-dev-image-edison-20160315.zip
	Downloaded from https://software.intel.com/iot/hardware/edison/downloads (Release 3.0 Yocto complete image)
	Unpacked into iot-devkit-prof-dev-image-edison-20160315
	Used to flash the edison (install OS)

downloads/iot_web_linux64_master_3022.tgz
	Downloaded from https://software.intel.com/en-us/iot/software/ide/intel-xdk-iot-edition
	Also available at https://software.intel.com/en-us/iot/software/ide - Intel XDK IoT Edition - Download for Linux (64-bit)
	Unpacked into iot_web_linux64
	Contains version 1.6.5 of the arduino sdk

downloads/l_iot_dev_kit_2016.1.027.tar.gz
	Downloaded from https://software.intel.com/iot/hardware/edison/downloads - "Linux Installer"
	Also available at https://software.intel.com/en-us/iot/software/installers - Intel Edison Board Setup Tools and Installers - Linux
	Unpacked into l_iot_dev_kit_2016.1.027

downloads/iss-iot-linux_03-14-16.tar.bz2
	Downloaded from https://software.intel.com/en-us/iot/library/edison-getting-started - "Linux 64-bit"
**	This might actually contain the XDK IoT Edition?!?  Their links seem to be a bit messed up....
	Unpacked into iss-iot-linux

downloads/phoneflashtoollite_5.3.2.0_linux_x86_64.deb
	Downloaded from https://software.intel.com/iot/hardware/edison/downloads (Flash Tool Lite Download - Linux)
	Used to install phoneflashtoollite, which I used to flash the edison

downloads/xdk_web_linux64_master_3240.tgz
	Readme for the node version of blink demo code github: https://github.com/gomobile/iotapp-template-onboard-led-blink
	  refers to https://software.intel.com/en-us/html5 - clicking on XDK takes me to
	  where this download is available, at: https://software.intel.com/en-us/intel-xdk - Download for Linux (64-bit)
	Unpacked into xdk_web_linux64 (see below)
	XDK: phone apps? WTF?!?  (Even if this is the "correct" one, I would rather not use it.)

### Unpacking and Installing Downloaded Files

Where the downloaded are unpacked, if applicable, and more details about them such as whether they are installed, as appropriate.

unpacked/edison-sdk-linux64-ww25.5-15: unzipped edison-sdk-linux64-ww25.5-15.zip
	Contains:
		poky-edison-glibc-x86_64-edison-image-core2-32-toolchain-1.7.2.manifest
		poky-edison-glibc-x86_64-edison-image-core2-32-toolchain-1.7.2.sh

unpacked/edison-mcusdk-linux64-1.0.10: unzipped edison-mcusdk-linux64-1.0.10.zip
**	Contains ...

unpacked/iot-devkit-prof-dev-image-edison-20160315
	Contains image flashed to the edison by phoneflashtoollite

unpacked/iot_web_linux64
	Contains version 1.6.5 of the arduino sdk (USE 1.6.8 INSTEAD)
	Installed version 1.6.5 of the arduino sdk into /opt/intel/arduino (DO NOT USE)

unpacked/iss-iot-linux: unpacked iss-iot-linux_03-14-16.tar.bz2
**	This might actually contain the XDK IoT Edition?!?  Their links seem to be a bit messed up....

unpacked/l_iot_dev_kit_2016.1.027
	Downloaded from https://software.intel.com/iot/hardware/edison/downloads
	Running install_GUI.sh or install.sh updates the Edison image and installs the developer IDEs

unpacked/xdk_web_linux64
	Installed XDK into /opt/intel/XDK
	This looks like it should be used to create phone apps
	Even if this is the "correct" one, I would rather not use it.

