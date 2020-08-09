using System;
using System.IO.Ports;
using System.Linq;

namespace ArduinoMorseCodeSender
{
    internal class Program
    {
        private static void Main(string[] args)
        {
            SerialPortCommuication SPC = new SerialPortCommuication();

            Console.WriteLine("Morse code serial communication Program:");
            Console.WriteLine("Finding Ports");

            string[] ports = SPC.AutodetectArdiuno();

            if (SPC.Connected == true)
            {
                Console.WriteLine("Ardiuno found on " + ports[0]);
            }
            else if (ports.Length == 0)
            {
                Console.WriteLine("No COM port found");
                Console.ReadLine();
                return;
            }
            else
            {
                Console.WriteLine("multiple COM ports found");
                foreach (string port in ports)
                {
                    Console.WriteLine(port);
                }

                while (SPC.Connected == false)
                {
                    Console.WriteLine("Please type the port name to use.");
                    string comport = Console.ReadLine();

                    SPC.SetupSerialPort(comport);
                }
            }

            Console.WriteLine("Please enter message:");
            string message = Console.ReadLine();
            SPC.serialPort.Write(message + "\n");

            SPC.serialPort.Close();
        }
    }
}