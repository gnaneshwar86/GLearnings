import java.util.Scanner;
class MathOperations {
    public static int calculate(int a){
        return a*a; 
     }
     public static int calculateCube(int a){
         return a*a*a;
     }
     public static float calculate(float a,float b){
         return a/b;
     }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int firstInteger = scanner.nextInt();
        int secondInteger = scanner.nextInt();
        float firstFloat = scanner.nextFloat();
        float secondFloat = scanner.nextFloat();
        int squareResult = calculate(firstInteger);
        int cubeResult = calculateCube(secondInteger);
        float divisionResult = calculate(firstFloat, secondFloat);
        System.out.printf("Square: %d%n", squareResult);
        System.out.printf("Cube: %d%n", cubeResult);
        System.out.printf("Division: %.2f%n", divisionResult);
        scanner.close();
    }
}
