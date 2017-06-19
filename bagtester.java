public class bagtester{
	public static void main(String[] args){
		double[] j = {0.15,0.25,0.5,0.18,0.014,0.2};
		int size = j.length;
		bag[] bagholder = new bag[size];
		for(int i = 0; i<size; i++){
			bagholder[size*j[i] + 1].add(j[i]);
		}

	}
}