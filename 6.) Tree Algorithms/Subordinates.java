/***************Subordinates***************/
//author: @Divyesh Chhabra

import java.util.*;
import java.lang.*;
import java.math.*;
import java.text.*;

public class Subordinates{
	public static void main(String[] arg){
		Scanner input = new Scanner(System.in);

		int employees = input.nextInt();
		int[] ans = new int[employees];
		Map<Integer,Integer> map = new HashMap<>();

		for(int i=0;i<employees-1;i++){
			map.put(i+2,input.nextInt());
		}

		find(map,1,ans);

		for(int i=0;i<employees;i++){
			System.out.print(ans[i]+" ");
		}
	}

	private static int find(Map<Integer,Integer> map,int boss,int[] ans){
		int myEmployee = 0;

		for(int employee:map.keySet()){
			if(map.get(employee) == boss){
				myEmployee += find(map,employee,ans)+1;
			}
		}

		return ans[boss-1]=myEmployee;
	}
}