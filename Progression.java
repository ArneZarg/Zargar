//Christine Martin, Arne Zargarian, Joshua Lim
//CSIS 130
//Lab 10

import java.util.Scanner;

/**
   This program calculates the geometric and
   harmonic progression for a number entered
   by the user.
*/

public class Progression
{
   public static void main(String[] args)
   {
      Scanner keyboard = new Scanner (System.in);

      System.out.println("This program will calculate " +
                         "the geometric and harmonic " +
                         "progression for the number " +
                         "you enter.");
                         
      System.out.print("Enter an integer that is " +
                       "greater than or equal to 1: ");
                       
      int input = keyboard.nextInt();

      // Match the method calls with the methods you write
      int geomAnswer = geometricRecursive(input);
      double harmAnswer = harmonicRecursive(input);

      System.out.println("Using recursion:");
      
      System.out.println("The geometric progression of " +
                         input + " is " + geomAnswer);
                         
      System.out.println("The harmonic progression of " +
                         input + " is " + harmAnswer);

      // Match the method calls with the methods you write
      geomAnswer = geometricIterative(input);
      harmAnswer = harmonicIterative(input);

      System.out.println("Using iteration:");
      System.out.println("The geometric progression of " +
                         input + " is " + geomAnswer);
                         
      System.out.println("The harmonic progression of " +
                         input + " is " + harmAnswer);
   }

   //Time Complexity = O(3n + 1) = O(n)
   public static int geometricRecursive(int input)
   {
      if(input == 0)
      {
         input = 1;
      }
      else if(input > 0)
      {
         input = input * geometricRecursive(input - 1);         
      }
      
      return input;
   }
   //Time Complexity = O(4n + 1) = O(n)
   public static double harmonicRecursive(double input)
   {
      if(input == 0)
      {
         input = 1;
      }
      else if(input > 0)
      {
         input = 1 / (input * harmonicRecursive(input - 1));         
      }
      
      return input;
   }
   //Time Complexity = O(3n + 1) = O(n)
   public static int geometricIterative(int input)
   {
      int result = 1;
      if(input == 0)
      {
         input = 0;
      }
      
      else if(input == 1)
      {
         input = 1;
      }
      else if(input > 1)
      {
         for(int i = 2; i <= input; i++)
         {
            result = result * i;
         }
      }
      
      return result;
      
   }
   //Time Complexity = O(4n + 1) = O(n)
   public static double harmonicIterative(double input)
   {
      double result = 1;
      if(input == 0)
      {
         input = 0;
      }
      
      else if(input == 1)
      {
         input = 1;
      }
      else if(input > 1)
      {
         for(int i = 2; i <= input; i++)
         {
            result = 1 / (result * i);
         }
      }
      
      return result;
   }
}