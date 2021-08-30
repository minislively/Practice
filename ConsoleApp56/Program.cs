using System;

namespace My
{
    class Dog
    {
        public string name;
        public string gender;
        public string ownernames;

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
            dog.name = "칸";
            dog.gender = "여자";
            dog.ownernames = "미나";

            Console.WriteLine("강아지 이름 : {0}, 성별 : {1}, 주인 : {2}", dog.name, dog.gender, dog.ownernames);

            dog.Bark();
        }
    }
}