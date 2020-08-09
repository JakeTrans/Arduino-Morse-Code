using System;
using System.IO.Ports;

namespace ArduinoMorseCodeSender
{
    internal class Program
    {
        private static SerialPort _serialPort;

        private static void Main(string[] args)
        {
            // Console.WriteLine("Hello World!");
            _serialPort = new SerialPort();
            _serialPort.PortName = "COM3";
            _serialPort.BaudRate = 9600;

            _serialPort.Open();

            _serialPort.Write("SOS" + "\n");

            _serialPort.Close();
        }
    }
}