// Parsing in C#
// Antonio Di Pio 
// 1/23/2022

using System; 

public class Example
{
    public static void Main() {
        Console.WriteLine("Enter a string to be parsed");
        String toBeParsed = Console.ReadLine();
        //String header = "* A Short String. *";
        //writes the current line terminator 
        String parsed = toBeParsed.Replace("/"," ");
        
        Console.WriteLine(parsed);

    }
}
