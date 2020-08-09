using System;
using System.IO.Ports;

namespace ArduinoMorseCodeSender
{
    internal class Program
    {
        private static SerialPort _serialPort;

        private static void Main(string[] args)
        {
            Console.WriteLine("Morse code serial communication Program:");
            Console.WriteLine("Finding Ports");

            string postname = "COM3";

            SerialPortCommuication SPC = new SerialPortCommuication();

            SPC.SetupSerialPort(postname);
            Console.WriteLine("Please enter message:");
            string message = Console.ReadLine();
            _serialPort.Write(message + "\n");

            _serialPort.Close();
        }
    }
}