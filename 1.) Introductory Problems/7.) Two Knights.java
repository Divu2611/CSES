/***************Two Knights***************/
//author: @Divyesh Chhabra

import java.util.*;
import java.lang.*;
import java.math.*;
import java.text.*;

public class Knights{
	public static void main(String[] arg){
		Scanner input = new Scanner(System.in);
		
		int test = input.nextInt();
		input.nextLine();
		
		int[] ans = {0,6,28};

		for(int k=1;k<=test;k++){
			
			if(k<4){
				System.out.println(ans[k-1]);
            	continue;
			}

			System.out.println((long)((Math.pow(k,2)*(Math.pow(k,2)-1) - 4*2 - 8*3 - 4*4*(k-4) - 4*4 - 4*6*(k-4) - 8*Math.pow((k-4),2))/2));
		}
	}
}