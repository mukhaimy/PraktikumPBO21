using System;

namespace Belajar02
{
	class Program
	{
		public static void Main(string[] args)
		{
			// TODO: Implement Functionality Here
			T02();
			
			Console.Write("Press any key to continue . . . ");
			Console.ReadKey(true);
		}
		
		static void T01()
		{
			Console.WriteLine("Hello World!");
		}
		
		static void T02()
		{
        	string nama;
			int usia = 1;
        
			Console.Write("Nama Anda? ");
			nama = Console.ReadLine();
			Console.WriteLine("Hello, " + nama + " !");
	
			Console.Write("Berapa usia anda? ");
			usia = Convert.ToInt32(Console.ReadLine()); 
			// ^-- dari input ReadLine di konversi ke Integer 32 bit
			// usia = int.Parse(Console.ReadLine());
			
			// string s_usia = Console.ReadLine();
			// int.TryParse(s_usia, out usia);
        	Console.WriteLine("Usia yang anda input : {0}", usia);
    	}
			
	}
}