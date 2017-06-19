public class SelectionSort
{
   private double[] arr;
   
   public SelectionSort(double[] array)
   {
      arr = array;
   }
   
   
   public double[] sort()
   {
      int size = arr.length;
      int i, j, max;
      double temp;
      
      for(i = 0; i< size -1 ; i++ )
      {
            max = 0;
            for(j = 1; j <size -1 -i ; j++)
            {
               if(arr[j] > arr[max])
                  max= j;
            }
            temp = arr[size -1 -i];
            arr[size -1 -i] = arr[max];
            arr[max] = temp ;    
      }

      return arr;
   }

}