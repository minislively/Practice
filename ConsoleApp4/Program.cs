using System;

namespace Multi_Interface_Inheritance
{
    interface IRunnable
    {
        void Run();
    }
    interface IFlyable
    {
        void Fly();
    }
    class FlyingCar : IRunnable, IFlyable
    {
        public void Run()
        {
            Console.WriteLine("I Run!");

        }
        public void Fly()
        {
            Console.WriteLine("I Fly!");
        }
    }
    class MainApp
    {
        static void Main(string[] args)
        {
            FlyingCar car = new FlyingCar();
            car.Fly();
            car.Run();

            IRunnable runnable = car as IRunnable;
            runnable.Run();

            IFlyable flyable = car as IFlyable;
            flyable.Fly();
        }
    }
}