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

            string[] ports = SerialPort.GetPortNames();

            if (ports.Length > 1)
            {
                Console.WriteLine("More than one device connected stopping");
                Console.ReadLine();
                return;
            }
            else if (ports.Length == 0)
            {
                Console.WriteLine("No device connected stopping");
                Console.ReadLine();
                return;
            }
            _serialPort = new SerialPort();
            //_serialPort.PortName = "COM3";
            _serialPort.PortName = ports[0];
            _serialPort.BaudRate = 9600;

            _serialPort.Open();

            _serialPort.Write("this is a test" + "\n");

            _serialPort.Close();
        }
    }
}