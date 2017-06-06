using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab7
{


    class Person
    {
        private static int IdCounter = 0;

        public int Id { get; private set; }
        public string FirstName { get; set; }
        public string MiddleName { get; set; }
        public string LastName { get; set; }
        public int curse { get; set; }
        public int rating_1_semester;
        public int rating_2_semester;
        public int rating_3_semester;
        public int rating_4_semester;
        public int rating_5_semester;
        public int rating_6_semester;
        public int rating_7_semester;
        public int rating_8_semester;

        public int exam1_1_semester { get; set; }
        public int exam2_1_semester { get; set; }
        public int exam3_1_semester { get; set; }
        public int exam4_1_semester { get; set; }

        public int exam1_2_semester { get; set; }
        public int exam2_2_semester { get; set; }
        public int exam3_2_semester { get; set; }
        public int exam4_2_semester { get; set; }

        public int exam1_3_semester { get; set; }
        public int exam2_3_semester { get; set; }
        public int exam3_3_semester { get; set; }
        public int exam4_3_semester { get; set; }

        public int exam1_4_semester { get; set; }
        public int exam2_4_semester { get; set; }
        public int exam3_4_semester { get; set; }
        public int exam4_4_semester { get; set; }

        public int exam1_5_semester { get; set; }
        public int exam2_5_semester { get; set; }
        public int exam3_5_semester { get; set; }
        public int exam4_5_semester { get; set; }

        public int exam1_6_semester { get; set; }
        public int exam2_6_semester { get; set; }
        public int exam3_6_semester { get; set; }
        public int exam4_6_semester { get; set; }

        public int exam1_7_semester { get; set; }
        public int exam2_7_semester { get; set; }
        public int exam3_7_semester { get; set; }
        public int exam4_7_semester { get; set; }

        public int exam1_8_semester { get; set; }
        public int exam2_8_semester { get; set; }
        public int exam3_8_semester { get; set; }
        public int exam4_8_semester { get; set; }

        string academic_performance;
        string rating_change;
        public int Group { get; set; }

        public Person()
        {
            Id = IdCounter++;
        }



        public virtual void Show()
        {
            Console.WriteLine($"Id: {Id}");
            Console.WriteLine($"FirstName: {FirstName}");
            Console.WriteLine($"MiddleName: {MiddleName}");
            Console.WriteLine($"LastName: {LastName}");
            Console.WriteLine($"Group: {Group}");
            Console.WriteLine($"Curse: {curse}");
            Console.WriteLine($"rating_1_semester: {rating_1_semester}");
            Console.WriteLine($"rating_2_semester: {rating_2_semester}");
            Console.WriteLine($"rating_3_semester: {rating_3_semester}");
            Console.WriteLine($"rating_4_semester: {rating_4_semester}");
            Console.WriteLine($"rating_5_semester: {rating_5_semester}");
            Console.WriteLine($"rating_6_semester: {rating_6_semester}");
            Console.WriteLine($"rating_7_semester: {rating_7_semester}");
            Console.WriteLine($"rating_8_semester: {rating_8_semester}");
            Console.WriteLine($"academic_performance: {academic_performance}");
        }

        class Program
        {
            static List<Person> Students;


            static void Help()
            {
                Console.WriteLine("(students) - operations with your students");
                Console.WriteLine("(student) - to show student");
                Console.WriteLine("(group) - to show group");
                Console.WriteLine("(curse) - to show curse");
            }

            static void ShowStudent()
            {
                string name = Console.ReadLine();
                string mname = Console.ReadLine();
                string lname = Console.ReadLine();
                foreach (Person p in Students)
                {
                    if (p.FirstName == name || p.MiddleName == mname || p.LastName == lname)
                    {
                        p.Show();
                    }
                    else
                    {
                        Console.WriteLine("Такого студента нету");
                    }
                }
            }

            static void ShowCurse()
            {
                int Curse = int.Parse(Console.ReadLine());
                foreach (Person p in Students)
                {
                    if (p.curse == Curse)
                    {
                        p.Show();
                    }
                    else
                    {
                        Console.WriteLine("Такого курса нету");
                    }
                }
            }

            static void ShowGroup()
            {
                int group = int.Parse(Console.ReadLine());
                foreach (Person p in Students)
                {
                    if (p.Group == group)
                    {
                        p.Show();
                    }
                    else
                    {
                        Console.WriteLine("Такой группы нету");
                    }
                }
            }

            static void PersonsCommand()
            {
                Console.WriteLine("Type Id to edit student");
                Console.WriteLine("(add) - to add student");
                Console.WriteLine("Something else to return in main menu");
                string command = Console.ReadLine();
                if (command == "add")
                    AddStudent();
                int id = 0;
                if (int.TryParse(command, out id))
                {
                    foreach (Person p in Students)
                        if (p.Id == id)
                        {
                            EditStudent(p);
                            break;
                        }
                }
            }

            static void EditStudent(Person student)
            {
                student.Show();
                Console.WriteLine("Type capacity to edit it, or type something else to return in main menu");
                string capacity = Console.ReadLine();
                string value;
                Console.WriteLine("Type value:");
                value = Console.ReadLine();
                student.FirstName = value;
                Console.WriteLine("Type value:");
                value = Console.ReadLine();
                student.MiddleName = value;
                Console.WriteLine("Type value:");
                value = Console.ReadLine();
                student.LastName = value;
                Console.WriteLine("Type value:");
                value = Console.ReadLine();
                student.Group = int.Parse(value);
                Console.WriteLine("Type value:");
                value = Console.ReadLine();
                student.curse = int.Parse(value);
                if (student.curse == 1)
                {
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam1_1_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam2_1_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam3_1_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam4_1_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam1_2_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam2_2_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam3_2_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam4_2_semester = int.Parse(value);
                    student.rating_1_semester = (student.exam1_1_semester + student.exam2_1_semester + student.exam3_1_semester + student.exam4_1_semester) / 4;
                    student.rating_2_semester = (student.exam1_2_semester + student.exam2_2_semester + student.exam3_2_semester + student.exam4_2_semester) / 4;
                    if (student.rating_1_semester - student.rating_2_semester < 0)
                    {
                        student.academic_performance = "УХУДШИЛСЯ";
                    }
                    else
                    {
                        student.academic_performance = "УЛУЧШИЛСЯ";
                    }
                }
                if (student.curse == 2)
                {
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam1_1_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam2_1_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam3_1_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam4_1_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam1_2_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam2_2_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam3_2_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam4_2_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam1_3_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam2_3_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam3_3_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam4_3_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam1_4_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam2_4_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam3_4_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam4_4_semester = int.Parse(value);
                    student.rating_1_semester = (student.exam1_1_semester + student.exam2_1_semester + student.exam3_1_semester + student.exam4_1_semester) / 4;
                    student.rating_2_semester = (student.exam1_2_semester + student.exam2_2_semester + student.exam3_2_semester + student.exam4_2_semester) / 4;
                    student.rating_3_semester = (student.exam1_3_semester + student.exam2_3_semester + student.exam3_3_semester + student.exam4_3_semester) / 4;
                    student.rating_4_semester = (student.exam1_4_semester + student.exam2_4_semester + student.exam3_4_semester + student.exam4_4_semester) / 4;
                    if (student.rating_3_semester - student.rating_4_semester < 0)
                    {
                        student.academic_performance = "УХУДШИЛСЯ";
                    }
                    else
                    {
                        student.academic_performance = "УЛУЧШИЛСЯ";
                    }
                }
                if (student.curse == 3)
                {
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam1_1_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam2_1_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam3_1_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam4_1_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam1_2_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam2_2_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam3_2_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam4_2_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam1_3_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam2_3_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam3_3_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam4_3_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam1_4_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam2_4_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam3_4_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam4_4_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam1_5_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam2_5_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam3_5_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam4_5_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam1_6_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam2_6_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam3_6_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam4_6_semester = int.Parse(value);
                    student.rating_1_semester = (student.exam1_1_semester + student.exam2_1_semester + student.exam3_1_semester + student.exam4_1_semester) / 4;
                    student.rating_2_semester = (student.exam1_2_semester + student.exam2_2_semester + student.exam3_2_semester + student.exam4_2_semester) / 4;
                    student.rating_3_semester = (student.exam1_3_semester + student.exam2_3_semester + student.exam3_3_semester + student.exam4_3_semester) / 4;
                    student.rating_4_semester = (student.exam1_4_semester + student.exam2_4_semester + student.exam3_4_semester + student.exam4_4_semester) / 4;
                    student.rating_5_semester = (student.exam1_5_semester + student.exam2_5_semester + student.exam3_5_semester + student.exam4_5_semester) / 4;
                    student.rating_6_semester = (student.exam1_6_semester + student.exam2_6_semester + student.exam3_6_semester + student.exam4_6_semester) / 4;
                    if (student.rating_5_semester - student.rating_6_semester < 0)
                    {
                        student.academic_performance = "УХУДШИЛСЯ";
                    }
                    else
                    {
                        student.academic_performance = "УЛУЧШИЛСЯ";
                    }
                }
                if (student.curse == 4)
                {
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam1_1_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam2_1_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam3_1_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam4_1_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam1_2_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam2_2_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam3_2_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam4_2_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam1_3_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam2_3_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam3_3_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam4_3_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam1_4_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam2_4_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam3_4_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam4_4_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam1_5_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam2_5_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam3_5_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam4_5_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam1_6_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam2_6_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam3_6_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam4_6_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam1_7_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam2_7_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam3_7_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam4_7_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam1_8_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam2_8_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam3_8_semester = int.Parse(value);
                    Console.WriteLine("Type value:");
                    value = Console.ReadLine();
                    student.exam4_8_semester = int.Parse(value);
                    student.rating_1_semester = (student.exam1_1_semester + student.exam2_1_semester + student.exam3_1_semester + student.exam4_1_semester) / 4;
                    student.rating_2_semester = (student.exam1_2_semester + student.exam2_2_semester + student.exam3_2_semester + student.exam4_2_semester) / 4;
                    student.rating_3_semester = (student.exam1_3_semester + student.exam2_3_semester + student.exam3_3_semester + student.exam4_3_semester) / 4;
                    student.rating_4_semester = (student.exam1_4_semester + student.exam2_4_semester + student.exam3_4_semester + student.exam4_4_semester) / 4;
                    student.rating_5_semester = (student.exam1_5_semester + student.exam2_5_semester + student.exam3_5_semester + student.exam4_5_semester) / 4;
                    student.rating_6_semester = (student.exam1_6_semester + student.exam2_6_semester + student.exam3_6_semester + student.exam4_6_semester) / 4;
                    student.rating_7_semester = (student.exam1_7_semester + student.exam2_7_semester + student.exam3_7_semester + student.exam4_7_semester) / 4;
                    student.rating_8_semester = (student.exam1_8_semester + student.exam2_8_semester + student.exam3_8_semester + student.exam4_8_semester) / 4;
                    if (student.rating_7_semester - student.rating_8_semester < 0)
                    {
                        student.academic_performance = "УХУДШИЛСЯ";
                    }
                    else
                    {
                        student.academic_performance = "УЛУЧШИЛСЯ";
                    }
                }

            }

            static void AddStudent()
            {
                Console.WriteLine("Student has been added");
                Students.Add(new Person());
            }

            static void Main(string[] args)
            {
                Students = new List<Person>();
                while (true)
                {
                    Console.WriteLine("Type your command (help):");
                    string command = Console.ReadLine();
                    switch (command)
                    {
                        case "help":
                            Help();
                            break;
                        case "students":
                            PersonsCommand();
                            break;
                        case "student":
                            ShowStudent();
                            break;
                        case "group":
                            ShowGroup();
                            break;
                        case "curse":
                            ShowGroup();
                            break;

                        default:
                            Console.WriteLine("Incorrect command! Please try again");
                            break;
                    }
                }

            }
        }
    }

}
