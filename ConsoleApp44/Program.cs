using System;

namespace My
{
    class Square
    {
        private double length;
        public double GetLength()
        {
            return length;
        }
        public void SetLength(double length_)
        {
            length = length_;
        }
        public double GetArea()
        {
            return length * length;
        }
    }
    class MainApp
    {
        static void Main(string[] args)
        {
            Square square = new Square();

            square.SetLength(2);

            Console.WriteLine("사각형의 넓이는 {0} 입니다.", square.GetArea());
        }
    }
}