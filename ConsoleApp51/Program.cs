using System;

namespace My
{
    class Dog
    {
        public string name;
        public string gender;
        
        public void Bark()
        {
            Console.WriteLine("{0} : 멍멍!", name);
        }
    }
    class MainApp
    {
        static void Main(string[] args)
        {
            Dog dog = new Dog();
            dog.name = "미미";
            dog.gender = "여자";

            dog.Bark();

            Console.WriteLine("개의 이름 : {0}, 개의 성별 : {1}", dog.name, dog.gender);
        }
    }
}