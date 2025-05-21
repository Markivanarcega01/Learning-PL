using System;

internal class Program
{
    private static void Main(string[] args)
    {
        Console.WriteLine("Enter your name:");
        string? name = Console.ReadLine();
        Console.WriteLine("Your name is " + name);
    }
}