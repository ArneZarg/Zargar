//CS 130 Lab 9
//Charlson So, Christine Martin, Arne Zargarian
//time complexity O(n*n)=O(n^2)

public class maj{
	public static int majo(int[] arr){
		int length = arr.length;
		int majCheck = length/2;
		int majority=0;
		for(int i=0; i<length; i++){
			int start = 0;
			for(int j=0; j<length;j++){
				if(arr[i]==arr[j]){
					start+=1;

				}
			}
			
			if(start>majCheck){
				majority=arr[i];
			}

		}

		return majority;
	}

	public static void main(String[] args){
		int[] ar={1,2,2,3,2,6,2,-5,2};
		int t = majo(ar);
		System.out.println(Integer.toString(t));

	}


}