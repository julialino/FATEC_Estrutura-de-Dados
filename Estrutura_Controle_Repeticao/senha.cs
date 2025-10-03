using System;

class Program {
    static void Main() {
        string senhaCorreta = "1234";
        string senhaDigitada = "";

        while (senhaDigitada != senhaCorreta) {
            Console.Write("Digite a senha: ");
            senhaDigitada = Console.ReadLine();

            if (senhaDigitada != senhaCorreta) {
                Console.WriteLine("❌ Senha incorreta!");
            }
        }

        Console.WriteLine("✅ Senha correta!");
    }
}
