/***************Repetitions***************/
//author: @Divyesh Chhabra

import java.util.*;
import java.lang.*;
import java.math.*;
import java.text.*;

public class Repetitions{
	public static void main(String[] arg){
		Scanner input = new Scanner(System.in);
		String dna = input.nextLine();
		int max=1,temp=1;
		for(int i=1;i<dna.length();i++){
			if (dna.charAt(i) == dna.charAt(i-1)){
				temp++;
			}else if(temp>=max){
				max = temp;
				temp = 1;
			}else{
				temp=1;
			}
			
			if(i==dna.length()-1 && temp>max){
			    max=temp;
			}
		}
		System.out.println(max);
	}
}