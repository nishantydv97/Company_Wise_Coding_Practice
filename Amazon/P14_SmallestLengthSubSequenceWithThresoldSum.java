/*

4) Given an array arr[] of size N and a number K, the task is to find the length of the smallest subsequence such that the sum of the subsequence is greater than or equal to number K.
Input: arr[] = {2, 3, 1, 5, 6, 3, 7, 9, 14, 10, 2, 5}, K = 35
Output: 4
Smallest subsequence with the sum greater than or equal to the given sum K is {7, 9, 14, 10}
Input: arr[] = {1, 2, 2, 2, 3, 4, 5, 4, 7, 6, 5, 12}, K = 70
Output:-1
Subsequence with sum greater than equal to the given sum is not possible.


*/

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;


public class Problem4 {
	static int smallestSubSeqWithSum(int arr[], int n, int k)  
    {  
        int curr_sum = 0, min_len = n + 1;  
        int start = 0, end = 0; 
        while (end < n)  
        {
            while (curr_sum <= k && end < n) 
                curr_sum += arr[end++];  
            while (curr_sum > k && start < n)  
            {  
                if (end - start < min_len) 
                    min_len = end - start; 
                curr_sum -= arr[start++]; 
            } 
        }
        if(min_len>n){
        	return -1;
        }
        return min_len;
       
    } 

	public static void main(String[] args) throws FileNotFoundException {
		File file = new File("input4.txt");
		Scanner scanner = new Scanner(file);
		int testCase = Integer.parseInt(scanner.nextLine());
		while(testCase-- >0){
			int k = Integer.parseInt(scanner.nextLine());
			//System.out.println(k);
			String[] arrayString=scanner.nextLine().split(" ");
			int[] numList = new int[arrayString.length];
			for(int i=0;i<numList.length;i++){
				numList[i]=Integer.parseInt(arrayString[i]);
			}
			System.out.println(smallestSubSeqWithSum(numList,numList.length,k));
			
		}
		scanner.close();
	}

	}

