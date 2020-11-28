package notasemoedas;

import java.util.Scanner;

public class NotasEMoedas {

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        float total;

        total = entrada.nextFloat();

        System.out.printf("NOTAS:\n%d nota(s) de R$ 100.00\n", (int) total / 100);
        System.out.printf("%d nota(s) de R$ 50.00\n", (int) ((total % 100) / 50));
        System.out.printf("%d nota(s) de R$ 20.00\n", (int) (((total % 100) % 50) / 20));
        System.out.printf("%d nota(s) de R$ 10.00\n", (int) ((((total % 100) % 50) % 20) / 10));
        System.out.printf("%d nota(s) de R$ 5.00\n", (int) (((((total % 100) % 50) % 20) % 10) / 5));
        System.out.printf("%d nota(s) de R$ 2.00\n", (int) ((((((total % 100) % 50) % 20) % 10) % 5) / 2));
        System.out.printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n", (int) (((((((total % 100) % 50) % 20) % 10) % 5) % 2) / 1));
        System.out.printf("%d moeda(s) de R$ 0.50\n", (int) (Math.round((total - (int) total) * 100)) / 50);
        System.out.printf("%d moeda(s) de R$ 0.25\n", (int) ((Math.round((total - (int) total) * 100)) % 50) / 25);
        System.out.printf("%d moeda(s) de R$ 0.10\n", (int) (((Math.round((total - (int) total) * 100)) % 50) % 25) / 10);
        System.out.printf("%d moeda(s) de R$ 0.05\n", (int) ((((Math.round((total - (int) total) * 100)) % 50) % 25) % 10) / 5);
        System.out.printf("%d moeda(s) de R$ 0.01\n", (int) (((((Math.round((total - (int) total) * 100)) % 50) % 25) % 10) % 5) / 1);
    }
}
