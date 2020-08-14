/*


2) Given an array arr of size N and an integer K, the task is to find the maximum for each and every contiguous subarray of size K.
Example Input & Output:
Input: arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6}, K = 3
Output: 3 3 4 5 5 5 6
Input: arr[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13}, K = 4
Output: 10 10 10 15 15 90 90


*/


import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.Scanner;


public class Problem2 {
	public static int[] maxKRange(int[] nums, int k) {
        int[] result = new int[nums.length - k + 1];
        int writeIdx = 0;
        Deque<Integer> queue = new ArrayDeque<Integer>();
        for (int i = 0; i < nums.length; i++) {
            int currNum = nums[i];
            while (!queue.isEmpty() && queue.getFirst() <= (i - k)) {  
                queue.removeFirst();
            }
            while (!queue.isEmpty() && nums[queue.getLast()] < currNum) {
                queue.removeLast();
            }
            queue.addLast(i);
            if (i >= k - 1) {
                result[writeIdx] = nums[queue.getFirst()];
                writeIdx++;
            }
        }
        return result;
    }
	public static void main(String[] args) throws FileNotFoundException {
		File file = new File("input2.txt");
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
			/*
			for(Integer i : numList){
				System.out.print(i);
			}
			*/
			int ans[] = maxKRange(numList, k);
			for(Integer i : ans){
				System.out.print(i+" ");
			}
			System.out.println();
			
		}
		scanner.close();
	}

}
