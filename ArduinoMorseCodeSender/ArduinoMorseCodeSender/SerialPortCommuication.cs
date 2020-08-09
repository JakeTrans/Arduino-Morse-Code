using System;
using System.Collections.Generic;
using System.IO.Ports;
using System.Linq;
using System.Text;

namespace ArduinoMorseCodeSender
{
    public class SerialPortCommuication : IDisposable
    {
        private bool disposedValue;
        public bool Connected = false;

        public SerialPortCommuication()
        {
            serialPort = new SerialPort();
        }

        public SerialPort serialPort { get; set; }

        public void SetupSerialPort(string postname)
        {
            serialPort.PortName = postname;
            serialPort.BaudRate = 9600;

            serialPort.Open();
            Connected = true;
        }

        public string[] AutodetectArdiuno()
        {
            string[] ports = SerialPort.GetPortNames();

            if (ports.Count() == 1)
            {
                SetupSerialPort(ports[0]);
            }

            return ports;
        }

        protected virtual void Dispose(bool disposing)
        {
            if (!disposedValue)
            {
                if (disposing)
                {
                    // TODO: dispose managed state (managed objects)
                    serialPort.Close();
                    serialPort.Dispose();
                }

                disposedValue = true;
            }
        }

        public void Dispose()
        {
            // Do not change this code. Put cleanup code in 'Dispose(bool disposing)' method

            Dispose(disposing: true);
            GC.SuppressFinalize(this);
        }
    }
}