﻿using System;

namespace BasicClass
{
    class Cat
    {
        public string Name;
        public string Color;

        public void Meow()
        {
            Console.WriteLine("{0} : 야옹", Name);
        }
    }
    class MainApp
    {
        static void Main(string[] args)
        {
            Cat kitty = new Cat();
            kitty.Color = "하얀색";
            kitty.Name = "키티";
            Console.WriteLine("{0} : {1}", kitty.Name, kitty.Color);

            Cat nero = new Cat();
            nero.Color = "검정색";
            nero.Name = "네로";
            Console.WriteLine("{0} : {1}", nero.Name, nero.Color);

        }
    }
}