class Solution {
    public int[] replaceElements(int[] arr) {
 for (int i = arr.length - 1, max = -1; i >= 0; --i) {
            int x=arr[i];
            arr[i]=max;
            max=Math.max(max,x);
        }
        return arr;
        
    }
}