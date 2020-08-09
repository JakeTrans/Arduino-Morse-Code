using System;
using System.Collections.Generic;
using System.IO.Ports;
using System.Text;

namespace ArduinoMorseCodeSender
{
    public class SerialPortCommuication
    {
        public SerialPortCommuication()
        {
            _serialPort = new SerialPort();
        }

        public SerialPort _serialPort { get; set; }

        public void SetupSerialPort(string postname)
        {
            _serialPort.PortName = postname;
            _serialPort.BaudRate = 9600;

            _serialPort.Open();
        }
    }
}